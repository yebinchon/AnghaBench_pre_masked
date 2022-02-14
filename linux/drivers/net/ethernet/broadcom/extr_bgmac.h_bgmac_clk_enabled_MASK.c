
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bgmac {int (* clk_enabled ) (struct bgmac*) ;} ;


 int FUNC_0 (struct bgmac*) ;

__attribute__((used)) static inline bool FUNC_1(struct bgmac *VAR_0)
{
 return VAR_0->clk_enabled(VAR_0);
}
