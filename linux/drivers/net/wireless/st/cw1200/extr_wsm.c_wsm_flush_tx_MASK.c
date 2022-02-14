
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cw1200_common {int bh_error; int bh_wq; int hw_bufs_used; TYPE_1__* hw; int bh_evt_wq; int * tx_queue; int tx_lock; } ;
struct TYPE_2__ {int wiphy; } ;


 int FUNC_0 (int) ;
 unsigned long VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,unsigned long*,int) ;
 unsigned long VAR_1 ;
 int FUNC_3 (char*) ;
 scalar_t__ FUNC_4 (int ,int,long) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ,char*,int ) ;

bool FUNC_7(struct cw1200_common *VAR_2)
{
 unsigned long VAR_3 = VAR_1;
 bool VAR_4 = 0;
 long VAR_5;
 int VAR_6;


 FUNC_0(!FUNC_1(&VAR_2->tx_lock));





 if (!VAR_2->hw_bufs_used)
  return 1;

 if (VAR_2->bh_error) {

  FUNC_3("[WSM] Fatal error occurred, will not flush TX.\n");
  return 0;
 } else {

  for (VAR_6 = 0; VAR_6 < 4; ++VAR_6)
   VAR_4 |= FUNC_2(
     &VAR_2->tx_queue[VAR_6],
     &VAR_3, 0xffffffff);

  if (!VAR_4)
   return 1;

  VAR_5 = VAR_3 + VAR_0 - VAR_1;
  if (VAR_5 < 0 || FUNC_4(VAR_2->bh_evt_wq,
            !VAR_2->hw_bufs_used,
            VAR_5) <= 0) {

   VAR_2->bh_error = 1;
   FUNC_6(VAR_2->hw->wiphy, "[WSM] TX Frames (%d) stuck in firmware, killing BH\n", VAR_2->hw_bufs_used);
   FUNC_5(&VAR_2->bh_wq);
   return 0;
  }


  return 1;
 }
}
