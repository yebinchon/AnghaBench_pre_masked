
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nand_chip {int dummy; } ;
struct meson_nfc_nand_chip {int data_buf; int info_buf; } ;


 int FUNC_0 (int ) ;
 struct meson_nfc_nand_chip* FUNC_1 (struct nand_chip*) ;

__attribute__((used)) static void FUNC_2(struct nand_chip *VAR_0)
{
 struct meson_nfc_nand_chip *VAR_1 = FUNC_1(VAR_0);

 FUNC_0(VAR_1->info_buf);
 FUNC_0(VAR_1->data_buf);
}
