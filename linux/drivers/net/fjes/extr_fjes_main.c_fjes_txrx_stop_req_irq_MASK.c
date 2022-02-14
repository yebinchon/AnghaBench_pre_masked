
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct fjes_hw {int my_epid; int epstop_task; int epstop_req_bit; TYPE_7__* ep_shm_info; int txrx_stop_req_bit; int rx_status_lock; } ;
struct fjes_adapter {int control_wq; int unshare_watch_task; int unshare_watch_bitmask; struct fjes_hw hw; } ;
typedef enum ep_partner_status { ____Placeholder_ep_partner_status } ep_partner_status ;
struct TYPE_13__ {TYPE_5__* info; } ;
struct TYPE_10__ {TYPE_2__* info; } ;
struct TYPE_14__ {TYPE_6__ rx; TYPE_3__ tx; } ;
struct TYPE_11__ {int rx_status; } ;
struct TYPE_12__ {TYPE_4__ v1i; } ;
struct TYPE_8__ {int rx_status; } ;
struct TYPE_9__ {TYPE_1__ v1i; } ;






 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int *) ;
 int FUNC_1 (struct fjes_hw*,int) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int,int *) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (struct fjes_hw*,int) ;
 int FUNC_7 (struct fjes_hw*,int,int) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static void FUNC_9(struct fjes_adapter *VAR_2,
       int VAR_3)
{
 struct fjes_hw *VAR_4 = &VAR_2->hw;
 enum ep_partner_status VAR_5;
 unsigned long VAR_6;

 VAR_5 = FUNC_1(VAR_4, VAR_3);
 FUNC_7(VAR_4, VAR_3, VAR_5);
 switch (VAR_5) {
 case 129:
 case 131:
 default:
  break;
 case 128:
  if (VAR_3 < VAR_4->my_epid) {
   FUNC_4(&VAR_4->rx_status_lock, VAR_6);
   VAR_4->ep_shm_info[VAR_3].tx.info->v1i.rx_status |=
    VAR_0;
   FUNC_5(&VAR_4->rx_status_lock, VAR_6);

   FUNC_0(VAR_3, &VAR_4->txrx_stop_req_bit);
   FUNC_3(VAR_3, &VAR_2->unshare_watch_bitmask);

   if (!FUNC_8(&VAR_2->unshare_watch_task))
    FUNC_2(VAR_2->control_wq,
        &VAR_2->unshare_watch_task);
  }
  break;
 case 130:
  if (VAR_4->ep_shm_info[VAR_3].rx.info->v1i.rx_status &
      VAR_1) {
   FUNC_3(VAR_3, &VAR_4->epstop_req_bit);
   if (!FUNC_8(&VAR_4->epstop_task))
    FUNC_2(VAR_2->control_wq,
        &VAR_4->epstop_task);
  }
  break;
 }
 FUNC_6(VAR_4, VAR_3);
}
