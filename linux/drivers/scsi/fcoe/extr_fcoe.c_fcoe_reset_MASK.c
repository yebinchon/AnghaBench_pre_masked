
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fcoe_port {struct fcoe_interface* priv; } ;
struct fcoe_interface {int dummy; } ;
struct fcoe_ctlr_device {scalar_t__ enabled; } ;
struct fcoe_ctlr {int lp; } ;
struct fc_lport {int dummy; } ;
struct Scsi_Host {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct fcoe_ctlr*) ;
 int FUNC_2 (struct fcoe_ctlr*) ;
 struct fcoe_ctlr_device* FUNC_3 (struct fcoe_ctlr*) ;
 int FUNC_4 (int ) ;
 struct fcoe_ctlr* FUNC_5 (struct fcoe_interface*) ;
 struct fcoe_port* FUNC_6 (struct fc_lport*) ;
 struct fc_lport* FUNC_7 (struct Scsi_Host*) ;

__attribute__((used)) static int FUNC_8(struct Scsi_Host *VAR_1)
{
 struct fc_lport *VAR_2 = FUNC_7(VAR_1);
 struct fcoe_port *VAR_3 = FUNC_6(VAR_2);
 struct fcoe_interface *VAR_4 = VAR_3->priv;
 struct fcoe_ctlr *VAR_5 = FUNC_5(VAR_4);
 struct fcoe_ctlr_device *VAR_6 = FUNC_3(VAR_5);

 FUNC_1(VAR_5);
 FUNC_0(VAR_5->lp);

 if (VAR_6->enabled != VAR_0 &&
     !FUNC_4(VAR_5->lp))
  FUNC_2(VAR_5);
 return 0;
}
