
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int (* submit_command ) (struct ctlr_info*,struct CommandList*) ;} ;
struct ctlr_info {int* reply_map; TYPE_2__ access; scalar_t__ vaddr; int commands_outstanding; } ;
struct CommandList {int cmd_type; int busaddr; TYPE_1__* device; } ;
struct TYPE_3__ {int commands_outstanding; } ;




 scalar_t__ VAR_0 ;

 scalar_t__ VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct ctlr_info*,struct CommandList*) ;
 size_t FUNC_2 () ;
 int FUNC_3 (struct ctlr_info*,struct CommandList*,int) ;
 int FUNC_4 (struct ctlr_info*,struct CommandList*,int) ;
 int FUNC_5 (struct ctlr_info*,struct CommandList*,int) ;
 int FUNC_6 (struct ctlr_info*,struct CommandList*,int) ;
 int FUNC_7 (struct ctlr_info*,struct CommandList*) ;
 int FUNC_8 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_9(struct ctlr_info *VAR_2,
 struct CommandList *VAR_3, int VAR_4)
{
 FUNC_1(VAR_2, VAR_3);
 FUNC_0(&VAR_2->commands_outstanding);
 if (VAR_3->device)
  FUNC_0(&VAR_3->device->commands_outstanding);

 VAR_4 = VAR_2->reply_map[FUNC_2()];
 switch (VAR_3->cmd_type) {
 case 130:
  FUNC_3(VAR_2, VAR_3, VAR_4);
  FUNC_8(VAR_3->busaddr, VAR_2->vaddr + VAR_1);
  break;
 case 129:
  FUNC_4(VAR_2, VAR_3, VAR_4);
  FUNC_8(VAR_3->busaddr, VAR_2->vaddr + VAR_0);
  break;
 case 128:
  FUNC_5(VAR_2, VAR_3, VAR_4);
  FUNC_8(VAR_3->busaddr, VAR_2->vaddr + VAR_0);
  break;
 default:
  FUNC_6(VAR_2, VAR_3, VAR_4);
  VAR_2->access.submit_command(VAR_2, VAR_3);
 }
}
