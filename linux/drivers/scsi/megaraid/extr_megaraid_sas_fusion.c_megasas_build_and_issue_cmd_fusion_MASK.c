
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int SMID; } ;
union MEGASAS_REQUEST_DESCRIPTOR_UNION {TYPE_2__ SCSIIO; scalar_t__ Words; } ;
typedef scalar_t__ u32 ;
struct scsi_cmnd {TYPE_5__* request; } ;
struct megasas_instance {scalar_t__ ldio_threshold; scalar_t__ max_fw_cmds; TYPE_3__* pdev; int fw_outstanding; TYPE_1__* host; int ldio_outstanding; } ;
struct megasas_cmd_fusion {scalar_t__ r1_alt_dev_handle; union MEGASAS_REQUEST_DESCRIPTOR_UNION* request_desc; TYPE_4__* io_request; scalar_t__ index; } ;
struct TYPE_10__ {scalar_t__ tag; } ;
struct TYPE_9__ {int ChainOffset; } ;
struct TYPE_8__ {int dev; } ;
struct TYPE_6__ {scalar_t__ can_queue; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int *,char*,...) ;
 scalar_t__ FUNC_4 (struct megasas_instance*,struct scsi_cmnd*,struct megasas_cmd_fusion*) ;
 scalar_t__ FUNC_5 (struct scsi_cmnd*) ;
 int FUNC_6 (struct megasas_instance*,union MEGASAS_REQUEST_DESCRIPTOR_UNION*) ;
 struct megasas_cmd_fusion* FUNC_7 (struct megasas_instance*,scalar_t__) ;
 union MEGASAS_REQUEST_DESCRIPTOR_UNION* FUNC_8 (struct megasas_instance*,scalar_t__) ;
 int FUNC_9 (struct megasas_instance*,struct megasas_cmd_fusion*,struct megasas_cmd_fusion*) ;
 int FUNC_10 (struct megasas_instance*,struct megasas_cmd_fusion*) ;

__attribute__((used)) static u32
FUNC_11(struct megasas_instance *VAR_4,
       struct scsi_cmnd *VAR_5)
{
 struct megasas_cmd_fusion *VAR_6, *VAR_7 = ((void*)0);
 union MEGASAS_REQUEST_DESCRIPTOR_UNION *VAR_8;
 u32 VAR_9;

 if ((FUNC_5(VAR_5) == VAR_1) &&
  VAR_4->ldio_threshold &&
  (FUNC_1(&VAR_4->ldio_outstanding) >
  VAR_4->ldio_threshold)) {
  FUNC_0(&VAR_4->ldio_outstanding);
  return VAR_2;
 }

 if (FUNC_1(&VAR_4->fw_outstanding) >
   VAR_4->host->can_queue) {
  FUNC_0(&VAR_4->fw_outstanding);
  return VAR_3;
 }

 VAR_6 = FUNC_7(VAR_4, VAR_5->request->tag);

 if (!VAR_6) {
  FUNC_0(&VAR_4->fw_outstanding);
  return VAR_3;
 }

 VAR_9 = VAR_6->index;

 VAR_8 = FUNC_8(VAR_4, VAR_9-1);

 VAR_8->Words = 0;
 VAR_6->request_desc = VAR_8;

 if (FUNC_4(VAR_4, VAR_5, VAR_6)) {
  FUNC_10(VAR_4, VAR_6);
  FUNC_3(&VAR_4->pdev->dev, "Error building command\n");
  VAR_6->request_desc = ((void*)0);
  FUNC_0(&VAR_4->fw_outstanding);
  return VAR_3;
 }

 VAR_8 = VAR_6->request_desc;
 VAR_8->SCSIIO.SMID = FUNC_2(VAR_9);

 if (VAR_6->io_request->ChainOffset != 0 &&
     VAR_6->io_request->ChainOffset != 0xF)
  FUNC_3(&VAR_4->pdev->dev, "The chain offset value is not "
         "correct : %x\n", VAR_6->io_request->ChainOffset);
 if (VAR_6->r1_alt_dev_handle != VAR_0) {
  VAR_7 = FUNC_7(VAR_4,
    (VAR_5->request->tag + VAR_4->max_fw_cmds));
  FUNC_9(VAR_4, VAR_6, VAR_7);
 }






 FUNC_6(VAR_4, VAR_8);

 if (VAR_7)
  FUNC_6(VAR_4, VAR_7->request_desc);


 return 0;
}
