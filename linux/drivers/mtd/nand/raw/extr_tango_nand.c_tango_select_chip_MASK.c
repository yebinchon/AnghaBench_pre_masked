
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tango_nfc {scalar_t__ reg_base; } ;
struct tango_chip {int bb_cfg; int pkt_n_cfg; int pkt_0_cfg; int xfer_cfg; int timing2; int timing1; } ;
struct nand_chip {int controller; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 struct tango_chip* FUNC_0 (struct nand_chip*) ;
 struct tango_nfc* FUNC_1 (int ) ;
 int FUNC_2 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct nand_chip *VAR_6, int VAR_7)
{
 struct tango_nfc *VAR_8 = FUNC_1(VAR_6->controller);
 struct tango_chip *VAR_9 = FUNC_0(VAR_6);

 if (VAR_7 < 0)
  return;

 FUNC_2(VAR_9->timing1, VAR_8->reg_base + VAR_3);
 FUNC_2(VAR_9->timing2, VAR_8->reg_base + VAR_4);
 FUNC_2(VAR_9->xfer_cfg, VAR_8->reg_base + VAR_5);
 FUNC_2(VAR_9->pkt_0_cfg, VAR_8->reg_base + VAR_1);
 FUNC_2(VAR_9->pkt_n_cfg, VAR_8->reg_base + VAR_2);
 FUNC_2(VAR_9->bb_cfg, VAR_8->reg_base + VAR_0);
}
