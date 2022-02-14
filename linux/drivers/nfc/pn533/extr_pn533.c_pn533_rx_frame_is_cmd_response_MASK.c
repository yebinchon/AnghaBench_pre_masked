
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct pn533 {TYPE_2__* cmd; TYPE_1__* ops; } ;
struct TYPE_4__ {int code; } ;
struct TYPE_3__ {scalar_t__ (* get_cmd_code ) (void*) ;} ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (void*) ;

bool FUNC_2(struct pn533 *VAR_0, void *VAR_1)
{
 return (VAR_0->ops->get_cmd_code(VAR_1) ==
    FUNC_0(VAR_0->cmd->code));
}
