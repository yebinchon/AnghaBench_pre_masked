
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mmc_host {int dummy; } ;
struct au1xmmc_host {int dummy; } ;


 int FUNC_0 (struct au1xmmc_host*,int ) ;
 int FUNC_1 (struct au1xmmc_host*,int ) ;
 int VAR_0 ;
 struct au1xmmc_host* FUNC_2 (struct mmc_host*) ;

__attribute__((used)) static void FUNC_3(struct mmc_host *VAR_1, int VAR_2)
{
 struct au1xmmc_host *VAR_3 = FUNC_2(VAR_1);

 if (VAR_2)
  FUNC_1(VAR_3, VAR_0);
 else
  FUNC_0(VAR_3, VAR_0);
}
