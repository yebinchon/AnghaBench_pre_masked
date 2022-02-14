
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct port100_frame {int dummy; } ;
struct port100 {TYPE_1__* cmd; } ;
struct TYPE_2__ {int code; } ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct port100_frame*) ;

__attribute__((used)) static bool FUNC_2(struct port100 *VAR_0, void *VAR_1)
{
 struct port100_frame *VAR_2 = VAR_1;

 return (FUNC_1(VAR_2) == FUNC_0(VAR_0->cmd->code));
}
