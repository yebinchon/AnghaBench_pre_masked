
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int steps; } ;
struct nand_chip {TYPE_1__ ecc; } ;
struct meson_nfc_nand_chip {int* info_buf; } ;
struct meson_nfc {int dummy; } ;
typedef int __le64 ;


 int VAR_0 ;
 int FUNC_0 () ;
 struct meson_nfc_nand_chip* FUNC_1 (struct nand_chip*) ;
 int FUNC_2 (int,int) ;

__attribute__((used)) static void FUNC_3(struct meson_nfc *VAR_1,
         struct nand_chip *VAR_2, int VAR_3)
{
 struct meson_nfc_nand_chip *VAR_4 = FUNC_1(VAR_2);
 __le64 *VAR_5;
 u32 VAR_6;
 int VAR_7;

 VAR_6 = VAR_3 ? 1 : VAR_2->ecc.steps;
 VAR_5 = &VAR_4->info_buf[VAR_6 - 1];
 do {
  FUNC_2(10, 15);

  FUNC_0();
  VAR_7 = *VAR_5 & VAR_0;
 } while (!VAR_7);
}
