
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct net_device {int watchdog_timeo; int max_mtu; int min_mtu; int * netdev_ops; } ;
struct TYPE_5__ {int work; int list; int lock; } ;
struct ionic_lif {unsigned int index; int info_sz; int rss_ind_tbl_sz; struct net_device* netdev; scalar_t__ info_pa; int * info; int list; void* rss_ind_tbl; scalar_t__ rss_ind_tbl_pa; struct ionic* ionic; TYPE_1__ deferred; int adminq_lock; int name; int rx_coalesce_usecs; void* nrxq_descs; void* ntxq_descs; int nxqs; int neqs; } ;
struct TYPE_6__ {int rss_ind_tbl_sz; } ;
struct TYPE_7__ {TYPE_2__ eth; } ;
struct TYPE_8__ {TYPE_3__ lif; } ;
struct ionic {int lifs; TYPE_4__ ident; int ntxqs_per_lif; int neqs_per_lif; struct ionic_lif* master_lif; struct device* dev; } ;
struct device {int dummy; } ;


 int FUNC_0 (int,int ) ;
 int VAR_0 ;
 struct ionic_lif* FUNC_1 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int ) ;
 void* VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_4 (struct net_device*,struct device*) ;
 struct net_device* FUNC_5 (int,int ,int ) ;
 int FUNC_6 (struct device*,char*) ;
 void* FUNC_7 (struct device*,int,scalar_t__*,int ) ;
 int FUNC_8 (struct device*,int,int *,scalar_t__) ;
 int FUNC_9 (struct net_device*) ;
 int FUNC_10 (struct ionic*,int ) ;
 int FUNC_11 (struct ionic*,int ) ;
 int FUNC_12 (struct net_device*) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_13 (struct ionic_lif*) ;
 int FUNC_14 (struct ionic_lif*) ;
 int FUNC_15 (int ) ;
 int FUNC_16 (int *,int *) ;
 struct ionic_lif* FUNC_17 (struct net_device*) ;
 int FUNC_18 (int ,int,char*,unsigned int) ;
 int FUNC_19 (int *) ;

__attribute__((used)) static struct ionic_lif *FUNC_20(struct ionic *VAR_10, unsigned int VAR_11)
{
 struct device *VAR_12 = VAR_10->dev;
 struct net_device *VAR_13;
 struct ionic_lif *VAR_14;
 int VAR_15;
 u32 VAR_16;
 int VAR_17;

 VAR_13 = FUNC_5(sizeof(*VAR_14),
        VAR_10->ntxqs_per_lif, VAR_10->ntxqs_per_lif);
 if (!VAR_13) {
  FUNC_6(VAR_12, "Cannot allocate netdev, aborting\n");
  return FUNC_1(-VAR_0);
 }

 FUNC_4(VAR_13, VAR_12);

 VAR_14 = FUNC_17(VAR_13);
 VAR_14->netdev = VAR_13;
 VAR_10->master_lif = VAR_14;
 VAR_13->netdev_ops = &VAR_9;
 FUNC_12(VAR_13);

 VAR_13->watchdog_timeo = 2 * VAR_2;
 VAR_13->min_mtu = VAR_6;
 VAR_13->max_mtu = VAR_5;

 VAR_14->neqs = VAR_10->neqs_per_lif;
 VAR_14->nxqs = VAR_10->ntxqs_per_lif;

 VAR_14->ionic = VAR_10;
 VAR_14->index = VAR_11;
 VAR_14->ntxq_descs = VAR_3;
 VAR_14->nrxq_descs = VAR_3;


 VAR_16 = FUNC_11(VAR_14->ionic, VAR_4);
 VAR_14->rx_coalesce_usecs = FUNC_10(VAR_14->ionic, VAR_16);

 FUNC_18(VAR_14->name, sizeof(VAR_14->name), "lif%u", VAR_11);

 FUNC_19(&VAR_14->adminq_lock);

 FUNC_19(&VAR_14->deferred.lock);
 FUNC_2(&VAR_14->deferred.list);
 FUNC_3(&VAR_14->deferred.work, VAR_8);


 VAR_14->info_sz = FUNC_0(sizeof(*VAR_14->info), VAR_7);
 VAR_14->info = FUNC_7(VAR_12, VAR_14->info_sz,
           &VAR_14->info_pa, VAR_1);
 if (!VAR_14->info) {
  FUNC_6(VAR_12, "Failed to allocate lif info, aborting\n");
  VAR_17 = -VAR_0;
  goto err_out_free_netdev;
 }


 VAR_17 = FUNC_13(VAR_14);
 if (VAR_17)
  goto err_out_free_lif_info;


 VAR_15 = FUNC_15(VAR_14->ionic->ident.lif.eth.rss_ind_tbl_sz);
 VAR_14->rss_ind_tbl_sz = sizeof(*VAR_14->rss_ind_tbl) * VAR_15;
 VAR_14->rss_ind_tbl = FUNC_7(VAR_12, VAR_14->rss_ind_tbl_sz,
           &VAR_14->rss_ind_tbl_pa,
           VAR_1);

 if (!VAR_14->rss_ind_tbl) {
  VAR_17 = -VAR_0;
  FUNC_6(VAR_12, "Failed to allocate rss indirection table, aborting\n");
  goto err_out_free_qcqs;
 }

 FUNC_16(&VAR_14->list, &VAR_10->lifs);

 return VAR_14;

err_out_free_qcqs:
 FUNC_14(VAR_14);
err_out_free_lif_info:
 FUNC_8(VAR_12, VAR_14->info_sz, VAR_14->info, VAR_14->info_pa);
 VAR_14->info = ((void*)0);
 VAR_14->info_pa = 0;
err_out_free_netdev:
 FUNC_9(VAR_14->netdev);
 VAR_14 = ((void*)0);

 return FUNC_1(VAR_17);
}
