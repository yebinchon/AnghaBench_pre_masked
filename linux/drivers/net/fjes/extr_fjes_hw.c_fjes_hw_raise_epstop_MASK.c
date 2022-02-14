
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int buffer_unshare_reserve_bit; } ;
struct fjes_hw {int max_epid; int my_epid; int rx_status_lock; TYPE_6__* ep_shm_info; int txrx_stop_req_bit; TYPE_2__ hw_info; } ;
typedef enum ep_partner_status { ____Placeholder_ep_partner_status } ep_partner_status ;
struct TYPE_11__ {TYPE_4__* info; } ;
struct TYPE_7__ {int send_intr_unshare; } ;
struct TYPE_12__ {TYPE_5__ tx; TYPE_1__ ep_stats; } ;
struct TYPE_9__ {int rx_status; } ;
struct TYPE_10__ {TYPE_3__ v1i; } ;



 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct fjes_hw*,int) ;
 int FUNC_1 (struct fjes_hw*,int,int ) ;
 int FUNC_2 (int,int *) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

void FUNC_5(struct fjes_hw *VAR_2)
{
 enum ep_partner_status VAR_3;
 unsigned long VAR_4;
 int VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_2->max_epid; VAR_5++) {
  if (VAR_5 == VAR_2->my_epid)
   continue;

  VAR_3 = FUNC_0(VAR_2, VAR_5);
  switch (VAR_3) {
  case 128:
   FUNC_1(VAR_2, VAR_5,
      VAR_1);
   VAR_2->ep_shm_info[VAR_5].ep_stats.send_intr_unshare += 1;
   break;
  default:
   break;
  }

  FUNC_2(VAR_5, &VAR_2->hw_info.buffer_unshare_reserve_bit);
  FUNC_2(VAR_5, &VAR_2->txrx_stop_req_bit);

  FUNC_3(&VAR_2->rx_status_lock, VAR_4);
  VAR_2->ep_shm_info[VAR_5].tx.info->v1i.rx_status |=
    VAR_0;
  FUNC_4(&VAR_2->rx_status_lock, VAR_4);
 }
}
