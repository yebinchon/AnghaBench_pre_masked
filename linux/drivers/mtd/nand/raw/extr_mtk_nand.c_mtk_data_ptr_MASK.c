
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct nand_chip {int dummy; } ;
struct mtk_nfc {int * buffer; } ;


 int FUNC_0 (struct nand_chip*) ;
 struct mtk_nfc* FUNC_1 (struct nand_chip*) ;

__attribute__((used)) static inline u8 *FUNC_2(struct nand_chip *VAR_0, int VAR_1)
{
 struct mtk_nfc *VAR_2 = FUNC_1(VAR_0);

 return VAR_2->buffer + VAR_1 * FUNC_0(VAR_0);
}
