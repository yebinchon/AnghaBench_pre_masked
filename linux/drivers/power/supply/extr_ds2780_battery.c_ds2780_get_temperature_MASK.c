
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ds2780_device_info {int dummy; } ;
typedef int s16 ;


 int VAR_0 ;
 int FUNC_0 (struct ds2780_device_info*,int*,int ) ;

__attribute__((used)) static int FUNC_1(struct ds2780_device_info *VAR_1,
 int *VAR_2)
{
 int VAR_3;
 s16 VAR_4;
 VAR_3 = FUNC_0(VAR_1, &VAR_4,
    VAR_0);
 if (VAR_3 < 0)
  return VAR_3;







 *VAR_2 = ((VAR_4 / 32) * 125) / 100;
 return 0;
}
