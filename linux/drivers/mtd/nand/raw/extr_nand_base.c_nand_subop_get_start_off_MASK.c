
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nand_subop {unsigned int first_instr_start_off; } ;



__attribute__((used)) static unsigned int FUNC_0(const struct nand_subop *VAR_0,
          unsigned int VAR_1)
{
 if (VAR_1)
  return 0;

 return VAR_0->first_instr_start_off;
}
