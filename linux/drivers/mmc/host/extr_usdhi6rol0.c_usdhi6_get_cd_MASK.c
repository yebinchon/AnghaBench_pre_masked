
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct usdhi6_host {int dummy; } ;
struct mmc_host {int caps2; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct usdhi6_host* FUNC_0 (struct mmc_host*) ;
 int FUNC_1 (struct usdhi6_host*,int ) ;

__attribute__((used)) static int FUNC_2(struct mmc_host *VAR_3)
{
 struct usdhi6_host *VAR_4 = FUNC_0(VAR_3);

 u32 VAR_5 = FUNC_1(VAR_4, VAR_1) & VAR_2;
 return !VAR_5 ^ !(VAR_3->caps2 & VAR_0);
}
