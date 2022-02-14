
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int size; int bytes; } ;
struct nand_chip {TYPE_1__ ecc; } ;
struct meson_nfc_nand_chip {int * data_buf; } ;


 struct meson_nfc_nand_chip* FUNC_0 (struct nand_chip*) ;

__attribute__((used)) static u8 *FUNC_1(struct nand_chip *VAR_0, int VAR_1)
{
 struct meson_nfc_nand_chip *VAR_2 = FUNC_0(VAR_0);
 int VAR_3, VAR_4;

 VAR_4 = VAR_0->ecc.size + VAR_0->ecc.bytes;
 VAR_3 = (VAR_4 + 2) * VAR_1;

 return VAR_2->data_buf + VAR_3;
}
