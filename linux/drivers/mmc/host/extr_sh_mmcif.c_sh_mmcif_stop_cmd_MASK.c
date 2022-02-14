
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sh_mmcif_host {int wait_for; } ;
struct mmc_request {TYPE_2__* stop; TYPE_1__* cmd; } ;
struct device {int dummy; } ;
struct TYPE_4__ {int error; } ;
struct TYPE_3__ {int opcode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;


 int FUNC_0 (struct device*,char*) ;
 int FUNC_1 (struct sh_mmcif_host*,int ,int ) ;
 int FUNC_2 (struct sh_mmcif_host*) ;
 struct device* FUNC_3 (struct sh_mmcif_host*) ;

__attribute__((used)) static void FUNC_4(struct sh_mmcif_host *VAR_4,
         struct mmc_request *VAR_5)
{
 struct device *VAR_6 = FUNC_3(VAR_4);

 switch (VAR_5->cmd->opcode) {
 case 129:
  FUNC_1(VAR_4, VAR_2, VAR_0);
  break;
 case 128:
  FUNC_1(VAR_4, VAR_2, VAR_1);
  break;
 default:
  FUNC_0(VAR_6, "unsupported stop cmd\n");
  VAR_5->stop->error = FUNC_2(VAR_4);
  return;
 }

 VAR_4->wait_for = VAR_3;
}
