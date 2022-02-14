
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned int u64 ;
struct ntb_transport_qp {unsigned int qp_num; int client_ready; unsigned int tx_mw_size; unsigned int tx_max_frame; unsigned int tx_max_entry; int rxc_db_work; int tx_free_q; int rx_free_q; int rx_pend_q; int rx_post_q; int ntb_tx_free_q_lock; int ntb_rx_q_lock; int link_cleanup; int link_work; int * debugfs_stats; int * debugfs_dir; scalar_t__ tx_mw; scalar_t__ rx_info; scalar_t__ tx_mw_phys; int * event_handler; int ndev; struct ntb_transport_ctx* transport; } ;
struct ntb_transport_ctx {unsigned int mw_count; unsigned int qp_count; scalar_t__ debugfs_node_dir; TYPE_1__* mw_vec; int ndev; struct ntb_transport_qp* qp_vec; } ;
struct ntb_rx_info {int dummy; } ;
typedef scalar_t__ resource_size_t ;
typedef scalar_t__ phys_addr_t ;
struct TYPE_2__ {scalar_t__ phys_size; scalar_t__ vbase; scalar_t__ phys_addr; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ) ;
 unsigned int FUNC_3 (struct ntb_transport_ctx*,unsigned int) ;
 int VAR_1 ;
 int * FUNC_4 (char*,scalar_t__) ;
 int * FUNC_5 (char*,int ,int *,struct ntb_transport_qp*,int *) ;
 scalar_t__ VAR_2 ;
 unsigned int FUNC_6 (int ,unsigned int) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_7 (struct ntb_transport_qp*) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_8 (char*,int,char*,unsigned int) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *,int ,unsigned long) ;
 int VAR_7 ;

__attribute__((used)) static int FUNC_11(struct ntb_transport_ctx *VAR_8,
        unsigned int VAR_9)
{
 struct ntb_transport_qp *VAR_10;
 phys_addr_t VAR_11;
 resource_size_t VAR_12;
 unsigned int VAR_13, VAR_14;
 unsigned int VAR_15, VAR_16, VAR_17;
 u64 VAR_18;

 VAR_16 = VAR_8->mw_count;
 VAR_17 = VAR_8->qp_count;

 VAR_15 = FUNC_3(VAR_8, VAR_9);

 VAR_10 = &VAR_8->qp_vec[VAR_9];
 VAR_10->qp_num = VAR_9;
 VAR_10->transport = VAR_8;
 VAR_10->ndev = VAR_8->ndev;
 VAR_10->client_ready = 0;
 VAR_10->event_handler = ((void*)0);
 FUNC_7(VAR_10);

 if (VAR_15 < VAR_17 % VAR_16)
  VAR_13 = VAR_17 / VAR_16 + 1;
 else
  VAR_13 = VAR_17 / VAR_16;

 VAR_11 = VAR_8->mw_vec[VAR_15].phys_addr;
 VAR_12 = VAR_8->mw_vec[VAR_15].phys_size;

 if (VAR_2 && VAR_12 > VAR_2)
  VAR_12 = VAR_2;

 VAR_14 = (unsigned int)VAR_12 / VAR_13;
 VAR_18 = VAR_14 * (VAR_9 / VAR_16);

 VAR_10->tx_mw_size = VAR_14;
 VAR_10->tx_mw = VAR_8->mw_vec[VAR_15].vbase + VAR_18;
 if (!VAR_10->tx_mw)
  return -VAR_0;

 VAR_10->tx_mw_phys = VAR_11 + VAR_18;
 if (!VAR_10->tx_mw_phys)
  return -VAR_0;

 VAR_14 -= sizeof(struct ntb_rx_info);
 VAR_10->rx_info = VAR_10->tx_mw + VAR_14;


 VAR_10->tx_max_frame = FUNC_6(VAR_7, VAR_14 / 2);
 VAR_10->tx_max_entry = VAR_14 / VAR_10->tx_max_frame;

 if (VAR_8->debugfs_node_dir) {
  char VAR_19[4];

  FUNC_8(VAR_19, 4, "qp%d", VAR_9);
  VAR_10->debugfs_dir = FUNC_4(VAR_19,
           VAR_8->debugfs_node_dir);

  VAR_10->debugfs_stats = FUNC_5("stats", VAR_1,
       VAR_10->debugfs_dir, VAR_10,
       &VAR_3);
 } else {
  VAR_10->debugfs_dir = ((void*)0);
  VAR_10->debugfs_stats = ((void*)0);
 }

 FUNC_0(&VAR_10->link_work, VAR_5);
 FUNC_2(&VAR_10->link_cleanup, VAR_4);

 FUNC_9(&VAR_10->ntb_rx_q_lock);
 FUNC_9(&VAR_10->ntb_tx_free_q_lock);

 FUNC_1(&VAR_10->rx_post_q);
 FUNC_1(&VAR_10->rx_pend_q);
 FUNC_1(&VAR_10->rx_free_q);
 FUNC_1(&VAR_10->tx_free_q);

 FUNC_10(&VAR_10->rxc_db_work, VAR_6,
       (unsigned long)VAR_10);

 return 0;
}
