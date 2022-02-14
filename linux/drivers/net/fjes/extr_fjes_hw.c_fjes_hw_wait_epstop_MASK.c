
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int rx_status; } ;
union ep_buffer_info {TYPE_3__ v1i; } ;
struct TYPE_8__ {int buffer_unshare_reserve_bit; int share; } ;
struct fjes_hw {int max_epid; int my_epid; TYPE_4__ hw_info; TYPE_2__* ep_shm_info; } ;
typedef enum ep_partner_status { ____Placeholder_ep_partner_status } ep_partner_status ;
struct TYPE_5__ {union ep_buffer_info* info; } ;
struct TYPE_6__ {TYPE_1__ rx; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,int *) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int,int *) ;

int FUNC_4(struct fjes_hw *VAR_3)
{
 enum ep_partner_status VAR_4;
 union ep_buffer_info *VAR_5;
 int VAR_6 = 0;
 int VAR_7;

 while (VAR_3->hw_info.buffer_unshare_reserve_bit &&
        (VAR_6 < VAR_1 * 1000)) {
  for (VAR_7 = 0; VAR_7 < VAR_3->max_epid; VAR_7++) {
   if (VAR_7 == VAR_3->my_epid)
    continue;
   VAR_4 = FUNC_1(VAR_3->hw_info.share,
       VAR_7);
   VAR_5 = VAR_3->ep_shm_info[VAR_7].rx.info;
   if ((!VAR_4 ||
        (VAR_5->v1i.rx_status &
         VAR_2)) &&
       FUNC_3(VAR_7,
         &VAR_3->hw_info.buffer_unshare_reserve_bit)) {
    FUNC_0(VAR_7,
       &VAR_3->hw_info.buffer_unshare_reserve_bit);
   }
  }

  FUNC_2(100);
  VAR_6 += 100;
 }

 for (VAR_7 = 0; VAR_7 < VAR_3->max_epid; VAR_7++) {
  if (VAR_7 == VAR_3->my_epid)
   continue;
  if (FUNC_3(VAR_7, &VAR_3->hw_info.buffer_unshare_reserve_bit))
   FUNC_0(VAR_7,
      &VAR_3->hw_info.buffer_unshare_reserve_bit);
 }

 return (VAR_6 < VAR_1 * 1000)
   ? 0 : -VAR_0;
}
