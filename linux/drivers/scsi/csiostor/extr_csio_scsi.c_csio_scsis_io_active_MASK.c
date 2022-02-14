
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct csio_scsim {int dummy; } ;
struct csio_rnode {int host_cmpl_q; } ;
struct TYPE_4__ {int sm_list; } ;
struct csio_ioreq {TYPE_2__ sm; int wr_status; int eq_idx; int drv_status; struct csio_rnode* rnode; TYPE_1__* lnode; } ;
struct csio_hw {int dummy; } ;
typedef enum csio_scsi_ev { ____Placeholder_csio_scsi_ev } csio_scsi_ev ;
struct TYPE_3__ {struct csio_hw* hwp; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct csio_scsim*,int ) ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (struct csio_hw*,char*,int,struct csio_ioreq*) ;
 struct csio_scsim* FUNC_3 (struct csio_hw*) ;
 int FUNC_4 (struct csio_rnode*) ;
 int FUNC_5 (struct csio_ioreq*,int ) ;
 int FUNC_6 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_7 (TYPE_2__*,int ) ;
 int FUNC_8 (struct csio_hw*,int ,int) ;
 int FUNC_9 (int *,int *) ;
 int FUNC_10 (int *) ;
 int VAR_8 ;
 int FUNC_11 (int) ;

__attribute__((used)) static void
FUNC_12(struct csio_ioreq *VAR_9, enum csio_scsi_ev VAR_10)
{
 struct csio_hw *VAR_11 = VAR_9->lnode->hwp;
 struct csio_scsim *VAR_12 = FUNC_3(VAR_11);
 struct csio_rnode *VAR_13;

 switch (VAR_10) {
 case 129:
  FUNC_1(VAR_12, VAR_8);
  FUNC_10(&VAR_9->sm.sm_list);
  FUNC_7(&VAR_9->sm, VAR_7);
  if (FUNC_11(VAR_9->wr_status != VAR_1)) {
   VAR_13 = VAR_9->rnode;




   if (FUNC_6(VAR_9->wr_status) &&
      FUNC_4(VAR_13)) {
    FUNC_7(&VAR_9->sm,
      VAR_6);
    FUNC_9(&VAR_9->sm.sm_list,
           &VAR_13->host_cmpl_q);
   }
  }

  break;

 case 131:
  FUNC_5(VAR_9, VAR_2);
  if (VAR_9->drv_status == 0) {
   FUNC_8(VAR_11, VAR_9->eq_idx, 0);
   FUNC_7(&VAR_9->sm, VAR_4);
  }
  break;

 case 130:
  FUNC_5(VAR_9, VAR_3);
  if (VAR_9->drv_status == 0) {
   FUNC_8(VAR_11, VAR_9->eq_idx, 0);
   FUNC_7(&VAR_9->sm, VAR_5);
  }
  break;

 case 128:
  VAR_9->wr_status = VAR_0;
  FUNC_1(VAR_12, VAR_8);
  FUNC_7(&VAR_9->sm, VAR_7);
  break;

 default:
  FUNC_2(VAR_11, "Unhandled event:%d sent to req:%p\n", VAR_10, VAR_9);
  FUNC_0(0);
 }
}
