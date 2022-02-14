
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct ctlr_info {int dummy; } ;
struct bmic_sense_subsystem_info {int dummy; } ;
struct ErrorInfo {scalar_t__ CommandStatus; } ;
struct TYPE_2__ {int* CDB; } ;
struct CommandList {struct ErrorInfo* err_info; TYPE_1__ Request; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct CommandList* FUNC_0 (struct ctlr_info*) ;
 int FUNC_1 (struct ctlr_info*,struct CommandList*) ;
 int FUNC_2 (struct CommandList*,int ,struct ctlr_info*,struct bmic_sense_subsystem_info*,size_t,int ,int ,int ) ;
 int FUNC_3 (struct ctlr_info*,struct CommandList*,int ,int ) ;
 int FUNC_4 (struct ctlr_info*,struct CommandList*) ;

__attribute__((used)) static int FUNC_5(struct ctlr_info *VAR_7,
  unsigned char VAR_8[], u16 VAR_9,
  struct bmic_sense_subsystem_info *VAR_10, size_t VAR_11)
{
 int VAR_12 = VAR_3;
 struct CommandList *VAR_13;
 struct ErrorInfo *VAR_14;

 VAR_13 = FUNC_0(VAR_7);

 VAR_12 = FUNC_2(VAR_13, VAR_0, VAR_7, VAR_10, VAR_11,
  0, VAR_5, VAR_6);
 if (VAR_12)
  goto out;

 VAR_13->Request.CDB[2] = VAR_9 & 0xff;
 VAR_13->Request.CDB[9] = (VAR_9 >> 8) & 0xff;

 VAR_12 = FUNC_3(VAR_7, VAR_13, VAR_2,
   VAR_4);
 if (VAR_12)
  goto out;
 VAR_14 = VAR_13->err_info;
 if (VAR_14->CommandStatus != 0 && VAR_14->CommandStatus != VAR_1) {
  FUNC_4(VAR_7, VAR_13);
  VAR_12 = -1;
 }
out:
 FUNC_1(VAR_7, VAR_13);
 return VAR_12;
}
