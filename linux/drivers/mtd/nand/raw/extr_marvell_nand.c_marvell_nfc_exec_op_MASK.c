
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nand_operation {int cs; } ;
struct nand_chip {int controller; } ;
struct marvell_nfc {TYPE_1__* caps; } ;
struct TYPE_2__ {scalar_t__ is_nfcv2; } ;


 int FUNC_0 (struct nand_chip*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct nand_chip*,int *,struct nand_operation const*,int) ;
 struct marvell_nfc* FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct nand_chip *VAR_2,
          const struct nand_operation *VAR_3,
          bool VAR_4)
{
 struct marvell_nfc *VAR_5 = FUNC_2(VAR_2->controller);

 FUNC_0(VAR_2, VAR_3->cs);

 if (VAR_5->caps->is_nfcv2)
  return FUNC_1(VAR_2, &VAR_1,
           VAR_3, VAR_4);
 else
  return FUNC_1(VAR_2, &VAR_0,
           VAR_3, VAR_4);
}
