
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {scalar_t__ target_id; void* scsiq_rptr; int carr_pa; int carr_va; int srb_tag; void* scsiq_ptr; int done_status; int host_status; } ;
struct TYPE_9__ {int req_addr; TYPE_2__ scsi_req_q; } ;
typedef TYPE_1__ adv_req_t ;
struct TYPE_12__ {int carr_pa; int next_vpa; void* areq_vpa; int carr_va; } ;
struct TYPE_11__ {scalar_t__ chip_type; TYPE_4__* icq_sp; int carr_pending_cnt; int iop_base; } ;
typedef int AdvPortAddr ;
typedef TYPE_2__ ADV_SCSI_REQ_Q ;
typedef TYPE_3__ ADV_DVC_VAR ;
typedef TYPE_4__ ADV_CARR_T ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ,int ,int ) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 TYPE_4__* FUNC_3 (TYPE_3__*) ;
 void* FUNC_4 (int ) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static int FUNC_6(ADV_DVC_VAR *VAR_13, adv_req_t *VAR_14)
{
 AdvPortAddr VAR_15;
 ADV_CARR_T *VAR_16;
 ADV_SCSI_REQ_Q *VAR_17 = &VAR_14->scsi_req_q;




 if (VAR_17->target_id > VAR_5) {
  VAR_17->host_status = VAR_12;
  VAR_17->done_status = VAR_11;
  return VAR_4;
 }

 VAR_15 = VAR_13->iop_base;





 VAR_16 = FUNC_3(VAR_13);
 if (!VAR_16) {
  FUNC_0(1, "No free carriers\n");
  return VAR_0;
 }

 VAR_13->carr_pending_cnt++;


 VAR_17->scsiq_ptr = FUNC_4(VAR_17->srb_tag);
 VAR_17->scsiq_rptr = FUNC_4(VAR_14->req_addr);

 VAR_17->carr_va = VAR_13->icq_sp->carr_va;
 VAR_17->carr_pa = VAR_13->icq_sp->carr_pa;






 VAR_13->icq_sp->areq_vpa = VAR_17->scsiq_rptr;






 VAR_13->icq_sp->next_vpa = VAR_16->carr_pa;




 VAR_13->icq_sp = VAR_16;

 if (VAR_13->chip_type == VAR_1 ||
     VAR_13->chip_type == VAR_2) {



  FUNC_1(VAR_15, VAR_9, VAR_7);
  if (VAR_13->chip_type == VAR_1) {





   FUNC_1(VAR_15, VAR_9,
          VAR_8);
  }
 } else if (VAR_13->chip_type == VAR_3) {




  FUNC_2(VAR_15, VAR_10,
          FUNC_5(VAR_16->carr_pa));
 }

 return VAR_6;
}
