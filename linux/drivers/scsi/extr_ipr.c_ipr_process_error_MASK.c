
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_9__ ;
typedef struct TYPE_19__ TYPE_8__ ;
typedef struct TYPE_18__ TYPE_7__ ;
typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;
typedef struct TYPE_11__ TYPE_10__ ;


typedef scalar_t__ u32 ;
struct ipr_ioa_cfg {int work_q; int hostrcb_report_q; TYPE_10__* pdev; scalar_t__ sis64; } ;
struct TYPE_17__ {int fd_ioasc; } ;
struct TYPE_16__ {int fd_ioasc; } ;
struct TYPE_18__ {TYPE_6__ error; TYPE_5__ error64; } ;
struct TYPE_19__ {TYPE_7__ u; } ;
struct ipr_hostrcb {int queue; TYPE_8__ hcam; } ;
struct TYPE_13__ {int ioasc; } ;
struct TYPE_14__ {TYPE_2__ hdr; } ;
struct TYPE_15__ {TYPE_3__ ioasa; } ;
struct TYPE_12__ {struct ipr_hostrcb* hostrcb; } ;
struct ipr_cmnd {TYPE_9__* hrrq; int queue; TYPE_4__ s; TYPE_1__ u; struct ipr_ioa_cfg* ioa_cfg; } ;
struct TYPE_20__ {int hrrq_free_q; } ;
struct TYPE_11__ {int dev; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int *,char*,scalar_t__) ;
 struct ipr_hostrcb* FUNC_2 (struct ipr_ioa_cfg*) ;
 int FUNC_3 (struct ipr_ioa_cfg*,struct ipr_hostrcb*) ;
 int FUNC_4 (struct ipr_ioa_cfg*,int ) ;
 int FUNC_5 (struct ipr_ioa_cfg*,int ,struct ipr_hostrcb*) ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static void FUNC_9(struct ipr_cmnd *VAR_5)
{
 struct ipr_ioa_cfg *VAR_6 = VAR_5->ioa_cfg;
 struct ipr_hostrcb *VAR_7 = VAR_5->u.hostrcb;
 u32 VAR_8 = FUNC_0(VAR_5->s.ioasa.hdr.ioasc);
 u32 VAR_9;

 if (VAR_6->sis64)
  VAR_9 = FUNC_0(VAR_7->hcam.u.error64.fd_ioasc);
 else
  VAR_9 = FUNC_0(VAR_7->hcam.u.error.fd_ioasc);

 FUNC_7(&VAR_7->queue);
 FUNC_6(&VAR_5->queue, &VAR_5->hrrq->hrrq_free_q);

 if (!VAR_8) {
  FUNC_3(VAR_6, VAR_7);
  if (VAR_9 == VAR_3)
   FUNC_4(VAR_6, VAR_4);
 } else if (VAR_8 != VAR_2 &&
     VAR_8 != VAR_1) {
  FUNC_1(&VAR_6->pdev->dev,
   "Host RCB failed with IOASC: 0x%08X\n", VAR_8);
 }

 FUNC_6(&VAR_7->queue, &VAR_6->hostrcb_report_q);
 FUNC_8(&VAR_6->work_q);
 VAR_7 = FUNC_2(VAR_6);

 FUNC_5(VAR_6, VAR_0, VAR_7);
}
