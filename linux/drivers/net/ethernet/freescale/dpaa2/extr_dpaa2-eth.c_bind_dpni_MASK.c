
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {struct device* parent; } ;
struct net_device {TYPE_1__ dev; } ;
struct dpni_pools_cfg {int num_dpbp; TYPE_4__* pools; } ;
struct dpni_error_cfg {int set_frame_annotation; int error_action; int errors; } ;
struct dpaa2_eth_priv {int num_fqs; int tx_qdid; int mc_token; int mc_io; TYPE_5__* fq; TYPE_3__* dpbp_dev; struct net_device* net_dev; } ;
struct device {int dummy; } ;
struct TYPE_11__ {int type; } ;
struct TYPE_10__ {int buffer_size; scalar_t__ backup_pool; int dpbp_id; } ;
struct TYPE_8__ {int id; } ;
struct TYPE_9__ {TYPE_2__ obj_desc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;


 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct device*,char*,...) ;
 int FUNC_1 (struct dpaa2_eth_priv*) ;
 int FUNC_2 (struct net_device*,int ) ;
 int FUNC_3 (int ,int ,int ,int ,int *) ;
 int FUNC_4 (int ,int ,int ,struct dpni_error_cfg*) ;
 int FUNC_5 (int ,int ,int ,struct dpni_pools_cfg*) ;
 int FUNC_6 (struct dpaa2_eth_priv*,TYPE_5__*) ;
 int FUNC_7 (struct dpaa2_eth_priv*,TYPE_5__*) ;

__attribute__((used)) static int FUNC_8(struct dpaa2_eth_priv *VAR_7)
{
 struct net_device *VAR_8 = VAR_7->net_dev;
 struct device *VAR_9 = VAR_8->dev.parent;
 struct dpni_pools_cfg VAR_10;
 struct dpni_error_cfg VAR_11;
 int VAR_12 = 0;
 int VAR_13;

 VAR_10.num_dpbp = 1;
 VAR_10.pools[0].dpbp_id = VAR_7->dpbp_dev->obj_desc.id;
 VAR_10.pools[0].backup_pool = 0;
 VAR_10.pools[0].buffer_size = VAR_0;
 VAR_12 = FUNC_5(VAR_7->mc_io, 0, VAR_7->mc_token, &VAR_10);
 if (VAR_12) {
  FUNC_0(VAR_9, "dpni_set_pools() failed\n");
  return VAR_12;
 }




 VAR_12 = FUNC_2(VAR_8, VAR_2);
 if (VAR_12 && VAR_12 != -VAR_6)
  FUNC_0(VAR_9, "Failed to configure hashing\n");




 VAR_12 = FUNC_1(VAR_7);
 if (VAR_12 && VAR_12 != -VAR_6)
  FUNC_0(VAR_9, "Failed to configure Rx classification key\n");


 VAR_11.errors = VAR_1;
 VAR_11.set_frame_annotation = 1;
 VAR_11.error_action = VAR_3;
 VAR_12 = FUNC_4(VAR_7->mc_io, 0, VAR_7->mc_token,
           &VAR_11);
 if (VAR_12) {
  FUNC_0(VAR_9, "dpni_set_errors_behavior failed\n");
  return VAR_12;
 }


 for (VAR_13 = 0; VAR_13 < VAR_7->num_fqs; VAR_13++) {
  switch (VAR_7->fq[VAR_13].type) {
  case 129:
   VAR_12 = FUNC_6(VAR_7, &VAR_7->fq[VAR_13]);
   break;
  case 128:
   VAR_12 = FUNC_7(VAR_7, &VAR_7->fq[VAR_13]);
   break;
  default:
   FUNC_0(VAR_9, "Invalid FQ type %d\n", VAR_7->fq[VAR_13].type);
   return -VAR_5;
  }
  if (VAR_12)
   return VAR_12;
 }

 VAR_12 = FUNC_3(VAR_7->mc_io, 0, VAR_7->mc_token,
       VAR_4, &VAR_7->tx_qdid);
 if (VAR_12) {
  FUNC_0(VAR_9, "dpni_get_qdid() failed\n");
  return VAR_12;
 }

 return 0;
}
