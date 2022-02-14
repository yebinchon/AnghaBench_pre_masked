
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int buffer_unshare_reserve_bit; } ;
struct fjes_hw {int epstop_task; int epstop_req_bit; int txrx_stop_req_bit; int rx_status_lock; TYPE_5__* ep_shm_info; TYPE_1__ hw_info; } ;
struct fjes_adapter {int control_wq; int unshare_watch_task; int unshare_watch_bitmask; struct fjes_hw hw; } ;
typedef enum ep_partner_status { ____Placeholder_ep_partner_status } ep_partner_status ;
struct TYPE_9__ {TYPE_3__* info; } ;
struct TYPE_10__ {TYPE_4__ tx; } ;
struct TYPE_7__ {int rx_status; } ;
struct TYPE_8__ {TYPE_2__ v1i; } ;






 int VAR_0 ;
 int FUNC_0 (int,int *) ;
 int FUNC_1 (struct fjes_hw*,int) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int,int *) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (struct fjes_hw*,int) ;
 int FUNC_7 (struct fjes_hw*,int,int) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static void FUNC_9(struct fjes_adapter *VAR_1, int VAR_2)
{
 struct fjes_hw *VAR_3 = &VAR_1->hw;
 enum ep_partner_status VAR_4;
 unsigned long VAR_5;

 FUNC_3(VAR_2, &VAR_3->hw_info.buffer_unshare_reserve_bit);

 VAR_4 = FUNC_1(VAR_3, VAR_2);
 FUNC_7(VAR_3, VAR_2, VAR_4);
 switch (VAR_4) {
 case 128:
  FUNC_4(&VAR_3->rx_status_lock, VAR_5);
  VAR_3->ep_shm_info[VAR_2].tx.info->v1i.rx_status |=
    VAR_0;
  FUNC_5(&VAR_3->rx_status_lock, VAR_5);
  FUNC_0(VAR_2, &VAR_3->txrx_stop_req_bit);

 case 129:
 case 131:
 default:
  FUNC_3(VAR_2, &VAR_1->unshare_watch_bitmask);
  if (!FUNC_8(&VAR_1->unshare_watch_task))
   FUNC_2(VAR_1->control_wq,
       &VAR_1->unshare_watch_task);
  break;
 case 130:
  FUNC_3(VAR_2, &VAR_3->epstop_req_bit);

  if (!FUNC_8(&VAR_3->epstop_task))
   FUNC_2(VAR_1->control_wq, &VAR_3->epstop_task);
  break;
 }
 FUNC_6(VAR_3, VAR_2);
}
