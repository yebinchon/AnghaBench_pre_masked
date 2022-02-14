
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ctlr_info {int dummy; } ;
struct CommandList {TYPE_1__* err_info; } ;
struct TYPE_2__ {scalar_t__ CommandStatus; scalar_t__ ScsiStatus; scalar_t__* SenseInfo; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (struct CommandList*,int ,struct ctlr_info*,int *,int ,int ,unsigned char*,int ) ;
 int FUNC_1 (struct ctlr_info*,struct CommandList*,int,int ) ;

__attribute__((used)) static int FUNC_2(struct ctlr_info *VAR_8,
    struct CommandList *VAR_9, unsigned char VAR_10[],
    int VAR_11)
{
 int VAR_12;


 (void) FUNC_0(VAR_9, VAR_5, VAR_8,
   ((void*)0), 0, 0, VAR_10, VAR_6);
 VAR_12 = FUNC_1(VAR_8, VAR_9, VAR_11, VAR_3);
 if (VAR_12)
  return VAR_12;



 if (VAR_9->err_info->CommandStatus == VAR_0)
  return 0;






 if (VAR_9->err_info->CommandStatus == VAR_1 &&
  VAR_9->err_info->ScsiStatus == VAR_4 &&
   (VAR_9->err_info->SenseInfo[2] == VAR_2 ||
    VAR_9->err_info->SenseInfo[2] == VAR_7))
  return 0;

 return 1;
}
