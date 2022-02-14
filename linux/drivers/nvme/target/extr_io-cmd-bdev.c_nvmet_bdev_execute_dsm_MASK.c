
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct nvmet_req {TYPE_2__* cmd; } ;
struct TYPE_3__ {int attributes; } ;
struct TYPE_4__ {TYPE_1__ dsm; } ;





 int FUNC_0 (int ) ;
 int FUNC_1 (struct nvmet_req*) ;
 int FUNC_2 (struct nvmet_req*,int ) ;

__attribute__((used)) static void FUNC_3(struct nvmet_req *VAR_0)
{
 switch (FUNC_0(VAR_0->cmd->dsm.attributes)) {
 case 130:
  FUNC_1(VAR_0);
  return;
 case 129:
 case 128:
 default:

  FUNC_2(VAR_0, 0);
  return;
 }
}
