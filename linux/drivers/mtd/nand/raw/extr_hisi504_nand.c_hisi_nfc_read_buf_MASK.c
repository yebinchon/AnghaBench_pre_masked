
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct nand_chip {int dummy; } ;
struct hinfc_host {scalar_t__ offset; scalar_t__ buffer; } ;


 int FUNC_0 (int *,scalar_t__,int) ;
 struct hinfc_host* FUNC_1 (struct nand_chip*) ;

__attribute__((used)) static void FUNC_2(struct nand_chip *VAR_0, uint8_t *VAR_1, int VAR_2)
{
 struct hinfc_host *VAR_3 = FUNC_1(VAR_0);

 FUNC_0(VAR_1, VAR_3->buffer + VAR_3->offset, VAR_2);
 VAR_3->offset += VAR_2;
}
