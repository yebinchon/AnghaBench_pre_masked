
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct pvscsi_ctx {TYPE_2__* cmd; } ;
struct pvscsi_adapter {int dummy; } ;
struct PVSCSICmdDescAbortCmd {int context; int target; int member_0; } ;
typedef int cmd ;
struct TYPE_4__ {TYPE_1__* device; } ;
struct TYPE_3__ {int id; } ;


 int VAR_0 ;
 int FUNC_0 (struct pvscsi_adapter const*,struct pvscsi_ctx const*) ;
 int FUNC_1 (struct pvscsi_adapter const*,int ,struct PVSCSICmdDescAbortCmd*,int) ;

__attribute__((used)) static void FUNC_2(const struct pvscsi_adapter *VAR_1,
        const struct pvscsi_ctx *VAR_2)
{
 struct PVSCSICmdDescAbortCmd VAR_3 = { 0 };

 VAR_3.target = VAR_2->cmd->device->id;
 VAR_3.context = FUNC_0(VAR_1, VAR_2);

 FUNC_1(VAR_1, VAR_0, &VAR_3, sizeof(VAR_3));
}
