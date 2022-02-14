
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int scan_generation; } ;
struct TYPE_7__ {TYPE_1__ mgt_rsp; } ;
struct esas2r_request {scalar_t__ req_stat; TYPE_5__* vda_rsp_data; TYPE_2__ func_rsp; scalar_t__ interrupt_cx; } ;
struct esas2r_disc_context {int flags; scalar_t__ raid_grp_ix; void* state; int part_num; int curr_virt_id; int scan_gen; } ;
struct esas2r_adapter {int mem_lock; } ;
struct atto_vdapart_info {int target_id; int part_no; } ;
struct TYPE_8__ {struct atto_vdapart_info part_info; } ;
struct TYPE_9__ {TYPE_3__ data; } ;
struct TYPE_10__ {TYPE_4__ mgt_data; } ;


 int VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (struct esas2r_adapter*,struct esas2r_request*) ;
 int FUNC_1 (int ,char*,scalar_t__) ;
 int FUNC_2 (struct esas2r_request*,struct esas2r_adapter*) ;
 int FUNC_3 (struct esas2r_adapter*,struct esas2r_disc_context*) ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_9(struct esas2r_adapter *VAR_6,
         struct esas2r_request *VAR_7)
{
 struct esas2r_disc_context *VAR_8 =
  (struct esas2r_disc_context *)VAR_7->interrupt_cx;
 unsigned long VAR_9;
 struct atto_vdapart_info *VAR_10;

 FUNC_4();

 FUNC_7(&VAR_6->mem_lock, VAR_9);

 if (VAR_7->req_stat == VAR_4) {
  VAR_8->scan_gen = VAR_7->func_rsp.mgt_rsp.scan_generation;
  VAR_8->raid_grp_ix = 0;
  VAR_8->state = VAR_1;
 } else if (VAR_7->req_stat == VAR_5) {
  VAR_10 = &VAR_7->vda_rsp_data->mgt_data.data.part_info;

  VAR_8->part_num = VAR_10->part_no;

  VAR_8->curr_virt_id = FUNC_6(VAR_10->target_id);

  FUNC_3(VAR_6, VAR_8);

  VAR_8->part_num++;
 } else {
  if (!(VAR_7->req_stat == VAR_3)) {
   FUNC_1(VAR_2,
       "A request for RAID group partition info "
       "failed - status:%d", VAR_7->req_stat);
  }

  VAR_8->state = VAR_1;
  VAR_8->raid_grp_ix++;
 }

 FUNC_2(VAR_7, VAR_6);



 if (!(VAR_8->flags & VAR_0))
  FUNC_0(VAR_6, VAR_7);

 FUNC_8(&VAR_6->mem_lock, VAR_9);

 FUNC_5();
}
