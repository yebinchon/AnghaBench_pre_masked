
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct brcmnand_controller {int nand_version; } ;


 int FUNC_0 (int,int ) ;

__attribute__((used)) static inline u32 FUNC_1(struct brcmnand_controller *VAR_0)
{
 if (VAR_0->nand_version == 0x0702)
  return FUNC_0(7, 0);
 else if (VAR_0->nand_version >= 0x0600)
  return FUNC_0(6, 0);
 else
  return FUNC_0(5, 0);
}
