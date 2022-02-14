
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct fcoe_port {struct fcoe_interface* priv; } ;
struct fcoe_interface {int dummy; } ;
struct fcoe_ctlr {int dummy; } ;
struct fc_lport {int dummy; } ;
struct fc_frame {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (struct fc_frame*) ;
 int FUNC_1 (struct fcoe_ctlr*,struct fc_lport*,struct fc_frame*) ;
 struct fcoe_ctlr* FUNC_2 (struct fcoe_interface*) ;
 struct fcoe_port* FUNC_3 (struct fc_lport*) ;

__attribute__((used)) static void FUNC_4(struct fc_lport *VAR_1,
        u32 VAR_2, struct fc_frame *VAR_3)
{
 struct fcoe_port *VAR_4 = FUNC_3(VAR_1);
 struct fcoe_interface *VAR_5 = VAR_4->priv;
 struct fcoe_ctlr *VAR_6 = FUNC_2(VAR_5);

 if (VAR_3 && FUNC_0(VAR_3) == VAR_0)
  FUNC_1(VAR_6, VAR_1, VAR_3);
}
