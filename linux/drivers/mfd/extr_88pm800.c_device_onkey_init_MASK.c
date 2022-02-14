
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pm80x_platform_data {int dummy; } ;
struct pm80x_chip {int dev; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ,int ,int *,int ,int *,int ,int *) ;
 int * VAR_0 ;
 int * VAR_1 ;

__attribute__((used)) static int FUNC_3(struct pm80x_chip *VAR_2,
    struct pm80x_platform_data *VAR_3)
{
 int VAR_4;

 VAR_4 = FUNC_2(VAR_2->dev, 0, &VAR_0[0],
         FUNC_0(VAR_0), &VAR_1[0], 0,
         ((void*)0));
 if (VAR_4) {
  FUNC_1(VAR_2->dev, "Failed to add onkey subdev\n");
  return VAR_4;
 }

 return 0;
}
