
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int strength; } ;
struct nand_chip {TYPE_1__ ecc; } ;
struct meson_nfc_nand_chip {int bch_mode; } ;
struct TYPE_5__ {int strength; int bch; } ;


 int FUNC_0 (TYPE_2__*) ;
 int VAR_0 ;
 TYPE_2__* VAR_1 ;
 struct meson_nfc_nand_chip* FUNC_1 (struct nand_chip*) ;

__attribute__((used)) static int FUNC_2(struct nand_chip *VAR_2)
{
 struct meson_nfc_nand_chip *VAR_3 = FUNC_1(VAR_2);
 int VAR_4;

 if (VAR_2->ecc.strength > 60 || VAR_2->ecc.strength < 8)
  return -VAR_0;

 for (VAR_4 = 0; VAR_4 < FUNC_0(VAR_1); VAR_4++) {
  if (VAR_1[VAR_4].strength == VAR_2->ecc.strength) {
   VAR_3->bch_mode = VAR_1[VAR_4].bch;
   return 0;
  }
 }

 return -VAR_0;
}
