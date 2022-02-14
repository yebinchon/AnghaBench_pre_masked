
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mmc_host {int dummy; } ;
struct dw_mci_slot {struct dw_mci* host; } ;
struct dw_mci {int dev; } ;


 int FUNC_0 (struct dw_mci_slot*,int) ;
 struct dw_mci_slot* FUNC_1 (struct mmc_host*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(struct mmc_host *VAR_0, int VAR_1)
{
 struct dw_mci_slot *VAR_2 = FUNC_1(VAR_0);
 struct dw_mci *VAR_3 = VAR_2->host;

 FUNC_0(VAR_2, VAR_1);


 if (VAR_1)
  FUNC_2(VAR_3->dev);
 else
  FUNC_3(VAR_3->dev);
}
