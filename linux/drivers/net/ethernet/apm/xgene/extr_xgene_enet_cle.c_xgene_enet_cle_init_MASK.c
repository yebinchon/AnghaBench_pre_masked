
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef void* u32 ;
struct xgene_cle_ptree {int start_pkt; int num_kn; int num_dbptr; struct xgene_cle_ptree_kn* dbptr; struct xgene_cle_ptree_kn* kn; } ;
struct xgene_enet_cle {struct xgene_cle_ptree ptree; } ;
struct xgene_enet_pdata {scalar_t__ phy_mode; TYPE_4__** rx_ring; int ndev; struct xgene_enet_cle cle; } ;
struct xgene_cle_ptree_kn {int cle_priority; int drop; int num_keys; TYPE_3__* key; int node_type; void* dstqid; void* nxtfpsel; void* fpsel; } ;
struct xgene_cle_dbptr {int cle_priority; int drop; int num_keys; TYPE_3__* key; int node_type; void* dstqid; void* nxtfpsel; void* fpsel; } ;
typedef int kn ;
struct TYPE_8__ {TYPE_2__* page_pool; TYPE_1__* buf_pool; } ;
struct TYPE_7__ {size_t result_pointer; scalar_t__ priority; } ;
struct TYPE_6__ {void* id; } ;
struct TYPE_5__ {void* id; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (struct xgene_cle_ptree_kn*,int ,int) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (struct xgene_enet_pdata*,struct xgene_enet_cle*,struct xgene_cle_ptree_kn*,size_t,int) ;
 int FUNC_3 (struct xgene_enet_pdata*,struct xgene_enet_cle*) ;
 int FUNC_4 (struct xgene_enet_pdata*) ;
 void* FUNC_5 (TYPE_4__*) ;
 void* FUNC_6 (void*) ;

__attribute__((used)) static int FUNC_7(struct xgene_enet_pdata *VAR_7)
{
 struct xgene_enet_cle *VAR_8 = &VAR_7->cle;
 u32 VAR_9, VAR_10, VAR_11, VAR_12;
 struct xgene_cle_dbptr VAR_13[VAR_0];
 struct xgene_cle_ptree *VAR_14;
 struct xgene_cle_ptree_kn VAR_15;
 int VAR_16;

 if (VAR_7->phy_mode != VAR_6)
  return -VAR_4;

 VAR_14 = &VAR_8->ptree;
 VAR_14->start_pkt = 12;

 VAR_16 = FUNC_4(VAR_7);
 if (VAR_16) {
  FUNC_1(VAR_7->ndev, "RSS initialization failed\n");
  return VAR_16;
 }

 VAR_9 = FUNC_5(VAR_7->rx_ring[0]);
 VAR_12 = VAR_7->rx_ring[0]->buf_pool->id;
 VAR_10 = FUNC_6(VAR_12);
 VAR_11 = 0;
 if (VAR_7->rx_ring[0]->page_pool) {
  VAR_12 = VAR_7->rx_ring[0]->page_pool->id;
  VAR_11 = FUNC_6(VAR_12);
 }

 FUNC_0(VAR_13, 0, sizeof(struct xgene_cle_dbptr) * VAR_0);
 VAR_13[VAR_1].fpsel = VAR_10;
 VAR_13[VAR_1].nxtfpsel = VAR_11;
 VAR_13[VAR_1].dstqid = VAR_9;
 VAR_13[VAR_1].cle_priority = 1;

 VAR_13[VAR_2].fpsel = VAR_10;
 VAR_13[VAR_2].nxtfpsel = VAR_11;
 VAR_13[VAR_2].dstqid = VAR_9;
 VAR_13[VAR_2].cle_priority = 7;
 FUNC_2(VAR_7, VAR_8, &VAR_13[VAR_2],
      VAR_1, 7);

 VAR_13[VAR_3].drop = 1;

 FUNC_0(&VAR_15, 0, sizeof(VAR_15));
 VAR_15.node_type = VAR_5;
 VAR_15.num_keys = 1;
 VAR_15.key[0].priority = 0;
 VAR_15.key[0].result_pointer = VAR_1;

 VAR_14->kn = &VAR_15;
 VAR_14->dbptr = VAR_13;
 VAR_14->num_kn = 1;
 VAR_14->num_dbptr = VAR_0;

 return FUNC_3(VAR_7, VAR_8);
}
