
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nand_chip {int options; } ;
struct mtd_info {int dummy; } ;
struct hinfc_host {unsigned int command; int addr_cycle; int* addr_value; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 struct nand_chip* FUNC_0 (struct mtd_info*) ;
 struct hinfc_host* FUNC_1 (struct nand_chip*) ;
 int FUNC_2 (unsigned int) ;

__attribute__((used)) static void FUNC_3(struct mtd_info *VAR_3, int VAR_4, int VAR_5)
{
 struct nand_chip *VAR_6 = FUNC_0(VAR_3);
 struct hinfc_host *VAR_7 = FUNC_1(VAR_6);
 unsigned int VAR_8 = VAR_7->command;

 VAR_7->addr_cycle = 0;
 VAR_7->addr_value[0] = 0;
 VAR_7->addr_value[1] = 0;


 if (VAR_4 != -1) {

  if (VAR_6->options & VAR_0 &&
    !FUNC_2(VAR_8))
   VAR_4 >>= 1;

  VAR_7->addr_value[0] = VAR_4 & 0xffff;
  VAR_7->addr_cycle = 2;
 }
 if (VAR_5 != -1) {
  VAR_7->addr_value[0] |= (VAR_5 & 0xffff)
   << (VAR_7->addr_cycle * 8);
  VAR_7->addr_cycle += 2;
  if (VAR_6->options & VAR_2) {
   VAR_7->addr_cycle += 1;
   if (VAR_7->command == VAR_1)
    VAR_7->addr_value[0] |= ((VAR_5 >> 16) & 0xff) << 16;
   else
    VAR_7->addr_value[1] |= ((VAR_5 >> 16) & 0xff);
  }
 }
}
