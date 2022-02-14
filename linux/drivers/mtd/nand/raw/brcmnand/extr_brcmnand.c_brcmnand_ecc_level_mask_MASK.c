
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct brcmnand_controller {int nand_version; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static inline u32 FUNC_0(struct brcmnand_controller *VAR_2)
{
 u32 VAR_3 = (VAR_2->nand_version >= 0x0600) ? 0x1f : 0x0f;

 VAR_3 <<= VAR_1;


 if (VAR_2->nand_version >= 0x0702)
  VAR_3 |= 0x7 << VAR_0;

 return VAR_3;
}
