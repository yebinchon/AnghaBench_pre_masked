
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct brcmnand_controller {int nand_version; } ;


 int VAR_0 ;
 int FUNC_0 (struct brcmnand_controller*,int ) ;

__attribute__((used)) static inline u32 FUNC_1(struct brcmnand_controller *VAR_1)
{
 if (VAR_1->nand_version < 0x0600)
  return 1;
 return FUNC_0(VAR_1, VAR_0);
}
