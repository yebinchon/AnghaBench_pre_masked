
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ctlr_info {int dummy; } ;
struct bmic_identify_controller {int dummy; } ;
struct ErrorInfo {scalar_t__ CommandStatus; } ;
struct CommandList {struct ErrorInfo* err_info; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct CommandList* FUNC_0 (struct ctlr_info*) ;
 int FUNC_1 (struct ctlr_info*,struct CommandList*) ;
 int FUNC_2 (struct CommandList*,int ,struct ctlr_info*,struct bmic_identify_controller*,size_t,int ,int ,int ) ;
 int FUNC_3 (struct ctlr_info*,struct CommandList*,int ,int ) ;
 int FUNC_4 (struct ctlr_info*,struct CommandList*) ;

__attribute__((used)) static int FUNC_5(struct ctlr_info *VAR_7,
 struct bmic_identify_controller *VAR_8, size_t VAR_9)
{
 int VAR_10 = VAR_3;
 struct CommandList *VAR_11;
 struct ErrorInfo *VAR_12;

 VAR_11 = FUNC_0(VAR_7);

 VAR_10 = FUNC_2(VAR_11, VAR_0, VAR_7, VAR_8, VAR_9,
  0, VAR_5, VAR_6);
 if (VAR_10)
  goto out;

 VAR_10 = FUNC_3(VAR_7, VAR_11, VAR_2,
   VAR_4);
 if (VAR_10)
  goto out;
 VAR_12 = VAR_11->err_info;
 if (VAR_12->CommandStatus != 0 && VAR_12->CommandStatus != VAR_1) {
  FUNC_4(VAR_7, VAR_11);
  VAR_10 = -1;
 }
out:
 FUNC_1(VAR_7, VAR_11);
 return VAR_10;
}
