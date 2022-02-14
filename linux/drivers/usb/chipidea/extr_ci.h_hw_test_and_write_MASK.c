
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ci_hdrc {int dummy; } ;
typedef enum ci_hw_regs { ____Placeholder_ci_hw_regs } ci_hw_regs ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct ci_hdrc*,int,int ) ;
 int FUNC_2 (struct ci_hdrc*,int,int,int) ;

__attribute__((used)) static inline u32 FUNC_3(struct ci_hdrc *VAR_0, enum ci_hw_regs VAR_1,
        u32 VAR_2, u32 VAR_3)
{
 u32 VAR_4 = FUNC_1(VAR_0, VAR_1, ~0);

 FUNC_2(VAR_0, VAR_1, VAR_2, VAR_3);
 return (VAR_4 & VAR_2) >> FUNC_0(VAR_2);
}
