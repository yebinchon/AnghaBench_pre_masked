
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct ds2781_device_info {int dummy; } ;
typedef int raw ;


 int VAR_0 ;
 int FUNC_0 (struct ds2781_device_info*,int ) ;
 int FUNC_1 (struct ds2781_device_info*,int*,int ,int) ;

__attribute__((used)) static int FUNC_2(struct ds2781_device_info *VAR_1,
 u16 VAR_2)
{
 int VAR_3;
 u8 VAR_4[] = {VAR_2 >> 8, VAR_2 & 0xFF};

 VAR_3 = FUNC_1(VAR_1, VAR_4,
    VAR_0, sizeof(VAR_4));
 if (VAR_3 < 0)
  return VAR_3;

 return FUNC_0(VAR_1, VAR_0);
}
