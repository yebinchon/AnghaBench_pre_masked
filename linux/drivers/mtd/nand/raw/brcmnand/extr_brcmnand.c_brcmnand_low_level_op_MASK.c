
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct nand_chip {int dummy; } ;
struct brcmnand_host {struct brcmnand_controller* ctrl; struct nand_chip chip; } ;
struct brcmnand_controller {int dev; } ;
typedef enum brcmnand_llop_type { ____Placeholder_brcmnand_llop_type } brcmnand_llop_type ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;




 int FUNC_0 (struct brcmnand_controller*,int ) ;
 int FUNC_1 (struct brcmnand_host*,int ) ;
 int FUNC_2 (struct nand_chip*) ;
 int FUNC_3 (struct brcmnand_controller*,int ,int) ;
 int FUNC_4 (int ,char*,int) ;

__attribute__((used)) static int FUNC_5(struct brcmnand_host *VAR_8,
     enum brcmnand_llop_type VAR_9, u32 VAR_10,
     bool VAR_11)
{
 struct nand_chip *VAR_12 = &VAR_8->chip;
 struct brcmnand_controller *VAR_13 = VAR_8->ctrl;
 u32 VAR_14;

 VAR_14 = VAR_10 & VAR_4;
 switch (VAR_9) {
 case 130:
  VAR_14 |= VAR_7 | VAR_3;
  break;
 case 131:

  VAR_14 |= VAR_7 | VAR_2;
  break;
 case 128:

  VAR_14 |= VAR_7;
  break;
 case 129:

  VAR_14 |= VAR_5;
  break;
 }
 if (VAR_11)

  VAR_14 |= VAR_6;

 FUNC_4(VAR_13->dev, "ll_op cmd %#x\n", VAR_14);

 FUNC_3(VAR_13, VAR_0, VAR_14);
 (void)FUNC_0(VAR_13, VAR_0);

 FUNC_1(VAR_8, VAR_1);
 return FUNC_2(VAR_12);
}
