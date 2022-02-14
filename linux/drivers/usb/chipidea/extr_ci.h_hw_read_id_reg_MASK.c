
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int abs; } ;
struct ci_hdrc {TYPE_1__ hw_bank; } ;


 int FUNC_0 (int) ;

__attribute__((used)) static inline u32 FUNC_1(struct ci_hdrc *VAR_0, u32 VAR_1, u32 VAR_2)
{
 return FUNC_0(VAR_0->hw_bank.abs + VAR_1) & VAR_2;
}
