
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct nand_chip {int dummy; } ;
struct hinfc_host {scalar_t__ command; int mmio; int offset; int buffer; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 struct hinfc_host* FUNC_0 (struct nand_chip*) ;

__attribute__((used)) static uint8_t FUNC_1(struct nand_chip *VAR_2)
{
 struct hinfc_host *VAR_3 = FUNC_0(VAR_2);

 if (VAR_3->command == VAR_1)
  return *(uint8_t *)(VAR_3->mmio);

 VAR_3->offset++;

 if (VAR_3->command == VAR_0)
  return *(uint8_t *)(VAR_3->mmio + VAR_3->offset - 1);

 return *(uint8_t *)(VAR_3->buffer + VAR_3->offset - 1);
}
