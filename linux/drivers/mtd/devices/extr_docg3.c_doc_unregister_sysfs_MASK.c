
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
struct platform_device {struct device dev; } ;
struct docg3_cascade {scalar_t__* floors; } ;


 int VAR_0 ;
 int FUNC_0 (struct device*,int *) ;
 int ** VAR_1 ;

__attribute__((used)) static void FUNC_1(struct platform_device *VAR_2,
     struct docg3_cascade *VAR_3)
{
 struct device *VAR_4 = &VAR_2->dev;
 int VAR_5, VAR_6;

 for (VAR_5 = 0; VAR_5 < VAR_0 && VAR_3->floors[VAR_5];
      VAR_5++)
  for (VAR_6 = 0; VAR_6 < 4; VAR_6++)
   FUNC_0(VAR_4, &VAR_1[VAR_5][VAR_6]);
}
