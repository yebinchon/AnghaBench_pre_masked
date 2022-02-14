
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct mmc_host {int dummy; } ;
struct goldfish_mmc_host {int dummy; } ;


 int FUNC_0 (struct goldfish_mmc_host*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 struct goldfish_mmc_host* FUNC_1 (struct mmc_host*) ;

__attribute__((used)) static int FUNC_2(struct mmc_host *VAR_2)
{
 uint32_t VAR_3;
 struct goldfish_mmc_host *VAR_4 = FUNC_1(VAR_2);

 VAR_3 = FUNC_0(VAR_4, VAR_0);
 return ((VAR_3 & VAR_1) != 0);
}
