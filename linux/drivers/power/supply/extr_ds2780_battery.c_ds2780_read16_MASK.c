
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ds2780_device_info {int dummy; } ;
typedef int s16 ;
typedef int raw ;


 int FUNC_0 (struct ds2780_device_info*,int*,int,int,int ) ;

__attribute__((used)) static int FUNC_1(struct ds2780_device_info *VAR_0, s16 *VAR_1,
 int VAR_2)
{
 int VAR_3;
 u8 VAR_4[2];

 VAR_3 = FUNC_0(VAR_0, VAR_4, VAR_2, sizeof(VAR_4), 0);
 if (VAR_3 < 0)
  return VAR_3;

 *VAR_1 = (VAR_4[0] << 8) | VAR_4[1];

 return 0;
}
