
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef union eth_tx_bd_types {int dummy; } eth_tx_bd_types ;
struct TYPE_4__ {void* skbs; void* xdp; } ;
struct qede_tx_queue {int num_tx_buffers; int tx_pbl; TYPE_1__ sw_tx_ring; scalar_t__ is_xdp; } ;
struct qede_dev {int q_num_tx_buffers; int cdev; TYPE_3__* ops; } ;
struct TYPE_6__ {TYPE_2__* common; } ;
struct TYPE_5__ {int (* chain_alloc ) (int ,int ,int ,int ,int,int,int *,int *) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 void* FUNC_0 (int,int ) ;
 int FUNC_1 (struct qede_dev*,struct qede_tx_queue*) ;
 int FUNC_2 (int ,int ,int ,int ,int,int,int *,int *) ;

__attribute__((used)) static int FUNC_3(struct qede_dev *VAR_5, struct qede_tx_queue *VAR_6)
{
 union eth_tx_bd_types *VAR_7;
 int VAR_8, VAR_9;

 VAR_6->num_tx_buffers = VAR_5->q_num_tx_buffers;


 if (VAR_6->is_xdp) {
  VAR_8 = sizeof(*VAR_6->sw_tx_ring.xdp) * VAR_6->num_tx_buffers;
  VAR_6->sw_tx_ring.xdp = FUNC_0(VAR_8, VAR_1);
  if (!VAR_6->sw_tx_ring.xdp)
   goto err;
 } else {
  VAR_8 = sizeof(*VAR_6->sw_tx_ring.skbs) * VAR_6->num_tx_buffers;
  VAR_6->sw_tx_ring.skbs = FUNC_0(VAR_8, VAR_1);
  if (!VAR_6->sw_tx_ring.skbs)
   goto err;
 }

 VAR_9 = VAR_5->ops->common->chain_alloc(VAR_5->cdev,
         VAR_4,
         VAR_3,
         VAR_2,
         VAR_6->num_tx_buffers,
         sizeof(*VAR_7),
         &VAR_6->tx_pbl, ((void*)0));
 if (VAR_9)
  goto err;

 return 0;

err:
 FUNC_1(VAR_5, VAR_6);
 return -VAR_0;
}
