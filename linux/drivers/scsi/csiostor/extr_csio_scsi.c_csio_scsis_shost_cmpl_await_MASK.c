
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct csio_ioreq {TYPE_1__* lnode; int sm; int drv_status; } ;
typedef enum csio_scsi_ev { ____Placeholder_csio_scsi_ev } csio_scsi_ev ;
struct TYPE_2__ {int hwp; } ;


 int FUNC_0 (int ) ;



 int FUNC_1 (int ,char*,int,struct csio_ioreq*) ;
 int VAR_0 ;
 int FUNC_2 (int *,int ) ;

__attribute__((used)) static void
FUNC_3(struct csio_ioreq *VAR_1, enum csio_scsi_ev VAR_2)
{
 switch (VAR_2) {
 case 130:
 case 129:
  VAR_1->drv_status = 0;
  break;
 case 128:
  FUNC_2(&VAR_1->sm, VAR_0);
  break;
 default:
  FUNC_1(VAR_1->lnode->hwp, "Unhandled event:%d sent to req:%p\n",
    VAR_2, VAR_1);
  FUNC_0(0);
 }
}
