
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct net_device {int mtu; int dev_addr; } ;
struct fjes_hw {int max_epid; int my_epid; int rx_status_lock; TYPE_3__* ep_shm_info; } ;
struct fjes_adapter {int napi; int tx_stall_task; struct fjes_hw hw; } ;
struct TYPE_8__ {TYPE_2__* info; } ;
struct TYPE_7__ {TYPE_4__ tx; } ;
struct TYPE_5__ {int rx_status; } ;
struct TYPE_6__ {TYPE_1__ v1i; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_4__*,int ,int) ;
 int* VAR_2 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 struct fjes_adapter* FUNC_6 (struct net_device*) ;
 int FUNC_7 (struct net_device*) ;
 int FUNC_8 (struct net_device*) ;
 int FUNC_9 (struct net_device*) ;
 int FUNC_10 (struct net_device*) ;
 int FUNC_11 (struct net_device*) ;
 int FUNC_12 (int *,unsigned long) ;
 int FUNC_13 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_14(struct net_device *VAR_3, int VAR_4)
{
 struct fjes_adapter *VAR_5 = FUNC_6(VAR_3);
 bool VAR_6 = FUNC_9(VAR_3);
 struct fjes_hw *VAR_7 = &VAR_5->hw;
 unsigned long VAR_8;
 int VAR_9 = -VAR_0;
 int VAR_10, VAR_11;

 for (VAR_10 = 0; VAR_2[VAR_10] != 0; VAR_10++) {
  if (VAR_4 <= VAR_2[VAR_10]) {
   VAR_4 = VAR_2[VAR_10];
   if (VAR_4 == VAR_3->mtu)
    return 0;

   VAR_9 = 0;
   break;
  }
 }

 if (VAR_9)
  return VAR_9;

 if (VAR_6) {
  FUNC_12(&VAR_7->rx_status_lock, VAR_8);
  for (VAR_11 = 0; VAR_11 < VAR_7->max_epid; VAR_11++) {
   if (VAR_11 == VAR_7->my_epid)
    continue;
   VAR_7->ep_shm_info[VAR_11].tx.info->v1i.rx_status &=
    ~VAR_1;
  }
  FUNC_13(&VAR_7->rx_status_lock, VAR_8);

  FUNC_10(VAR_3);
  FUNC_7(VAR_3);
  FUNC_0(&VAR_5->tx_stall_task);
  FUNC_3(&VAR_5->napi);

  FUNC_2(1000);

  FUNC_10(VAR_3);
 }

 VAR_3->mtu = VAR_4;

 if (VAR_6) {
  for (VAR_11 = 0; VAR_11 < VAR_7->max_epid; VAR_11++) {
   if (VAR_11 == VAR_7->my_epid)
    continue;

   FUNC_12(&VAR_7->rx_status_lock, VAR_8);
   FUNC_1(&VAR_7->ep_shm_info[VAR_11].tx,
         VAR_3->dev_addr,
         VAR_3->mtu);

   VAR_7->ep_shm_info[VAR_11].tx.info->v1i.rx_status |=
    VAR_1;
   FUNC_13(&VAR_7->rx_status_lock, VAR_8);
  }

  FUNC_11(VAR_3);
  FUNC_8(VAR_3);
  FUNC_4(&VAR_5->napi);
  FUNC_5(&VAR_5->napi);
 }

 return VAR_9;
}
