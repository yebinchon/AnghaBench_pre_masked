
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ds2781_device_info {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct ds2781_device_info*,char*,int ,int) ;

__attribute__((used)) static int FUNC_1(struct ds2781_device_info *VAR_1,
 int *VAR_2)
{
 int VAR_3;
 char VAR_4[2];
 int VAR_5;

 VAR_3 = FUNC_0(VAR_1, VAR_4, VAR_0, 2 * sizeof(u8));
 if (VAR_3 < 0)
  return VAR_3;
 VAR_5 = (VAR_4[0] << 3) |
  (VAR_4[1] >> 5);



 *VAR_2 = VAR_5 * 9760;

 return 0;
}
