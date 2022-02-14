
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef int ushort ;
typedef int uchar ;
typedef void* u32 ;
struct TYPE_15__ {long data_cnt; scalar_t__ cntl; int target_id; scalar_t__ scsi_status; scalar_t__ host_status; int done_status; } ;
struct TYPE_14__ {TYPE_2__ scsi_req_q; } ;
typedef TYPE_1__ adv_req_t ;
typedef int __le32 ;
struct TYPE_17__ {int carr_va; int next_vpa; int areq_vpa; } ;
struct TYPE_16__ {scalar_t__ chip_type; scalar_t__ carr_pending_cnt; TYPE_4__* carr_freelist; TYPE_4__* irq_sp; int iop_base; } ;
typedef int AdvPortAddr ;
typedef TYPE_2__ ADV_SCSI_REQ_Q ;
typedef TYPE_3__ ADV_DVC_VAR ;
typedef TYPE_4__ ADV_CARR_T ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (int ) ;
 int VAR_11 ;
 int FUNC_2 (int,char*,TYPE_4__*,void*) ;
 int VAR_12 ;
 int FUNC_3 (int ,int ,int) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,int ,int ) ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_6 (TYPE_3__*,int) ;
 TYPE_4__* FUNC_7 (TYPE_3__*,int ) ;
 TYPE_1__* FUNC_8 (TYPE_3__*,void*) ;
 int FUNC_9 (TYPE_3__*,TYPE_2__*) ;
 void* FUNC_10 (int ) ;

__attribute__((used)) static int FUNC_11(ADV_DVC_VAR *VAR_16)
{
 AdvPortAddr VAR_17;
 uchar VAR_18;
 ushort VAR_19;
 ADV_CARR_T *VAR_20;
 __le32 VAR_21;
 ADV_SCSI_REQ_Q *VAR_22;
 adv_req_t *VAR_23;

 VAR_17 = VAR_16->iop_base;


 VAR_18 = FUNC_4(VAR_17, VAR_13);

 if ((VAR_18 & (VAR_4 | VAR_5 |
    VAR_6)) == 0) {
  return VAR_3;
 }






 if (VAR_18 & VAR_5) {
  uchar VAR_24;

  FUNC_3(VAR_17, VAR_12, VAR_24);

  if (VAR_16->chip_type == VAR_1 ||
      VAR_16->chip_type == VAR_2) {
   if (VAR_24 == VAR_0 &&
       VAR_16->carr_pending_cnt != 0) {
    FUNC_5(VAR_17, VAR_14,
           VAR_9);
    if (VAR_16->chip_type == VAR_1) {
     FUNC_5(VAR_17,
            VAR_14,
            VAR_10);
    }
   }
  }

  FUNC_6(VAR_16, VAR_24);
 }




 while (((VAR_21 =
   FUNC_10(VAR_16->irq_sp->next_vpa)) & VAR_7) != 0) {
  u32 VAR_25 = FUNC_10(VAR_16->irq_sp->areq_vpa);
  FUNC_2(1, "irq_sp %p areq_vpa %u\n",
   VAR_16->irq_sp, VAR_25);
  VAR_23 = FUNC_8(VAR_16, VAR_25);
  VAR_22 = &VAR_23->scsi_req_q;






  if ((VAR_21 & VAR_8) != 0) {
   VAR_22->done_status = VAR_15;
   VAR_22->host_status = VAR_22->scsi_status = 0;
   VAR_22->data_cnt = 0L;
  }






  VAR_20 = VAR_16->irq_sp;
  VAR_16->irq_sp = FUNC_7(VAR_16,
        FUNC_0(VAR_21));

  VAR_20->next_vpa = VAR_16->carr_freelist->carr_va;
  VAR_16->carr_freelist = VAR_20;
  VAR_16->carr_pending_cnt--;

  VAR_19 = FUNC_1(VAR_22->target_id);




  VAR_22->cntl = 0;





  FUNC_9(VAR_16, VAR_22);







 }
 return VAR_11;
}
