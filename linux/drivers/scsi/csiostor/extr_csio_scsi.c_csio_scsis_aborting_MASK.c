
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct csio_scsim {int dummy; } ;
struct TYPE_4__ {int sm_list; } ;
struct csio_ioreq {TYPE_2__ sm; int wr_status; int drv_status; TYPE_1__* lnode; } ;
struct csio_hw {int dummy; } ;
typedef enum csio_scsi_ev { ____Placeholder_csio_scsi_ev } csio_scsi_ev ;
struct TYPE_3__ {struct csio_hw* hwp; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct csio_scsim*,int ) ;
 int FUNC_2 (struct csio_scsim*,int ) ;





 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (struct csio_hw*,char*,...) ;
 struct csio_scsim* FUNC_4 (struct csio_hw*) ;
 int FUNC_5 (int ) ;
 int VAR_5 ;
 int FUNC_6 (TYPE_2__*,int ) ;
 int FUNC_7 (struct csio_hw*,char*,struct csio_ioreq*) ;
 int FUNC_8 (int *) ;
 int VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static void
FUNC_9(struct csio_ioreq *VAR_8, enum csio_scsi_ev VAR_9)
{
 struct csio_hw *VAR_10 = VAR_8->lnode->hwp;
 struct csio_scsim *VAR_11 = FUNC_4(VAR_10);

 switch (VAR_9) {
 case 129:
  FUNC_3(VAR_10,
    "ioreq %p recvd cmpltd (wr_status:%d) "
    "in aborting st\n", VAR_8, VAR_8->wr_status);
  VAR_8->drv_status = -VAR_0;
  break;

 case 132:
  FUNC_2(VAR_11, VAR_6);
  break;

 case 131:

  FUNC_3(VAR_10, "abort of %p return status:0x%x drv_status:%x\n",
    VAR_8, VAR_8->wr_status, VAR_8->drv_status);




  if (VAR_8->drv_status != -VAR_0) {
   FUNC_7(VAR_10,
      "Abort completed before original I/O,"
       " req:%p\n", VAR_8);
   FUNC_0(0);
  }
  if ((VAR_8->wr_status == VAR_4) ||
      (VAR_8->wr_status == VAR_1) ||
      FUNC_5(VAR_8->wr_status))
   VAR_8->wr_status = VAR_3;

  FUNC_1(VAR_11, VAR_7);
  FUNC_8(&VAR_8->sm.sm_list);
  FUNC_6(&VAR_8->sm, VAR_5);
  break;

 case 128:
  VAR_8->wr_status = VAR_2;
  FUNC_1(VAR_11, VAR_7);
  FUNC_6(&VAR_8->sm, VAR_5);
  break;

 case 130:







  break;

 default:
  FUNC_3(VAR_10, "Unhandled event:%d sent to req:%p\n", VAR_9, VAR_8);
  FUNC_0(0);
 }
}
