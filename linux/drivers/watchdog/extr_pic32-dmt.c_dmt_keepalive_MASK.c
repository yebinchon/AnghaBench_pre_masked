
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pic32_dmt {scalar_t__ regs; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct pic32_dmt*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int,scalar_t__) ;

__attribute__((used)) static inline int FUNC_3(struct pic32_dmt *VAR_6)
{
 u32 VAR_7;
 u32 VAR_8 = 500;


 FUNC_2(VAR_4 << 8, VAR_6->regs + VAR_1);


 while (--VAR_8) {
  VAR_7 = FUNC_1(VAR_6->regs + VAR_2) & VAR_3;
  if (VAR_7 == VAR_3)
   break;
 }


 FUNC_2(VAR_5, VAR_6->regs + VAR_0);


 return FUNC_0(VAR_6);
}
