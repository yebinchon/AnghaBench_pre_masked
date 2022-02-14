
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct timer_list {int dummy; } ;
struct tifm_sd {TYPE_3__* dev; int cmd_flags; TYPE_2__* req; } ;
struct TYPE_6__ {int dev; } ;
struct TYPE_5__ {TYPE_1__* cmd; } ;
struct TYPE_4__ {int opcode; } ;


 int FUNC_0 (int *) ;
 struct tifm_sd* FUNC_1 (int ,struct timer_list*,int ) ;
 struct tifm_sd* VAR_0 ;
 int FUNC_2 (char*,int ,int ,int ) ;
 int FUNC_3 (TYPE_3__*) ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_4(struct timer_list *VAR_2)
{
 struct tifm_sd *VAR_3 = FUNC_1(VAR_3, VAR_2, VAR_1);

 FUNC_2("%s : card failed to respond for a long period of time "
        "(%x, %x)\n",
        FUNC_0(&VAR_3->dev->dev), VAR_3->req->cmd->opcode, VAR_3->cmd_flags);

 FUNC_3(VAR_3->dev);
}
