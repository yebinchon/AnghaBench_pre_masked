
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct net_device {int mtu; int dev_addr; } ;
struct TYPE_6__ {TYPE_2__* share; int res_buf; int res_buf_size; int req_buf; int req_buf_size; scalar_t__ buffer_share_bit; int lock; } ;
struct fjes_hw {int max_epid; int my_epid; TYPE_3__ hw_info; int txrx_stop_req_bit; int rx_status_lock; struct ep_share_mem_info* ep_shm_info; } ;
struct fjes_device_command_param {void* share_start; void* res_start; int res_len; void* req_start; int req_len; } ;
struct fjes_adapter {int force_reset; int open_guard; struct fjes_hw hw; struct net_device* netdev; } ;
struct TYPE_4__ {int com_unregist_buf_exec; } ;
struct ep_share_mem_info {int tx; TYPE_1__ ep_stats; } ;
typedef int param ;
struct TYPE_5__ {int ep_status; } ;


 void* FUNC_0 (int ) ;
 int FUNC_1 (int,int *) ;
 int FUNC_2 (struct fjes_hw*,struct fjes_device_command_param*) ;
 int FUNC_3 (struct fjes_hw*) ;
 int FUNC_4 (int *,int ,int ) ;
 int FUNC_5 (struct fjes_hw*,int) ;
 int FUNC_6 (void*,int ,int) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,unsigned long) ;
 int FUNC_10 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_11(struct fjes_adapter *VAR_0)
{
 struct net_device *VAR_1 = VAR_0->netdev;
 struct fjes_device_command_param VAR_2;
 struct ep_share_mem_info *VAR_3;
 struct fjes_hw *VAR_4 = &VAR_0->hw;
 bool VAR_5 = 0;
 unsigned long VAR_6;
 int VAR_7;
 int VAR_8;

 for (VAR_8 = 0; VAR_8 < VAR_4->max_epid; VAR_8++) {
  if (VAR_8 == VAR_4->my_epid)
   continue;

  FUNC_7(&VAR_4->hw_info.lock);
  VAR_7 = FUNC_5(VAR_4, VAR_8);
  FUNC_8(&VAR_4->hw_info.lock);

  VAR_4->ep_shm_info[VAR_8].ep_stats.com_unregist_buf_exec += 1;

  if (VAR_7)
   VAR_5 = 1;

  VAR_3 = &VAR_4->ep_shm_info[VAR_8];

  FUNC_9(&VAR_4->rx_status_lock, VAR_6);
  FUNC_4(&VAR_3->tx,
        VAR_1->dev_addr, VAR_1->mtu);
  FUNC_10(&VAR_4->rx_status_lock, VAR_6);

  FUNC_1(VAR_8, &VAR_4->txrx_stop_req_bit);
 }

 if (VAR_5 || VAR_0->force_reset) {
  VAR_7 = FUNC_3(VAR_4);

  VAR_0->force_reset = 0;

  if (VAR_7)
   VAR_0->open_guard = 1;

  VAR_4->hw_info.buffer_share_bit = 0;

  FUNC_6((void *)&VAR_2, 0, sizeof(VAR_2));

  VAR_2.req_len = VAR_4->hw_info.req_buf_size;
  VAR_2.req_start = FUNC_0(VAR_4->hw_info.req_buf);
  VAR_2.res_len = VAR_4->hw_info.res_buf_size;
  VAR_2.res_start = FUNC_0(VAR_4->hw_info.res_buf);
  VAR_2.share_start = FUNC_0(VAR_4->hw_info.share->ep_status);

  FUNC_2(VAR_4, &VAR_2);
 }
}
