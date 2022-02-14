
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct dwc2_hsotg {scalar_t__ regs; scalar_t__ needs_byte_swap; } ;


 int FUNC_0 (char*,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__,scalar_t__) ;

__attribute__((used)) static inline void FUNC_3(struct dwc2_hsotg *VAR_0, u32 VAR_1, u32 VAR_2)
{
 if (VAR_0->needs_byte_swap)
  FUNC_2(FUNC_1(VAR_1), VAR_0->regs + VAR_2);
 else
  FUNC_2(VAR_1, VAR_0->regs + VAR_2);




}
