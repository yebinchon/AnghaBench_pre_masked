
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_9__ {int dev_index; int scan_generation; } ;
struct TYPE_10__ {TYPE_4__ mgt_rsp; } ;
struct esas2r_request {scalar_t__ req_stat; TYPE_5__ func_rsp; TYPE_3__* vda_rsp_data; scalar_t__ interrupt_cx; } ;
struct esas2r_disc_context {int dev_ix; int curr_virt_id; int curr_phys_id; int flags; int state; int dev_addr_type; int scan_gen; } ;
struct esas2r_adapter {int mem_lock; } ;
struct atto_vda_devinfo {int phys_target_id; int features; int target_id; } ;
struct TYPE_6__ {struct atto_vda_devinfo dev_info; } ;
struct TYPE_7__ {TYPE_1__ data; } ;
struct TYPE_8__ {TYPE_2__ mgt_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (struct esas2r_adapter*,struct esas2r_request*) ;
 int FUNC_1 (int ,char*,scalar_t__) ;
 int FUNC_2 (struct esas2r_request*,struct esas2r_adapter*) ;
 int FUNC_3 (char*,int) ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_9(struct esas2r_adapter *VAR_10,
          struct esas2r_request *VAR_11)
{
 struct esas2r_disc_context *VAR_12 =
  (struct esas2r_disc_context *)VAR_11->interrupt_cx;
 unsigned long VAR_13;
 struct atto_vda_devinfo *VAR_14;

 FUNC_4();

 FUNC_7(&VAR_10->mem_lock, VAR_13);

 if (VAR_11->req_stat == VAR_7) {
  VAR_12->scan_gen = VAR_11->func_rsp.mgt_rsp.scan_generation;
  VAR_12->dev_ix = 0;
  VAR_12->state = VAR_4;
 } else if (VAR_11->req_stat == VAR_8) {
  VAR_14 = &VAR_11->vda_rsp_data->mgt_data.data.dev_info;

  VAR_12->dev_ix = FUNC_6(VAR_11->func_rsp.mgt_rsp.dev_index);

  VAR_12->curr_virt_id = FUNC_6(VAR_14->target_id);

  if (FUNC_6(VAR_14->features) & VAR_9) {
   VAR_12->curr_phys_id =
    FUNC_6(VAR_14->phys_target_id);
   VAR_12->dev_addr_type = VAR_0;
   VAR_12->state = VAR_3;

   FUNC_3("curr_virt_id: %d", VAR_12->curr_virt_id);
   FUNC_3("curr_phys_id: %d", VAR_12->curr_phys_id);
  } else {
   VAR_12->dev_ix++;
  }
 } else {
  if (!(VAR_11->req_stat == VAR_6)) {
   FUNC_1(VAR_5,
       "A request for device information failed - "
       "status:%d", VAR_11->req_stat);
  }

  VAR_12->state = VAR_2;
 }

 FUNC_2(VAR_11, VAR_10);



 if (!(VAR_12->flags & VAR_1))
  FUNC_0(VAR_10, VAR_11);

 FUNC_8(&VAR_10->mem_lock, VAR_13);

 FUNC_5();
}
