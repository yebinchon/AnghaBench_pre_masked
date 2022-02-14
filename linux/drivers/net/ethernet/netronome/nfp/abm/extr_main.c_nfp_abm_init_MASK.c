
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nfp_reprs {int dummy; } ;
struct nfp_pf {scalar_t__ max_data_vnics; int mac_stats_bar; TYPE_1__* eth_tbl; int cpp; } ;
struct nfp_app {struct nfp_abm* priv; int * reprs; int cpp; struct nfp_pf* pf; } ;
struct nfp_abm {int threshold_undef; void* thresholds; void* actions; int num_thresholds; int num_bands; struct nfp_app* app; } ;
struct TYPE_2__ {scalar_t__ count; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 int FUNC_0 (int ,struct nfp_reprs*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (struct nfp_abm*) ;
 void* FUNC_5 (int ,int,int ) ;
 int FUNC_6 (void*) ;
 struct nfp_abm* FUNC_7 (int,int ) ;
 int FUNC_8 (struct nfp_abm*) ;
 int FUNC_9 (struct nfp_abm*) ;
 int FUNC_10 (int ,char*,...) ;
 struct nfp_reprs* FUNC_11 (scalar_t__) ;
 int FUNC_12 (struct nfp_app*,size_t) ;
 int FUNC_13 (int ,char*) ;

__attribute__((used)) static int FUNC_14(struct nfp_app *VAR_6)
{
 struct nfp_pf *VAR_7 = VAR_6->pf;
 struct nfp_reprs *VAR_8;
 struct nfp_abm *VAR_9;
 int VAR_10;

 if (!VAR_7->eth_tbl) {
  FUNC_10(VAR_7->cpp, "ABM NIC requires ETH table\n");
  return -VAR_0;
 }
 if (VAR_7->max_data_vnics != VAR_7->eth_tbl->count) {
  FUNC_10(VAR_7->cpp, "ETH entries don't match vNICs (%d vs %d)\n",
   VAR_7->max_data_vnics, VAR_7->eth_tbl->count);
  return -VAR_0;
 }
 if (!VAR_7->mac_stats_bar) {
  FUNC_13(VAR_6->cpp, "ABM NIC requires mac_stats symbol\n");
  return -VAR_0;
 }

 VAR_9 = FUNC_7(sizeof(*VAR_9), VAR_2);
 if (!VAR_9)
  return -VAR_1;
 VAR_6->priv = VAR_9;
 VAR_9->app = VAR_6;

 VAR_10 = FUNC_8(VAR_9);
 if (VAR_10)
  goto err_free_abm;

 VAR_10 = -VAR_1;
 VAR_9->num_thresholds = FUNC_1(VAR_9->num_bands, VAR_3);
 VAR_9->threshold_undef = FUNC_3(VAR_9->num_thresholds, VAR_2);
 if (!VAR_9->threshold_undef)
  goto err_free_abm;

 VAR_9->thresholds = FUNC_5(VAR_9->num_thresholds,
       sizeof(*VAR_9->thresholds), VAR_2);
 if (!VAR_9->thresholds)
  goto err_free_thresh_umap;

 VAR_9->actions = FUNC_5(VAR_9->num_thresholds, sizeof(*VAR_9->actions),
    VAR_2);
 if (!VAR_9->actions)
  goto err_free_thresh;


 VAR_10 = FUNC_9(VAR_9);
 if (VAR_10)
  goto err_free_act;

 VAR_10 = -VAR_1;
 VAR_8 = FUNC_11(VAR_7->max_data_vnics);
 if (!VAR_8)
  goto err_free_act;
 FUNC_0(VAR_6->reprs[VAR_5], VAR_8);

 VAR_8 = FUNC_11(VAR_7->max_data_vnics);
 if (!VAR_8)
  goto err_free_phys;
 FUNC_0(VAR_6->reprs[VAR_4], VAR_8);

 return 0;

err_free_phys:
 FUNC_12(VAR_6, VAR_5);
err_free_act:
 FUNC_6(VAR_9->actions);
err_free_thresh:
 FUNC_6(VAR_9->thresholds);
err_free_thresh_umap:
 FUNC_2(VAR_9->threshold_undef);
err_free_abm:
 FUNC_4(VAR_9);
 VAR_6->priv = ((void*)0);
 return VAR_10;
}
