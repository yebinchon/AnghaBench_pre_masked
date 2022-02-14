
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct wilc_vif {int dummy; } ;
struct wilc_hif_func {int dummy; } ;
struct TYPE_4__ {int list; } ;
struct TYPE_3__ {int list; } ;
struct wilc {int io_type; int wiphy; int hif_workqueue; TYPE_2__ rxq_head; TYPE_1__ txq_head; int chip_ps_state; struct wilc_hif_func const* hif_func; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (struct wilc_vif*) ;
 int VAR_2 ;
 int FUNC_2 (struct wilc_vif*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int ) ;
 struct wilc* FUNC_5 (struct device*) ;
 struct wilc_vif* FUNC_6 (struct wilc*,char*,int ,int ,int) ;
 int FUNC_7 (struct wilc*) ;
 int FUNC_8 (struct wilc*) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (struct wilc*) ;

int FUNC_12(struct wilc **VAR_5, struct device *VAR_6, int VAR_7,
         const struct wilc_hif_func *VAR_8)
{
 struct wilc *VAR_9;
 struct wilc_vif *VAR_10;
 int VAR_11;

 VAR_9 = FUNC_5(VAR_6);
 if (!VAR_9)
  return -VAR_0;

 VAR_11 = FUNC_8(VAR_9);
 if (VAR_11)
  goto free_wl;

 *VAR_5 = VAR_9;
 VAR_9->io_type = VAR_7;
 VAR_9->hif_func = VAR_8;
 VAR_9->chip_ps_state = VAR_3;
 FUNC_0(&VAR_9->txq_head.list);
 FUNC_0(&VAR_9->rxq_head.list);

 VAR_9->hif_workqueue = FUNC_3("WILC_wq");
 if (!VAR_9->hif_workqueue) {
  VAR_11 = -VAR_1;
  goto free_cfg;
 }
 VAR_10 = FUNC_6(VAR_9, "wlan%d", VAR_4,
       VAR_2, 0);
 if (FUNC_1(VAR_10)) {
  VAR_11 = FUNC_2(VAR_10);
  goto free_hq;
 }

 FUNC_11(VAR_9);

 return 0;

free_hq:
 FUNC_4(VAR_9->hif_workqueue);

free_cfg:
 FUNC_7(VAR_9);

free_wl:
 FUNC_10(VAR_9->wiphy);
 FUNC_9(VAR_9->wiphy);
 return VAR_11;
}
