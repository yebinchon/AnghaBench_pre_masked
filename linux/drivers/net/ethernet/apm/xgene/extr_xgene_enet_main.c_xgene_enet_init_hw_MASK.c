
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct TYPE_6__ {scalar_t__ start_dbptr; scalar_t__ start_node; } ;
struct xgene_enet_cle {int max_nodes; int max_dbptrs; int parsers; int jump_bytes; TYPE_1__ ptree; int active_parser; } ;
struct xgene_enet_pdata {int rxq_cnt; scalar_t__ phy_mode; TYPE_4__* mac_ops; int phy_speed; TYPE_3__* port_ops; TYPE_5__** rx_ring; TYPE_2__* cle_ops; int rx_buff_cnt; struct net_device* ndev; struct xgene_enet_cle cle; } ;
struct xgene_enet_desc_ring {int id; } ;
struct net_device {int max_mtu; } ;
struct TYPE_10__ {struct xgene_enet_desc_ring* page_pool; struct xgene_enet_desc_ring* buf_pool; } ;
struct TYPE_9__ {int (* init ) (struct xgene_enet_pdata*) ;} ;
struct TYPE_8__ {int (* reset ) (struct xgene_enet_pdata*) ;int (* cle_bypass ) (struct xgene_enet_pdata*,int ,int ,int ) ;} ;
struct TYPE_7__ {int (* cle_init ) (struct xgene_enet_pdata*) ;} ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct net_device*,char*) ;
 int FUNC_1 (struct xgene_enet_pdata*) ;
 int FUNC_2 (struct xgene_enet_pdata*) ;
 int FUNC_3 (struct xgene_enet_pdata*,int ,int ,int ) ;
 int FUNC_4 (struct xgene_enet_pdata*) ;
 int FUNC_5 (struct net_device*) ;
 int FUNC_6 (struct xgene_enet_pdata*) ;
 int FUNC_7 (TYPE_5__*) ;
 int FUNC_8 (struct xgene_enet_desc_ring*) ;
 int FUNC_9 (struct xgene_enet_desc_ring*,int ) ;
 int FUNC_10 (struct xgene_enet_desc_ring*,int ) ;

__attribute__((used)) static int FUNC_11(struct xgene_enet_pdata *VAR_4)
{
 struct xgene_enet_cle *VAR_5 = &VAR_4->cle;
 struct xgene_enet_desc_ring *VAR_6;
 struct net_device *VAR_7 = VAR_4->ndev;
 struct xgene_enet_desc_ring *VAR_8;
 u16 VAR_9, VAR_10;
 int VAR_11, VAR_12;
 u32 VAR_13;

 VAR_12 = VAR_4->port_ops->reset(VAR_4);
 if (VAR_12)
  return VAR_12;

 VAR_12 = FUNC_5(VAR_7);
 if (VAR_12) {
  FUNC_0(VAR_7, "Error in ring configuration\n");
  return VAR_12;
 }


 for (VAR_11 = 0; VAR_11 < VAR_4->rxq_cnt; VAR_11++) {
  VAR_8 = VAR_4->rx_ring[VAR_11]->buf_pool;
  FUNC_8(VAR_8);
  VAR_6 = VAR_4->rx_ring[VAR_11]->page_pool;
  FUNC_8(VAR_6);

  VAR_13 = VAR_4->rx_buff_cnt;
  VAR_12 = FUNC_9(VAR_8, VAR_13);
  if (VAR_12)
   goto err;

  VAR_12 = FUNC_10(VAR_6, VAR_13);
  if (VAR_12)
   goto err;

 }

 VAR_9 = FUNC_7(VAR_4->rx_ring[0]);
 VAR_8 = VAR_4->rx_ring[0]->buf_pool;
 if (VAR_4->phy_mode == VAR_1) {

  VAR_5->max_nodes = 512;
  VAR_5->max_dbptrs = 1024;
  VAR_5->parsers = 3;
  VAR_5->active_parser = VAR_0;
  VAR_5->ptree.start_node = 0;
  VAR_5->ptree.start_dbptr = 0;
  VAR_5->jump_bytes = 8;
  VAR_12 = VAR_4->cle_ops->cle_init(VAR_4);
  if (VAR_12) {
   FUNC_0(VAR_7, "Preclass Tree init error\n");
   goto err;
  }

 } else {
  VAR_9 = FUNC_7(VAR_4->rx_ring[0]);
  VAR_8 = VAR_4->rx_ring[0]->buf_pool;
  VAR_6 = VAR_4->rx_ring[0]->page_pool;
  VAR_10 = (VAR_6) ? VAR_6->id : 0;
  VAR_4->port_ops->cle_bypass(VAR_4, VAR_9,
         VAR_8->id, VAR_10);
 }

 VAR_7->max_mtu = VAR_3;
 VAR_4->phy_speed = VAR_2;
 VAR_4->mac_ops->init(VAR_4);

 return VAR_12;

err:
 FUNC_6(VAR_4);
 return VAR_12;
}
