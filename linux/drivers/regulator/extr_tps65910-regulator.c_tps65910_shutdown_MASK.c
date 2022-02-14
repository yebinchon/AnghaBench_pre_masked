
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tps65910_reg {int num_regulators; int * rdev; } ;
struct platform_device {int dev; } ;


 int FUNC_0 (int *,char*) ;
 struct tps65910_reg* FUNC_1 (struct platform_device*) ;
 int FUNC_2 (struct tps65910_reg*,int,int ) ;

__attribute__((used)) static void FUNC_3(struct platform_device *VAR_0)
{
 struct tps65910_reg *VAR_1 = FUNC_1(VAR_0);
 int VAR_2;
 for (VAR_2 = 0; VAR_2 < VAR_1->num_regulators; VAR_2++) {
  int VAR_3;
  if (!VAR_1->rdev[VAR_2])
   continue;

  VAR_3 = FUNC_2(VAR_1, VAR_2, 0);
  if (VAR_3 < 0)
   FUNC_0(&VAR_0->dev,
    "Error in clearing external control\n");
 }
}
