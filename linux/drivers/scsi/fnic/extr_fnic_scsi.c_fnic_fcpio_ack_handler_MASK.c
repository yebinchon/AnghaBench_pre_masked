
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


typedef int u64 ;
typedef int u16 ;
struct vnic_wq_copy {int dummy; } ;
struct TYPE_9__ {int ack_index_out_of_range; int last_ack_time; } ;
struct TYPE_10__ {TYPE_3__ misc_stats; } ;
struct fnic {unsigned int raw_wq_count; unsigned int rq_count; int* fw_ack_recd; TYPE_6__* lport; int * wq_copy_lock; TYPE_4__ fnic_stats; int * fw_ack_index; struct vnic_wq_copy* wq_copy; } ;
struct TYPE_7__ {int request_out; } ;
struct TYPE_8__ {TYPE_1__ ack; } ;
struct fcpio_fw_req {TYPE_2__ u; } ;
struct TYPE_12__ {TYPE_5__* host; } ;
struct TYPE_11__ {int host_no; } ;


 int FUNC_0 (void (*) (struct fnic*,unsigned int,struct fcpio_fw_req*),int ,int ,int ,int ,int ,int ,int ) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (struct vnic_wq_copy*,int ) ;
 int VAR_0 ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

__attribute__((used)) static inline void FUNC_5(struct fnic *VAR_1,
       unsigned int VAR_2,
       struct fcpio_fw_req *VAR_3)
{
 struct vnic_wq_copy *VAR_4;
 u16 VAR_5 = VAR_3->u.ack.request_out;
 unsigned long VAR_6;
 u64 *VAR_7 = (u64 *)(void *)VAR_3;


 VAR_4 = &VAR_1->wq_copy[VAR_2 - VAR_1->raw_wq_count - VAR_1->rq_count];
 FUNC_3(&VAR_1->wq_copy_lock[0], VAR_6);

 VAR_1->fnic_stats.misc_stats.last_ack_time = VAR_0;
 if (FUNC_2(VAR_4, VAR_5)) {
  VAR_1->fw_ack_index[0] = VAR_5;
  VAR_1->fw_ack_recd[0] = 1;
 } else
  FUNC_1(
   &VAR_1->fnic_stats.misc_stats.ack_index_out_of_range);

 FUNC_4(&VAR_1->wq_copy_lock[0], VAR_6);
 FUNC_0(FUNC_5,
    VAR_1->lport->host->host_no, 0, 0, VAR_7[2], VAR_7[3],
    VAR_7[4], VAR_7[5]);
}
