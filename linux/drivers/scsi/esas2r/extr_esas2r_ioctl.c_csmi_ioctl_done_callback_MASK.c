
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct atto_csmi_get_scsi_addr {int path_id; int target_id; } ;
struct atto_csmi_get_driver_info {int release_rev; int build_rev; int minor_rev; int major_rev; int name; } ;
union atto_ioctl_csmi {struct atto_csmi_get_scsi_addr scsi_addr; struct atto_csmi_get_driver_info drvr_info; } ;
struct TYPE_4__ {int csmi_status; } ;
struct TYPE_5__ {TYPE_1__ csmi; } ;
struct TYPE_6__ {TYPE_2__ ioctl_rsp; } ;
struct esas2r_request {TYPE_3__ func_rsp; int target_id; } ;
struct esas2r_adapter {int dummy; } ;
struct atto_csmi {int control_code; int status; } ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static void FUNC_2(struct esas2r_adapter *VAR_5,
         struct esas2r_request *VAR_6, void *VAR_7)
{
 struct atto_csmi *VAR_8 = (struct atto_csmi *)VAR_7;
 union atto_ioctl_csmi *VAR_9 =
  (union atto_ioctl_csmi *)VAR_4;

 switch (VAR_8->control_code) {
 case 129:
 {
  struct atto_csmi_get_driver_info *VAR_10 =
   &VAR_9->drvr_info;

  FUNC_1(VAR_10->name, VAR_3);

  VAR_10->major_rev = VAR_1;
  VAR_10->minor_rev = VAR_2;
  VAR_10->build_rev = 0;
  VAR_10->release_rev = 0;
  break;
 }

 case 128:
 {
  struct atto_csmi_get_scsi_addr *VAR_11 = &VAR_9->scsi_addr;

  if (FUNC_0(VAR_6->func_rsp.ioctl_rsp.csmi.csmi_status) ==
      VAR_0) {
   VAR_11->target_id = VAR_6->target_id;
   VAR_11->path_id = 0;
  }

  break;
 }
 }

 VAR_8->status = FUNC_0(VAR_6->func_rsp.ioctl_rsp.csmi.csmi_status);
}
