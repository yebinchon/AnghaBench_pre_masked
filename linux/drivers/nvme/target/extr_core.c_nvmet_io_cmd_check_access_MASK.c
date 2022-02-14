
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u16 ;
struct nvmet_req {TYPE_3__* cmd; TYPE_1__* ns; } ;
struct TYPE_5__ {int opcode; } ;
struct TYPE_6__ {TYPE_2__ common; } ;
struct TYPE_4__ {int readonly; } ;


 int VAR_0 ;


 scalar_t__ FUNC_0 (int ) ;

__attribute__((used)) static inline u16 FUNC_1(struct nvmet_req *VAR_1)
{
 if (FUNC_0(VAR_1->ns->readonly)) {
  switch (VAR_1->cmd->common.opcode) {
  case 128:
  case 129:
   break;
  default:
   return VAR_0;
  }
 }

 return 0;
}
