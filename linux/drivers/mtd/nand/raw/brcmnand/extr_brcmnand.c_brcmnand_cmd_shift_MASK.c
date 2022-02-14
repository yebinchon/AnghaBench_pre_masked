
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct brcmnand_controller {int nand_version; } ;



__attribute__((used)) static inline int FUNC_0(struct brcmnand_controller *VAR_0)
{
 if (VAR_0->nand_version < 0x0602)
  return 24;
 return 0;
}
