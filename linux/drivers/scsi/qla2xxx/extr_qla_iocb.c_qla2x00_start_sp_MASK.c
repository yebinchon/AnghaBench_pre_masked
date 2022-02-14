
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_34__ TYPE_4__ ;
typedef struct TYPE_33__ TYPE_3__ ;
typedef struct TYPE_32__ TYPE_2__ ;
typedef struct TYPE_31__ TYPE_1__ ;


struct qla_qpair {int qp_lock_ptr; int req; } ;
struct qla_hw_data {int dummy; } ;
struct TYPE_31__ {int timer; } ;
struct TYPE_32__ {TYPE_1__ iocb_cmd; } ;
struct TYPE_33__ {int type; TYPE_2__ u; scalar_t__ start_timer; struct qla_qpair* qpair; TYPE_4__* vha; } ;
typedef TYPE_3__ srb_t ;
struct TYPE_34__ {struct qla_hw_data* hw; } ;
typedef TYPE_4__ scsi_qla_host_t ;


 int VAR_0 ;
 int FUNC_0 (struct qla_hw_data*) ;
 int FUNC_1 (struct qla_hw_data*) ;
 int VAR_1 ;
 void* FUNC_2 (struct qla_qpair*,TYPE_3__*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,TYPE_4__*,int,char*) ;
 int VAR_2 ;
 int FUNC_5 (TYPE_3__*,void*) ;
 int FUNC_6 (TYPE_3__*,void*) ;
 int FUNC_7 (TYPE_3__*,void*) ;
 int FUNC_8 (TYPE_3__*,void*) ;
 int FUNC_9 (TYPE_3__*,void*) ;
 int FUNC_10 (TYPE_3__*,void*) ;
 int FUNC_11 (TYPE_3__*,void*) ;
 int FUNC_12 (TYPE_3__*,void*) ;
 int FUNC_13 (TYPE_3__*,void*) ;
 int FUNC_14 (TYPE_3__*,void*) ;
 int FUNC_15 (TYPE_3__*,void*) ;
 int FUNC_16 (TYPE_3__*,void*) ;
 int FUNC_17 (TYPE_3__*,void*) ;
 int FUNC_18 (TYPE_3__*,void*) ;
 int FUNC_19 (TYPE_3__*,void*) ;
 int FUNC_20 (TYPE_3__*,void*) ;
 int FUNC_21 (TYPE_3__*,void*) ;
 int FUNC_22 (TYPE_3__*,void*) ;
 int FUNC_23 (TYPE_4__*,int ) ;
 int FUNC_24 (TYPE_3__*,void*) ;
 int FUNC_25 (TYPE_3__*,void*) ;
 int FUNC_26 (TYPE_3__*,void*) ;
 int FUNC_27 (TYPE_3__*,void*) ;
 int FUNC_28 (int ,unsigned long) ;
 int FUNC_29 (int ,unsigned long) ;
 int FUNC_30 () ;

int
FUNC_31(srb_t *VAR_3)
{
 int VAR_4 = VAR_1;
 scsi_qla_host_t *VAR_5 = VAR_3->vha;
 struct qla_hw_data *VAR_6 = VAR_5->hw;
 struct qla_qpair *VAR_7 = VAR_3->qpair;
 void *VAR_8;
 unsigned long VAR_9;

 FUNC_28(VAR_7->qp_lock_ptr, VAR_9);
 VAR_8 = FUNC_2(VAR_3->qpair, VAR_3);
 if (!VAR_8) {
  VAR_4 = VAR_0;
  FUNC_4(VAR_2, VAR_5, 0x700c,
      "qla2x00_alloc_iocbs failed.\n");
  goto done;
 }

 switch (VAR_3->type) {
 case 137:
  FUNC_0(VAR_6) ?
      FUNC_10(VAR_3, VAR_8) :
      FUNC_19(VAR_3, VAR_8);
  break;
 case 130:
  FUNC_12(VAR_3, VAR_8);
  break;
 case 136:
  FUNC_0(VAR_6) ?
      FUNC_11(VAR_3, VAR_8) :
      FUNC_20(VAR_3, VAR_8);
  break;
 case 141:
 case 142:
  FUNC_8(VAR_3, VAR_8);
  break;
 case 144:
  FUNC_0(VAR_6) ?
      FUNC_7(VAR_3, VAR_8) :
      FUNC_17(VAR_3, VAR_8);
  break;
 case 146:
  FUNC_0(VAR_6) ?
      FUNC_6(VAR_3, VAR_8) :
      FUNC_16(VAR_3, VAR_8);
  break;
 case 128:
  FUNC_1(VAR_6) ?
      FUNC_27(VAR_3, VAR_8) :
      FUNC_14(VAR_3, VAR_8);
  break;
 case 138:
 case 139:
  FUNC_26(VAR_3, VAR_8);
  break;
 case 131:
  FUNC_24(VAR_3, VAR_8);
  break;
 case 147:
  FUNC_1(VAR_6) ?
   FUNC_25(VAR_3, VAR_8) :
   FUNC_5(VAR_3, VAR_8);
  break;
 case 140:
  FUNC_9(VAR_3, VAR_8);
  break;
 case 143:
  FUNC_18(VAR_3, VAR_8);
  break;
 case 135:
  FUNC_21(VAR_3, VAR_8);
  break;
 case 133:
 case 132:
 case 134:
  FUNC_22(VAR_3, VAR_8);
  break;
 case 145:
  FUNC_15(VAR_3, VAR_8);
  break;
 case 129:
  FUNC_13(VAR_3, VAR_8);
  break;
 default:
  break;
 }

 if (VAR_3->start_timer)
  FUNC_3(&VAR_3->u.iocb_cmd.timer);

 FUNC_30();
 FUNC_23(VAR_5, VAR_7->req);
done:
 FUNC_29(VAR_7->qp_lock_ptr, VAR_9);
 return VAR_4;
}
