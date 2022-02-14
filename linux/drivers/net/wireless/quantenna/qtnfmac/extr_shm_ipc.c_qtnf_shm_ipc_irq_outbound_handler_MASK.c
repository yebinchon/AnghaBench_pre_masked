
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct qtnf_shm_ipc {int tx_completion; int waiting_for_ack; TYPE_3__* shm_region; } ;
struct TYPE_4__ {int flags; } ;
struct TYPE_5__ {TYPE_1__ hdr; } ;
struct TYPE_6__ {TYPE_2__ headroom; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct qtnf_shm_ipc *VAR_1)
{
 u32 VAR_2;

 if (!FUNC_0(VAR_1->waiting_for_ack))
  return;

 VAR_2 = FUNC_3(&VAR_1->shm_region->headroom.hdr.flags);

 if (VAR_2 & VAR_0) {
  FUNC_1(VAR_1->waiting_for_ack, 0);
  FUNC_2(&VAR_1->tx_completion);
 }
}
