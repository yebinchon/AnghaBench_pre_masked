
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_2__ {scalar_t__ (* ddp_setup ) (struct fc_lport*,int ,int ,int ) ;} ;
struct fc_lport {TYPE_1__ tt; scalar_t__ lro_enabled; } ;
struct fc_fcp_pkt {int req_flags; int xfer_ddp; int cmd; struct fc_lport* lp; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (struct fc_lport*,int ,int ,int ) ;

void FUNC_3(struct fc_fcp_pkt *VAR_1, u16 VAR_2)
{
 struct fc_lport *VAR_3;

 VAR_3 = VAR_1->lp;
 if ((VAR_1->req_flags & VAR_0) &&
     (VAR_3->lro_enabled) && (VAR_3->tt.ddp_setup)) {
  if (VAR_3->tt.ddp_setup(VAR_3, VAR_2, FUNC_1(VAR_1->cmd),
     FUNC_0(VAR_1->cmd)))
   VAR_1->xfer_ddp = VAR_2;
 }
}
