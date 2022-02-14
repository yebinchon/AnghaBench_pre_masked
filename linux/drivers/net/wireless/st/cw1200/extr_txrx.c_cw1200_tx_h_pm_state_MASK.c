
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ link_id; int raw_link_id; size_t tid; } ;
struct cw1200_txinfo {TYPE_2__ txpriv; } ;
struct cw1200_common {int buffered_multicasts; TYPE_1__* link_id_db; int multicast_start_work; int workqueue; scalar_t__ sta_asleep_mask; } ;
struct TYPE_3__ {int * buffered; } ;


 scalar_t__ VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (int ,int *) ;

__attribute__((used)) static bool
FUNC_1(struct cw1200_common *VAR_2,
       struct cw1200_txinfo *VAR_3)
{
 int VAR_4 = 1;

 if (VAR_3->txpriv.link_id == VAR_0 &&
     !VAR_2->buffered_multicasts) {
  VAR_2->buffered_multicasts = 1;
  if (VAR_2->sta_asleep_mask)
   FUNC_0(VAR_2->workqueue,
       &VAR_2->multicast_start_work);
 }

 if (VAR_3->txpriv.raw_link_id && VAR_3->txpriv.tid < VAR_1)
  VAR_4 = VAR_2->link_id_db[VAR_3->txpriv.raw_link_id - 1].buffered[VAR_3->txpriv.tid]++;

 return !VAR_4;
}
