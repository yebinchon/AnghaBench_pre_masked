
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ctlr_info {int dummy; } ;
struct CommandList {TYPE_1__* err_info; } ;
struct TYPE_2__ {scalar_t__ CommandStatus; scalar_t__ ScsiStatus; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct ctlr_info*,struct CommandList*) ;

__attribute__((used)) static void FUNC_1(struct ctlr_info *VAR_2,
 struct CommandList *VAR_3)
{
 if (VAR_3->err_info->CommandStatus == VAR_0 &&
   VAR_3->err_info->ScsiStatus != VAR_1)
  (void) FUNC_0(VAR_2, VAR_3);
}
