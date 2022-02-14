
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bq2415x_device {int dummy; } ;
 int VAR_0 ;

 int FUNC_0 (struct bq2415x_device*) ;
 int FUNC_1 (struct bq2415x_device*,int ) ;

__attribute__((used)) static int FUNC_2(struct bq2415x_device *VAR_1)
{
 int VAR_2 = FUNC_1(VAR_1, VAR_0);
 int VAR_3 = FUNC_0(VAR_1);

 if (VAR_2 < 0 || VAR_3 < 0)
  return -1;

 switch (VAR_3) {
 case 140:
 case 139:
 case 138:
 case 137:
 case 136:
  if (VAR_2 >= 0 && VAR_2 <= 3)
   return VAR_2;
  return -1;
 case 135:
 case 134:
 case 132:
 case 131:
 case 130:
 case 129:
  if (VAR_2 == 3)
   return 0;
  else if (VAR_2 == 1)
   return 1;
  return -1;
 case 133:
  if (VAR_2 == 3)
   return 3;
  return -1;
 case 128:
  return -1;
 }

 return -1;
}
