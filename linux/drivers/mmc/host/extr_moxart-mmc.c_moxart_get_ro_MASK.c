
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct moxart_host {scalar_t__ base; } ;
struct mmc_host {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 struct moxart_host* FUNC_0 (struct mmc_host*) ;
 int FUNC_1 (scalar_t__) ;

__attribute__((used)) static int FUNC_2(struct mmc_host *VAR_2)
{
 struct moxart_host *VAR_3 = FUNC_0(VAR_2);

 return !!(FUNC_1(VAR_3->base + VAR_0) & VAR_1);
}
