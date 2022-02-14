
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nand_chip {int dummy; } ;
struct mtd_info {int dummy; } ;
struct brcmnand_host {TYPE_1__* pdev; struct brcmnand_controller* ctrl; } ;
struct brcmnand_controller {int features; int dev; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct brcmnand_controller*,int,int,int ) ;
 int FUNC_1 (struct brcmnand_controller*,int) ;
 int FUNC_2 (int ,char*,char*) ;
 int FUNC_3 (int *,char*,char*) ;
 struct nand_chip* FUNC_4 (struct mtd_info*) ;
 struct brcmnand_host* FUNC_5 (struct nand_chip*) ;
 int FUNC_6 (struct nand_chip*,int *) ;
 int VAR_4 ;

__attribute__((used)) static void FUNC_7(struct mtd_info *VAR_5, int VAR_6)
{
 struct nand_chip *VAR_7 = FUNC_4(VAR_5);
 struct brcmnand_host *VAR_8 = FUNC_5(VAR_7);
 struct brcmnand_controller *VAR_9 = VAR_8->ctrl;

 if ((VAR_9->features & VAR_0) && VAR_4 == 1) {
  static int VAR_10 = -1;
  int VAR_11;

  if (VAR_10 != VAR_6) {
   FUNC_2(VAR_9->dev, "WP %s\n", VAR_6 ? "on" : "off");
   VAR_10 = VAR_6;
  }





  VAR_11 = FUNC_0(VAR_9, VAR_1 |
            VAR_2,
            VAR_1 |
            VAR_2, 0);
  if (VAR_11)
   return;

  FUNC_1(VAR_9, VAR_6);
  FUNC_6(VAR_7, ((void*)0));

  VAR_11 = FUNC_0(VAR_9,
            VAR_1 |
            VAR_2 |
            VAR_3,
            VAR_1 |
            VAR_2 |
            (VAR_6 ? 0 : VAR_3), 0);

  if (VAR_11)
   FUNC_3(&VAR_8->pdev->dev,
         "nand #WP expected %s\n",
         VAR_6 ? "on" : "off");
 }
}
