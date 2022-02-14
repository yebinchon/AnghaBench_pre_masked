
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mmc_host {int dummy; } ;
struct dw_mci_slot {int host; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 struct dw_mci_slot* FUNC_1 (struct mmc_host*) ;

__attribute__((used)) static int FUNC_2(struct mmc_host *VAR_2)
{
 struct dw_mci_slot *VAR_3 = FUNC_1(VAR_2);
 u32 VAR_4;





 VAR_4 = FUNC_0(VAR_3->host, VAR_1);

 return !!(VAR_4 & VAR_0);
}
