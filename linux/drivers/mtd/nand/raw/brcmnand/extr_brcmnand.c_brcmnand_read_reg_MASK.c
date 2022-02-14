
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef scalar_t__ u16 ;
struct brcmnand_controller {scalar_t__* reg_offsets; } ;
typedef enum brcmnand_reg { ____Placeholder_brcmnand_reg } brcmnand_reg ;


 int FUNC_0 (struct brcmnand_controller*,scalar_t__) ;

__attribute__((used)) static inline u32 FUNC_1(struct brcmnand_controller *VAR_0,
  enum brcmnand_reg VAR_1)
{
 u16 VAR_2 = VAR_0->reg_offsets[VAR_1];

 if (VAR_2)
  return FUNC_0(VAR_0, VAR_2);
 else
  return 0;
}
