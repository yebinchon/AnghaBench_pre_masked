
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct csio_scsim {int active_q; } ;
struct TYPE_4__ {int sm_list; } ;
struct csio_ioreq {int drv_status; int eq_idx; TYPE_2__ sm; int dcopy; int datadir; int nsge; TYPE_1__* lnode; } ;
struct csio_hw {int dummy; } ;
typedef enum csio_scsi_ev { ____Placeholder_csio_scsi_ev } csio_scsi_ev ;
struct TYPE_3__ {struct csio_hw* hwp; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct csio_scsim*,int ) ;




 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (struct csio_hw*,char*,int,struct csio_ioreq*) ;
 struct csio_scsim* FUNC_3 (struct csio_hw*) ;
 int FUNC_4 (struct csio_ioreq*) ;
 int FUNC_5 (struct csio_ioreq*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_6 (TYPE_2__*,int ) ;
 int FUNC_7 (struct csio_scsim*,struct csio_ioreq*) ;
 int FUNC_8 (struct csio_hw*,char*,struct csio_ioreq*) ;
 int FUNC_9 (struct csio_hw*,int ,int) ;
 int FUNC_10 (int) ;
 int FUNC_11 (int *,int *) ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static void
FUNC_12(struct csio_ioreq *VAR_6, enum csio_scsi_ev VAR_7)
{
 struct csio_hw *VAR_8 = VAR_6->lnode->hwp;
 struct csio_scsim *VAR_9 = FUNC_3(VAR_8);

 switch (VAR_7) {
 case 129:

  if (VAR_6->nsge) {
   if (VAR_6->datadir == VAR_0) {
    VAR_6->dcopy = 0;
    FUNC_5(VAR_6);
   } else
    FUNC_7(VAR_9, VAR_6);
  } else {
   FUNC_4(VAR_6);
  }

  if (FUNC_10(VAR_6->drv_status == 0)) {

   FUNC_6(&VAR_6->sm, VAR_2);
   FUNC_11(&VAR_6->sm.sm_list, &VAR_9->active_q);
   FUNC_9(VAR_8, VAR_6->eq_idx, 0);
   FUNC_1(VAR_9, VAR_4);

   return;
  }
  break;

 case 128:
  FUNC_4(VAR_6);
  if (VAR_6->drv_status == 0) {
   FUNC_6(&VAR_6->sm, VAR_3);
   FUNC_11(&VAR_6->sm.sm_list, &VAR_9->active_q);
   FUNC_9(VAR_8, VAR_6->eq_idx, 0);
   FUNC_1(VAR_9, VAR_5);
  }
  return;

 case 131:
 case 130:
  VAR_6->drv_status = -VAR_1;
  FUNC_8(VAR_8, "Trying to abort/close completed IO:%p!\n", VAR_6);
  break;

 default:
  FUNC_2(VAR_8, "Unhandled event:%d sent to req:%p\n", VAR_7, VAR_6);
  FUNC_0(0);
 }
}
