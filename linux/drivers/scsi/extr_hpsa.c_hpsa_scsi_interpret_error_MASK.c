
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct device {int dummy; } ;
struct ctlr_info {int dummy; } ;
struct ErrorInfo {int CommandStatus; int SenseLen; int ScsiStatus; int SenseInfo; } ;
struct CommandList {TYPE_2__* h; struct ErrorInfo* err_info; } ;
struct TYPE_4__ {TYPE_1__* pdev; } ;
struct TYPE_3__ {struct device dev; } ;
 int VAR_0 ;
 int FUNC_0 (int ,int,int *,int *,int *) ;
 int FUNC_1 (struct device*,char*,...) ;
 int FUNC_2 (struct ctlr_info*,char*,struct CommandList*) ;

__attribute__((used)) static void FUNC_3(struct ctlr_info *VAR_1,
   struct CommandList *VAR_2)
{
 const struct ErrorInfo *VAR_3 = VAR_2->err_info;
 struct device *VAR_4 = &VAR_2->h->pdev->dev;
 u8 VAR_5, VAR_6, VAR_7;
 int VAR_8;

 switch (VAR_3->CommandStatus) {
 case 131:
  if (VAR_3->SenseLen > sizeof(VAR_3->SenseInfo))
   VAR_8 = sizeof(VAR_3->SenseInfo);
  else
   VAR_8 = VAR_3->SenseLen;
  FUNC_0(VAR_3->SenseInfo, VAR_8,
     &VAR_5, &VAR_6, &VAR_7);
  FUNC_2(VAR_1, "SCSI status", VAR_2);
  if (VAR_3->ScsiStatus == VAR_0)
   FUNC_1(VAR_4, "SCSI Status = 02, Sense key = 0x%02x, ASC = 0x%02x, ASCQ = 0x%02x\n",
    VAR_5, VAR_6, VAR_7);
  else
   FUNC_1(VAR_4, "SCSI Status = 0x%02x\n", VAR_3->ScsiStatus);
  if (VAR_3->ScsiStatus == 0)
   FUNC_1(VAR_4, "SCSI status is abnormally zero.  "
   "(probably indicates selection timeout "
   "reported incorrectly due to a known "
   "firmware bug, circa July, 2001.)\n");
  break;
 case 135:
  break;
 case 136:
  FUNC_2(VAR_1, "overrun condition", VAR_2);
  break;
 case 133: {



  FUNC_2(VAR_1, "invalid command", VAR_2);
  FUNC_1(VAR_4, "probably means device no longer present\n");
  }
  break;
 case 132:
  FUNC_2(VAR_1, "protocol error", VAR_2);
  break;
 case 134:
  FUNC_2(VAR_1, "hardware error", VAR_2);
  break;
 case 138:
  FUNC_2(VAR_1, "connection lost", VAR_2);
  break;
 case 140:
  FUNC_2(VAR_1, "aborted", VAR_2);
  break;
 case 139:
  FUNC_2(VAR_1, "abort failed", VAR_2);
  break;
 case 128:
  FUNC_2(VAR_1, "unsolicited abort", VAR_2);
  break;
 case 130:
  FUNC_2(VAR_1, "timed out", VAR_2);
  break;
 case 129:
  FUNC_2(VAR_1, "unabortable", VAR_2);
  break;
 case 137:
  FUNC_2(VAR_1, "controller lockup detected", VAR_2);
  break;
 default:
  FUNC_2(VAR_1, "unknown status", VAR_2);
  FUNC_1(VAR_4, "Unknown command status %x\n",
    VAR_3->CommandStatus);
 }
}
