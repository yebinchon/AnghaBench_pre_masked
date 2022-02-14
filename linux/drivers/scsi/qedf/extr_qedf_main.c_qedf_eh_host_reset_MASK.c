
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct scsi_cmnd {TYPE_1__* device; } ;
struct qedf_ctx {int dbg_ctx; int flags; int link_state; } ;
struct fc_lport {int dummy; } ;
struct TYPE_2__ {int host; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int *) ;
 struct qedf_ctx* FUNC_2 (struct fc_lport*) ;
 int FUNC_3 (struct fc_lport*) ;
 struct fc_lport* FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ,int *) ;

__attribute__((used)) static int FUNC_6(struct scsi_cmnd *VAR_4)
{
 struct fc_lport *VAR_5;
 struct qedf_ctx *VAR_6;

 VAR_5 = FUNC_4(VAR_4->device->host);
 VAR_6 = FUNC_2(VAR_5);

 if (FUNC_1(&VAR_6->link_state) == VAR_1 ||
     FUNC_5(VAR_2, &VAR_6->flags))
  return VAR_0;

 FUNC_0(&(VAR_6->dbg_ctx), "HOST RESET Issued...");

 FUNC_3(VAR_5);

 return VAR_3;
}
