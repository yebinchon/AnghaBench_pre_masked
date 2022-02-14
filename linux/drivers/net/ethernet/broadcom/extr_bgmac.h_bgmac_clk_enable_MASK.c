
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct bgmac {int (* clk_enable ) (struct bgmac*,int ) ;} ;


 int FUNC_0 (struct bgmac*,int ) ;

__attribute__((used)) static inline void FUNC_1(struct bgmac *VAR_0, u32 VAR_1)
{
 VAR_0->clk_enable(VAR_0, VAR_1);
}
