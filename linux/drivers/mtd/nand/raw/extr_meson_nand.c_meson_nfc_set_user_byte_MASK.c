
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int steps; } ;
struct nand_chip {TYPE_1__ ecc; } ;
struct meson_nfc_nand_chip {int* info_buf; } ;
typedef int __le64 ;


 struct meson_nfc_nand_chip* FUNC_0 (struct nand_chip*) ;

__attribute__((used)) static void FUNC_1(struct nand_chip *VAR_0, u8 *VAR_1)
{
 struct meson_nfc_nand_chip *VAR_2 = FUNC_0(VAR_0);
 __le64 *VAR_3;
 int VAR_4, VAR_5;

 for (VAR_4 = 0, VAR_5 = 0; VAR_4 < VAR_0->ecc.steps; VAR_4++, VAR_5 += 2) {
  VAR_3 = &VAR_2->info_buf[VAR_4];
  *VAR_3 |= VAR_1[VAR_5];
  *VAR_3 |= VAR_1[VAR_5 + 1] << 8;
 }
}
