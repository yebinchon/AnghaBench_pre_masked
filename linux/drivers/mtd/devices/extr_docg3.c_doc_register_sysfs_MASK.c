
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
struct platform_device {struct device dev; } ;
struct docg3_cascade {scalar_t__* floors; } ;


 int VAR_0 ;
 int FUNC_0 (struct device*,int *) ;
 int FUNC_1 (struct device*,int *) ;
 int ** VAR_1 ;

__attribute__((used)) static int FUNC_2(struct platform_device *VAR_2,
         struct docg3_cascade *VAR_3)
{
 struct device *VAR_4 = &VAR_2->dev;
 int VAR_5;
 int VAR_6;
 int VAR_7;

 for (VAR_5 = 0;
      VAR_5 < VAR_0 && VAR_3->floors[VAR_5];
      VAR_5++) {
  for (VAR_7 = 0; VAR_7 < 4; VAR_7++) {
   VAR_6 = FUNC_0(VAR_4, &VAR_1[VAR_5][VAR_7]);
   if (VAR_6)
    goto remove_files;
  }
 }

 return 0;

remove_files:
 do {
  while (--VAR_7 >= 0)
   FUNC_1(VAR_4, &VAR_1[VAR_5][VAR_7]);
  VAR_7 = 4;
 } while (--VAR_5 >= 0);

 return VAR_6;
}
