
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ctlr_info {int dummy; } ;
struct CommandList {TYPE_1__* err_info; } ;
struct TYPE_2__ {int CommandStatus; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ctlr_info*,struct CommandList*,int,unsigned long) ;
 int FUNC_1 (struct ctlr_info*) ;
 scalar_t__ FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct ctlr_info *VAR_2, struct CommandList *VAR_3,
       int VAR_4, unsigned long VAR_5)
{
 if (FUNC_2(FUNC_1(VAR_2))) {
  VAR_3->err_info->CommandStatus = VAR_0;
  return VAR_1;
 }
 return FUNC_0(VAR_2, VAR_3, VAR_4, VAR_5);
}
