
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct csio_scsim {int dummy; } ;
struct TYPE_4__ {int sm_list; } ;
struct csio_ioreq {TYPE_2__ sm; int wr_status; int eq_idx; int drv_status; TYPE_1__* lnode; } ;
struct csio_hw {int dummy; } ;
typedef enum csio_scsi_ev { ____Placeholder_csio_scsi_ev } csio_scsi_ev ;
struct TYPE_3__ {struct csio_hw* hwp; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct csio_scsim*,int ) ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (struct csio_hw*,char*,int,struct csio_ioreq*) ;
 struct csio_scsim* FUNC_3 (struct csio_hw*) ;
 int FUNC_4 (struct csio_ioreq*,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_5 (TYPE_2__*,int ) ;
 int FUNC_6 (struct csio_hw*,int ,int) ;
 int FUNC_7 (int *) ;
 int VAR_6 ;

__attribute__((used)) static void
FUNC_8(struct csio_ioreq *VAR_7, enum csio_scsi_ev VAR_8)
{
 struct csio_hw *VAR_9 = VAR_7->lnode->hwp;
 struct csio_scsim *VAR_10 = FUNC_3(VAR_9);

 switch (VAR_8) {
 case 129:
  FUNC_1(VAR_10, VAR_6);
  FUNC_7(&VAR_7->sm.sm_list);
  FUNC_5(&VAR_7->sm, VAR_5);

  break;

 case 131:
  FUNC_4(VAR_7, VAR_1);
  if (VAR_7->drv_status == 0) {
   FUNC_6(VAR_9, VAR_7->eq_idx, 0);
   FUNC_5(&VAR_7->sm, VAR_3);
  }
  break;


 case 130:
  FUNC_4(VAR_7, VAR_2);
  if (VAR_7->drv_status == 0) {
   FUNC_6(VAR_9, VAR_7->eq_idx, 0);
   FUNC_5(&VAR_7->sm, VAR_4);
  }
  break;

 case 128:
  VAR_7->wr_status = VAR_0;
  FUNC_1(VAR_10, VAR_6);
  FUNC_5(&VAR_7->sm, VAR_5);
  break;

 default:
  FUNC_2(VAR_9, "Unhandled event:%d sent to req:%p\n", VAR_8, VAR_7);
  FUNC_0(0);
 }
}
