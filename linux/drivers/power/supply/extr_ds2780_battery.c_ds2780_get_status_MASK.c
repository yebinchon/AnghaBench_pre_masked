
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ds2780_device_info {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct ds2780_device_info*,int*) ;
 int FUNC_1 (struct ds2780_device_info*,int ,int*) ;

__attribute__((used)) static int FUNC_2(struct ds2780_device_info *VAR_5, int *VAR_6)
{
 int VAR_7, VAR_8, VAR_9;

 VAR_7 = FUNC_1(VAR_5, VAR_0, &VAR_8);
 if (VAR_7 < 0)
  return VAR_7;

 VAR_7 = FUNC_0(VAR_5, &VAR_9);
 if (VAR_7 < 0)
  return VAR_7;

 if (VAR_9 == 100)
  *VAR_6 = VAR_3;
 else if (VAR_8 == 0)
  *VAR_6 = VAR_4;
 else if (VAR_8 < 0)
  *VAR_6 = VAR_2;
 else
  *VAR_6 = VAR_1;

 return 0;
}
