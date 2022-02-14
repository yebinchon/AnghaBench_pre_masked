
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int lun; int target_id; } ;
struct TYPE_9__ {TYPE_3__ csmi; } ;
struct TYPE_10__ {TYPE_4__ ioctl_rsp; } ;
struct esas2r_request {int (* aux_req_cb ) (struct esas2r_adapter*,struct esas2r_request*) ;TYPE_5__ func_rsp; TYPE_2__* vrq; int target_id; } ;
struct esas2r_adapter {int dummy; } ;
struct TYPE_6__ {int flags; } ;
struct TYPE_7__ {TYPE_1__ scsi; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct esas2r_adapter*,struct esas2r_request*) ;

__attribute__((used)) static void FUNC_3(struct esas2r_adapter *VAR_0,
          struct esas2r_request *VAR_1)
{
 VAR_1->target_id = FUNC_1(VAR_1->func_rsp.ioctl_rsp.csmi.target_id);
 VAR_1->vrq->scsi.flags |= FUNC_0(VAR_1->func_rsp.ioctl_rsp.csmi.lun);


 (*VAR_1->aux_req_cb)(VAR_0, VAR_1);
}
