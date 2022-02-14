
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spear_snor_flash {int mtd; } ;
struct spear_smi {int num_flashes; int clk; struct spear_snor_flash** flash; } ;
struct platform_device {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int *) ;
 struct spear_smi* FUNC_3 (struct platform_device*) ;

__attribute__((used)) static int FUNC_4(struct platform_device *VAR_1)
{
 struct spear_smi *VAR_2;
 struct spear_snor_flash *VAR_3;
 int VAR_4, VAR_5;

 VAR_2 = FUNC_3(VAR_1);
 if (!VAR_2) {
  FUNC_1(&VAR_1->dev, "dev is null\n");
  return -VAR_0;
 }


 for (VAR_5 = 0; VAR_5 < VAR_2->num_flashes; VAR_5++) {
  VAR_3 = VAR_2->flash[VAR_5];
  if (!VAR_3)
   continue;


  VAR_4 = FUNC_2(&VAR_3->mtd);
  if (VAR_4)
   FUNC_1(&VAR_1->dev, "error removing mtd\n");
 }

 FUNC_0(VAR_2->clk);

 return 0;
}
