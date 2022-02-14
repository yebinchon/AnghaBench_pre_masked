
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
struct esas2r_disc_context {int flags; int state; scalar_t__ dev_ix; scalar_t__ part_num; void* block_size; void* interleave; int * raid_grp_name; scalar_t__ raid_grp_ix; int scan_gen; } ;
struct esas2r_adapter {int mem_lock; } ;
struct atto_vda_grp_info {scalar_t__ status; int block_size; int interleave; int * grp_name; } ;
struct TYPE_8__ {struct atto_vda_grp_info grp_info; } ;
struct TYPE_9__ {TYPE_3__ data; } ;
struct TYPE_10__ {TYPE_4__ mgt_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_0 (struct esas2r_adapter*,struct esas2r_request*) ;
 int FUNC_1 (int ,char*,scalar_t__) ;
 int FUNC_2 (struct esas2r_request*,struct esas2r_adapter*) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 void* FUNC_5 (int ) ;
 int FUNC_6 (int *,int *,int) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_9(struct esas2r_adapter *VAR_9,
      struct esas2r_request *VAR_10)
{
 struct esas2r_disc_context *VAR_11 =
  (struct esas2r_disc_context *)VAR_10->interrupt_cx;
 unsigned long VAR_12;
 struct atto_vda_grp_info *VAR_13;

 FUNC_3();

 FUNC_7(&VAR_9->mem_lock, VAR_12);

 if (VAR_10->req_stat == VAR_5) {
  VAR_11->scan_gen = VAR_10->func_rsp.mgt_rsp.scan_generation;
  VAR_11->raid_grp_ix = 0;
  goto done;
 }

 if (VAR_10->req_stat == VAR_6) {
  VAR_13 = &VAR_10->vda_rsp_data->mgt_data.data.grp_info;

  if (VAR_13->status != VAR_8
      && VAR_13->status != VAR_7) {


   VAR_11->raid_grp_ix++;
  } else {
   FUNC_6(&VAR_11->raid_grp_name[0],
          &VAR_13->grp_name[0],
          sizeof(VAR_13->grp_name));

   VAR_11->interleave = FUNC_5(VAR_13->interleave);
   VAR_11->block_size = FUNC_5(VAR_13->block_size);

   VAR_11->state = VAR_1;
   VAR_11->part_num = 0;
  }
 } else {
  if (!(VAR_10->req_stat == VAR_4)) {
   FUNC_1(VAR_3,
       "A request for RAID group info failed - "
       "returned with %x",
       VAR_10->req_stat);
  }

  VAR_11->dev_ix = 0;
  VAR_11->state = VAR_2;
 }

done:

 FUNC_2(VAR_10, VAR_9);



 if (!(VAR_11->flags & VAR_0))
  FUNC_0(VAR_9, VAR_10);

 FUNC_8(&VAR_9->mem_lock, VAR_12);

 FUNC_4();
}
