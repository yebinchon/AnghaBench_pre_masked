
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct scsi_cmnd {unsigned char* host_scribble; int cmd_len; int sc_data_direction; int * cmnd; } ;
struct hpsa_scsi_dev_t {scalar_t__ in_reset; int * scsi3addr; } ;
struct ctlr_info {TYPE_4__* pdev; } ;
struct TYPE_7__ {int CDBLen; void* type_attr_dir; int * CDB; scalar_t__ Timeout; } ;
struct TYPE_5__ {int * LunAddrBytes; } ;
struct TYPE_6__ {int tag; TYPE_1__ LUN; scalar_t__ ReplyQueue; } ;
struct CommandList {int cmdindex; struct hpsa_scsi_dev_t* device; TYPE_3__ Request; TYPE_2__ Header; struct scsi_cmnd* scsi_cmd; int cmd_type; } ;
struct TYPE_8__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (int) ;
 int VAR_1 ;
 int VAR_2 ;




 int VAR_3 ;
 void* FUNC_2 (int ,int ,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_3 (int) ;
 int FUNC_4 (int *,char*,int) ;
 int FUNC_5 (struct ctlr_info*,struct CommandList*) ;
 int FUNC_6 (struct ctlr_info*,struct CommandList*) ;
 scalar_t__ FUNC_7 (struct ctlr_info*,struct CommandList*,struct scsi_cmnd*) ;
 int FUNC_8 (int *,int *,int) ;

__attribute__((used)) static int FUNC_9(struct ctlr_info *VAR_9,
 struct CommandList *VAR_10, struct scsi_cmnd *VAR_11,
 struct hpsa_scsi_dev_t *VAR_12)
{
 VAR_11->host_scribble = (unsigned char *) VAR_10;
 VAR_10->cmd_type = VAR_1;
 VAR_10->scsi_cmd = VAR_11;
 VAR_10->Header.ReplyQueue = 0;
 FUNC_8(&VAR_10->Header.LUN.LunAddrBytes[0], &VAR_12->scsi3addr[0], 8);
 VAR_10->Header.tag = FUNC_3((VAR_10->cmdindex << VAR_2));



 VAR_10->Request.Timeout = 0;
 FUNC_1(VAR_11->cmd_len > sizeof(VAR_10->Request.CDB));
 VAR_10->Request.CDBLen = VAR_11->cmd_len;
 FUNC_8(VAR_10->Request.CDB, VAR_11->cmnd, VAR_11->cmd_len);
 switch (VAR_11->sc_data_direction) {
 case 128:
  VAR_10->Request.type_attr_dir =
   FUNC_2(VAR_4, VAR_0, VAR_8);
  break;
 case 130:
  VAR_10->Request.type_attr_dir =
   FUNC_2(VAR_4, VAR_0, VAR_6);
  break;
 case 129:
  VAR_10->Request.type_attr_dir =
   FUNC_2(VAR_4, VAR_0, VAR_5);
  break;
 case 131:





  VAR_10->Request.type_attr_dir =
   FUNC_2(VAR_4, VAR_0, VAR_7);
  break;

 default:
  FUNC_4(&VAR_9->pdev->dev, "unknown data direction: %d\n",
   VAR_11->sc_data_direction);
  FUNC_0();
  break;
 }

 if (FUNC_7(VAR_9, VAR_10, VAR_11) < 0) {
  FUNC_6(VAR_9, VAR_10);
  return VAR_3;
 }

 if (VAR_12->in_reset) {
  FUNC_6(VAR_9, VAR_10);
  return VAR_3;
 }

 VAR_10->device = VAR_12;

 FUNC_5(VAR_9, VAR_10);

 return 0;
}
