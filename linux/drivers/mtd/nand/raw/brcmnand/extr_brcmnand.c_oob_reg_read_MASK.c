
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef scalar_t__ u16 ;
struct brcmnand_controller {int max_oob; scalar_t__* reg_offsets; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (struct brcmnand_controller*,scalar_t__) ;

__attribute__((used)) static inline u8 FUNC_1(struct brcmnand_controller *VAR_2, u32 VAR_3)
{
 u16 VAR_4, VAR_5, VAR_6;

 VAR_4 = VAR_2->reg_offsets[VAR_1];
 VAR_5 = VAR_2->reg_offsets[VAR_0];

 if (VAR_3 >= VAR_2->max_oob)
  return 0x77;

 if (VAR_3 >= 16 && VAR_5)
  VAR_6 = VAR_5 + ((VAR_3 - 0x10) & ~0x03);
 else
  VAR_6 = VAR_4 + (VAR_3 & ~0x03);

 return FUNC_0(VAR_2, VAR_6) >> (24 - ((VAR_3 & 0x03) << 3));
}
