
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef scalar_t__ u16 ;
struct brcmnand_controller {int reg_spacing; scalar_t__* cs_offsets; scalar_t__* cs0_offsets; scalar_t__* reg_offsets; } ;
typedef enum brcmnand_cs_reg { ____Placeholder_brcmnand_cs_reg } brcmnand_cs_reg ;


 size_t VAR_0 ;
 size_t VAR_1 ;

__attribute__((used)) static inline u16 FUNC_0(struct brcmnand_controller *VAR_2, int VAR_3,
         enum brcmnand_cs_reg VAR_4)
{
 u16 VAR_5 = VAR_2->reg_offsets[VAR_0];
 u16 VAR_6 = VAR_2->reg_offsets[VAR_1];
 u8 VAR_7;

 if (VAR_3 == 0 && VAR_2->cs0_offsets)
  VAR_7 = VAR_2->cs0_offsets[VAR_4];
 else
  VAR_7 = VAR_2->cs_offsets[VAR_4];

 if (VAR_3 && VAR_6)
  return VAR_6 + (VAR_3 - 1) * VAR_2->reg_spacing + VAR_7;

 return VAR_5 + VAR_3 * VAR_2->reg_spacing + VAR_7;
}
