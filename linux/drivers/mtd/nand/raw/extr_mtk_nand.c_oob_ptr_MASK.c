
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct nand_chip {int * oob_poi; } ;
struct TYPE_3__ {int reg_size; } ;
struct TYPE_4__ {int sec; } ;
struct mtk_nfc_nand_chip {TYPE_1__ fdm; TYPE_2__ bad_mark; } ;


 struct mtk_nfc_nand_chip* FUNC_0 (struct nand_chip*) ;

__attribute__((used)) static inline u8 *FUNC_1(struct nand_chip *VAR_0, int VAR_1)
{
 struct mtk_nfc_nand_chip *VAR_2 = FUNC_0(VAR_0);
 u8 *VAR_3;





 if (VAR_1 < VAR_2->bad_mark.sec)
  VAR_3 = VAR_0->oob_poi + (VAR_1 + 1) * VAR_2->fdm.reg_size;
 else if (VAR_1 == VAR_2->bad_mark.sec)
  VAR_3 = VAR_0->oob_poi;
 else
  VAR_3 = VAR_0->oob_poi + VAR_1 * VAR_2->fdm.reg_size;

 return VAR_3;
}
