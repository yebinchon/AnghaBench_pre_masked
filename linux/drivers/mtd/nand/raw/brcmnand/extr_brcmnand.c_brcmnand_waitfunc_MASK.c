
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct nand_chip {int dummy; } ;
struct brcmnand_host {struct brcmnand_controller* ctrl; } ;
struct brcmnand_controller {scalar_t__ cmd_pending; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct brcmnand_controller*) ;
 int FUNC_1 (struct brcmnand_controller*,int ) ;
 int FUNC_2 (struct nand_chip*) ;
 int FUNC_3 (int ,char*,scalar_t__) ;
 int FUNC_4 (int ,char*,int) ;
 struct brcmnand_host* FUNC_5 (struct nand_chip*) ;

__attribute__((used)) static int FUNC_6(struct nand_chip *VAR_3)
{
 struct brcmnand_host *VAR_4 = FUNC_5(VAR_3);
 struct brcmnand_controller *VAR_5 = VAR_4->ctrl;
 bool VAR_6 = 0;

 FUNC_3(VAR_5->dev, "wait on native cmd %d\n", VAR_5->cmd_pending);
 if (VAR_5->cmd_pending)
  VAR_6 = FUNC_2(VAR_3);

 if (VAR_6) {
  u32 VAR_7 = FUNC_1(VAR_5, VAR_0)
     >> FUNC_0(VAR_5);

  FUNC_4(VAR_5->dev,
   "timeout waiting for command %#02x\n", VAR_7);
  FUNC_4(VAR_5->dev, "intfc status %08x\n",
   FUNC_1(VAR_5, VAR_1));
 }
 VAR_5->cmd_pending = 0;
 return FUNC_1(VAR_5, VAR_1) &
     VAR_2;
}
