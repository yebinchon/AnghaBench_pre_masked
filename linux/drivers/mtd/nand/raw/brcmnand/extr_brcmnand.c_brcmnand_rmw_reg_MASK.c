
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u32 ;
struct brcmnand_controller {int dummy; } ;
typedef enum brcmnand_reg { ____Placeholder_brcmnand_reg } brcmnand_reg ;


 unsigned int FUNC_0 (struct brcmnand_controller*,int) ;
 int FUNC_1 (struct brcmnand_controller*,int,unsigned int) ;

__attribute__((used)) static inline void FUNC_2(struct brcmnand_controller *VAR_0,
        enum brcmnand_reg VAR_1, u32 VAR_2, unsigned
        int VAR_3, u32 VAR_4)
{
 u32 VAR_5 = FUNC_0(VAR_0, VAR_1);

 VAR_5 &= ~VAR_2;
 VAR_5 |= VAR_4 << VAR_3;
 FUNC_1(VAR_0, VAR_1, VAR_5);
}
