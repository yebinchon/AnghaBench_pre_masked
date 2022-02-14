
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mmc_host {int dummy; } ;
struct dw_mci_slot {int id; struct dw_mci* host; } ;
struct dw_mci {scalar_t__ use_dma; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (struct dw_mci*,int) ;
 int FUNC_1 (struct dw_mci*) ;
 int FUNC_2 (struct dw_mci*,int ) ;
 int FUNC_3 (struct dw_mci*,int ,int) ;
 struct dw_mci_slot* FUNC_4 (struct mmc_host*) ;
 int FUNC_5 (int,int) ;

__attribute__((used)) static void FUNC_6(struct mmc_host *VAR_5)
{
 struct dw_mci_slot *VAR_6 = FUNC_4(VAR_5);
 struct dw_mci *VAR_7 = VAR_6->host;
 int VAR_8;

 if (VAR_7->use_dma == VAR_4)
  FUNC_1(VAR_7);

 if (!FUNC_0(VAR_7, VAR_1 |
         VAR_2))
  return;







 VAR_8 = FUNC_2(VAR_7, VAR_0);
 VAR_8 &= ~(VAR_3 << VAR_6->id);
 FUNC_3(VAR_7, VAR_0, VAR_8);
 FUNC_5(1, 2);
 VAR_8 |= VAR_3 << VAR_6->id;
 FUNC_3(VAR_7, VAR_0, VAR_8);
 FUNC_5(200, 300);
}
