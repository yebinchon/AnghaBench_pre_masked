
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct device {int dummy; } ;
struct be_resources {scalar_t__ max_rss_qs; scalar_t__ max_rx_qs; int if_cap_flags; int max_nic_evt_qs; int max_evt_qs; int member_0; } ;
struct be_adapter {int need_def_rxq; int cfg_num_rx_irqs; int cfg_num_tx_irqs; struct be_resources res; TYPE_1__* pdev; } ;
struct TYPE_2__ {struct device dev; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct be_adapter*) ;
 int FUNC_1 (struct be_adapter*,struct be_resources*) ;
 int FUNC_2 (struct be_adapter*,struct be_resources*) ;
 int FUNC_3 (struct be_adapter*) ;
 int FUNC_4 (struct be_adapter*) ;
 int FUNC_5 (struct be_adapter*) ;
 int FUNC_6 (struct be_adapter*) ;
 int FUNC_7 (struct be_adapter*) ;
 int FUNC_8 (struct be_adapter*) ;
 int FUNC_9 (struct be_adapter*) ;
 int FUNC_10 (struct be_adapter*) ;
 int FUNC_11 (struct be_adapter*) ;
 int FUNC_12 (struct be_adapter*) ;
 scalar_t__ FUNC_13 (struct be_adapter*) ;
 int FUNC_14 (struct device*,char*,int ,int ,int ,...) ;
 int FUNC_15 (int ,int ,int ) ;
 int FUNC_16 () ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_17(struct be_adapter *VAR_2)
{
 struct device *VAR_3 = &VAR_2->pdev->dev;
 struct be_resources VAR_4 = {0};
 int VAR_5;





 if (FUNC_0(VAR_2)) {
  FUNC_1(VAR_2, &VAR_4);
 } else {
  VAR_5 = FUNC_2(VAR_2, &VAR_4);
  if (VAR_5)
   return VAR_5;


  if (VAR_4.max_rss_qs && VAR_4.max_rss_qs == VAR_4.max_rx_qs &&
      !(VAR_4.if_cap_flags & VAR_0))
   VAR_4.max_rss_qs -= 1;
 }


 VAR_4.max_nic_evt_qs = FUNC_13(VAR_2) ?
    VAR_4.max_evt_qs / 2 : VAR_4.max_evt_qs;
 VAR_2->res = VAR_4;




 VAR_2->need_def_rxq = (FUNC_3(VAR_2) &
     VAR_0) ? 0 : 1;

 FUNC_14(VAR_3, "Max: txqs %d, rxqs %d, rss %d, eqs %d, vfs %d\n",
   FUNC_9(VAR_2), FUNC_8(VAR_2),
   FUNC_7(VAR_2), FUNC_5(VAR_2),
   FUNC_11(VAR_2));
 FUNC_14(VAR_3, "Max: uc-macs %d, mc-macs %d, vlans %d\n",
   FUNC_10(VAR_2), FUNC_4(VAR_2),
   FUNC_12(VAR_2));


 VAR_2->cfg_num_rx_irqs =
    FUNC_15(VAR_1, FUNC_16(),
          FUNC_6(VAR_2));
 VAR_2->cfg_num_tx_irqs = VAR_2->cfg_num_rx_irqs;
 return 0;
}
