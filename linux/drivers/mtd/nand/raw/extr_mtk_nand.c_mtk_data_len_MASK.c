
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int size; } ;
struct nand_chip {TYPE_1__ ecc; } ;
struct mtk_nfc_nand_chip {int spare_per_sector; } ;


 struct mtk_nfc_nand_chip* FUNC_0 (struct nand_chip*) ;

__attribute__((used)) static inline int FUNC_1(struct nand_chip *VAR_0)
{
 struct mtk_nfc_nand_chip *VAR_1 = FUNC_0(VAR_0);

 return VAR_0->ecc.size + VAR_1->spare_per_sector;
}
