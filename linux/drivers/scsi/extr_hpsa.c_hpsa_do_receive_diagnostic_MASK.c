
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ctlr_info {int dummy; } ;
struct ErrorInfo {scalar_t__ CommandStatus; } ;
struct CommandList {struct ErrorInfo* err_info; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct CommandList* FUNC_0 (struct ctlr_info*) ;
 int FUNC_1 (struct ctlr_info*,struct CommandList*) ;
 scalar_t__ FUNC_2 (struct CommandList*,int ,struct ctlr_info*,int *,size_t,int ,int *,int ) ;
 int FUNC_3 (struct ctlr_info*,struct CommandList*,int ,int ) ;
 int FUNC_4 (struct ctlr_info*,struct CommandList*) ;

__attribute__((used)) static int FUNC_5(struct ctlr_info *VAR_6, u8 *VAR_7,
     u8 VAR_8, u8 *VAR_9, size_t VAR_10)
{
 int VAR_11 = VAR_2;
 struct CommandList *VAR_12;
 struct ErrorInfo *VAR_13;

 VAR_12 = FUNC_0(VAR_6);
 if (FUNC_2(VAR_12, VAR_4, VAR_6, VAR_9, VAR_10,
   VAR_8, VAR_7, VAR_5)) {
  VAR_11 = -1;
  goto out;
 }
 VAR_11 = FUNC_3(VAR_6, VAR_12, VAR_1,
   VAR_3);
 if (VAR_11)
  goto out;
 VAR_13 = VAR_12->err_info;
 if (VAR_13->CommandStatus != 0 && VAR_13->CommandStatus != VAR_0) {
  FUNC_4(VAR_6, VAR_12);
  VAR_11 = -1;
 }
out:
 FUNC_1(VAR_6, VAR_12);
 return VAR_11;
}
