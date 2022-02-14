
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ctlr_info {TYPE_2__* pdev; int legacy_board; } ;
struct ReportLUNdata {int extended_response_flag; } ;
struct ErrorInfo {scalar_t__ CommandStatus; } ;
struct TYPE_3__ {int* CDB; } ;
struct CommandList {struct ErrorInfo* err_info; TYPE_1__ Request; } ;
typedef int scsi3addr ;
struct TYPE_4__ {int dev; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 struct CommandList* FUNC_0 (struct ctlr_info*) ;
 int FUNC_1 (struct ctlr_info*,struct CommandList*) ;
 int FUNC_2 (int *,char*,int,int) ;
 scalar_t__ FUNC_3 (struct CommandList*,int ,struct ctlr_info*,void*,int,int ,unsigned char*,int ) ;
 int FUNC_4 (struct ctlr_info*,struct CommandList*,int ,int ) ;
 int FUNC_5 (struct ctlr_info*,struct CommandList*) ;
 int FUNC_6 (unsigned char*,int ,int) ;

__attribute__((used)) static int FUNC_7(struct ctlr_info *VAR_11, int VAR_12,
  void *VAR_13, int VAR_14,
  int VAR_15)
{
 int VAR_16 = VAR_8;
 struct CommandList *VAR_17;
 unsigned char VAR_18[8];
 struct ErrorInfo *VAR_19;

 VAR_17 = FUNC_0(VAR_11);


 FUNC_6(VAR_18, 0, sizeof(VAR_18));
 if (FUNC_3(VAR_17, VAR_12 ? VAR_6 : VAR_7, VAR_11,
  VAR_13, VAR_14, 0, VAR_18, VAR_10)) {
  VAR_16 = -VAR_2;
  goto out;
 }
 if (VAR_15)
  VAR_17->Request.CDB[1] = VAR_15;
 VAR_16 = FUNC_4(VAR_11, VAR_17, VAR_1,
   VAR_9);
 if (VAR_16)
  goto out;
 VAR_19 = VAR_17->err_info;
 if (VAR_19->CommandStatus != 0 &&
     VAR_19->CommandStatus != VAR_0) {
  FUNC_5(VAR_11, VAR_17);
  VAR_16 = -VAR_4;
 } else {
  struct ReportLUNdata *VAR_20 = VAR_13;

  if (VAR_20->extended_response_flag != VAR_15) {
   if (!VAR_11->legacy_board) {
    FUNC_2(&VAR_11->pdev->dev,
     "report luns requested format %u, got %u\n",
     VAR_15,
     VAR_20->extended_response_flag);
    VAR_16 = -VAR_3;
   } else
    VAR_16 = -VAR_5;
  }
 }
out:
 FUNC_1(VAR_11, VAR_17);
 return VAR_16;
}
