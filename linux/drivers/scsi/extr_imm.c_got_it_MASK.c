
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_11__ {int waiting; TYPE_4__* cur_cmd; TYPE_2__* dev; int base; } ;
typedef TYPE_5__ imm_struct ;
struct TYPE_9__ {int phase; } ;
struct TYPE_10__ {TYPE_3__ SCp; } ;
struct TYPE_8__ {TYPE_1__* port; } ;
struct TYPE_7__ {int base; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(imm_struct *VAR_0)
{
 VAR_0->base = VAR_0->dev->port->base;
 if (VAR_0->cur_cmd)
  VAR_0->cur_cmd->SCp.phase = 1;
 else
  FUNC_0(VAR_0->waiting);
}
