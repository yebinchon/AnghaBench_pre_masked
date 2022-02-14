
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_10__ {int num_vfs; struct net_device** ndev; } ;
struct TYPE_6__ {int num_vfs_alloced; int sriov_enabled; } ;
struct octeon_device {scalar_t__ eswitch_mode; int pf_num; TYPE_5__ vf_rep_list; TYPE_3__* pci_dev; TYPE_2__* props; TYPE_1__ sriov_info; } ;
struct net_device {int * netdev_ops; int max_mtu; int min_mtu; } ;
struct TYPE_9__ {int work; void* ctxptr; } ;
struct lio_vf_rep_desc {int ifidx; TYPE_4__ stats_wk; int parent_ndev; struct octeon_device* oct; struct net_device* ndev; } ;
struct TYPE_8__ {int dev; } ;
struct TYPE_7__ {int netdev; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct net_device* FUNC_1 (int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,char*,...) ;
 int FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct net_device*) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_6 (struct lio_vf_rep_desc*,int ,int) ;
 int FUNC_7 (int ) ;
 struct lio_vf_rep_desc* FUNC_8 (struct net_device*) ;
 int FUNC_9 (struct net_device*) ;
 scalar_t__ FUNC_10 (struct octeon_device*,int ,int ,int ,struct octeon_device*) ;
 scalar_t__ FUNC_11 (struct net_device*) ;
 int FUNC_12 (int *,int ) ;
 int FUNC_13 (struct net_device*) ;

int
FUNC_14(struct octeon_device *VAR_9)
{
 struct lio_vf_rep_desc *VAR_10;
 struct net_device *VAR_11;
 int VAR_12, VAR_13;

 if (VAR_9->eswitch_mode != VAR_0)
  return 0;

 if (!VAR_9->sriov_info.sriov_enabled)
  return 0;

 VAR_13 = VAR_9->sriov_info.num_vfs_alloced;

 VAR_9->vf_rep_list.num_vfs = 0;
 for (VAR_12 = 0; VAR_12 < VAR_13; VAR_12++) {
  VAR_11 = FUNC_1(sizeof(struct lio_vf_rep_desc));

  if (!VAR_11) {
   FUNC_3(&VAR_9->pci_dev->dev,
    "VF rep device %d creation failed\n", VAR_12);
   goto cleanup;
  }

  VAR_11->min_mtu = VAR_2;
  VAR_11->max_mtu = VAR_1;
  VAR_11->netdev_ops = &VAR_7;

  VAR_10 = FUNC_8(VAR_11);
  FUNC_6(VAR_10, 0, sizeof(*VAR_10));

  VAR_10->ndev = VAR_11;
  VAR_10->oct = VAR_9;
  VAR_10->parent_ndev = VAR_9->props[0].netdev;
  VAR_10->ifidx = (VAR_9->pf_num * 64) + VAR_12 + 1;

  FUNC_4(VAR_11);

  if (FUNC_11(VAR_11)) {
   FUNC_3(&VAR_9->pci_dev->dev, "VF rep nerdev registration failed\n");

   FUNC_5(VAR_11);
   goto cleanup;
  }

  FUNC_9(VAR_11);

  FUNC_0(&VAR_10->stats_wk.work,
      VAR_6);
  VAR_10->stats_wk.ctxptr = (void *)VAR_10;
  FUNC_12(&VAR_10->stats_wk.work,
          FUNC_7
          (VAR_3));
  VAR_9->vf_rep_list.num_vfs++;
  VAR_9->vf_rep_list.ndev[VAR_12] = VAR_11;
 }

 if (FUNC_10(VAR_9, VAR_4,
     VAR_5,
     VAR_8, VAR_9)) {
  FUNC_3(&VAR_9->pci_dev->dev, "VF rep Dispatch func registration failed\n");

  goto cleanup;
 }

 return 0;

cleanup:
 for (VAR_12 = 0; VAR_12 < VAR_9->vf_rep_list.num_vfs; VAR_12++) {
  VAR_11 = VAR_9->vf_rep_list.ndev[VAR_12];
  VAR_9->vf_rep_list.ndev[VAR_12] = ((void*)0);
  if (VAR_11) {
   VAR_10 = FUNC_8(VAR_11);
   FUNC_2
    (&VAR_10->stats_wk.work);
   FUNC_13(VAR_11);
   FUNC_5(VAR_11);
  }
 }

 VAR_9->vf_rep_list.num_vfs = 0;

 return -1;
}
