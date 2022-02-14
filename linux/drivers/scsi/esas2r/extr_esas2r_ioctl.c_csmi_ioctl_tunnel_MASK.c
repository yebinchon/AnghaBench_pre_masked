
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef union atto_ioctl_csmi {int dummy; } atto_ioctl_csmi ;
typedef scalar_t__ u8 ;
typedef int u32 ;
typedef int u16 ;
struct esas2r_sg_context {int length; } ;
struct esas2r_request {int comp_cb; int aux_req_cb; union atto_ioctl_csmi* aux_req_cx; TYPE_3__* vrq; } ;
struct esas2r_adapter {int flags; } ;
struct TYPE_4__ {scalar_t__ lun; int target_id; int ctrl_code; } ;
struct atto_vda_ioctl_req {TYPE_1__ csmi; int sge; } ;
struct TYPE_5__ {int flags; } ;
struct TYPE_6__ {TYPE_2__ scsi; struct atto_vda_ioctl_req ioctl; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct esas2r_adapter*,struct esas2r_request*,int ,int ) ;
 int FUNC_3 (struct esas2r_adapter*,struct esas2r_request*,struct esas2r_sg_context*) ;
 int VAR_2 ;
 int FUNC_4 (struct esas2r_sg_context*,struct esas2r_adapter*,struct esas2r_request*,int ) ;
 int FUNC_5 (struct esas2r_adapter*,struct esas2r_request*) ;
 scalar_t__ FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int ,int *) ;

__attribute__((used)) static bool FUNC_8(struct esas2r_adapter *VAR_3,
         union atto_ioctl_csmi *VAR_4,
         struct esas2r_request *VAR_5,
         struct esas2r_sg_context *VAR_6,
         u32 VAR_7,
         u16 VAR_8)
{
 struct atto_vda_ioctl_req *VAR_9 = &VAR_5->vrq->ioctl;

 if (FUNC_7(VAR_0, &VAR_3->flags))
  return 0;

 FUNC_4(VAR_6, VAR_3, VAR_5, VAR_5->vrq->ioctl.sge);
 FUNC_2(VAR_3, VAR_5, VAR_6->length, VAR_1);
 VAR_9->csmi.ctrl_code = FUNC_1(VAR_7);
 VAR_9->csmi.target_id = FUNC_0(VAR_8);
 VAR_9->csmi.lun = (u8)FUNC_6(VAR_5->vrq->scsi.flags);





 VAR_5->aux_req_cx = VAR_4;
 VAR_5->aux_req_cb = VAR_5->comp_cb;
 VAR_5->comp_cb = VAR_2;

 if (!FUNC_3(VAR_3, VAR_5, VAR_6))
  return 0;

 FUNC_5(VAR_3, VAR_5);
 return 1;
}
