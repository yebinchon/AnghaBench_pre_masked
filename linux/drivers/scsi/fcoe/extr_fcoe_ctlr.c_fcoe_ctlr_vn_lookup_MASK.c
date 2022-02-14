
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct fcoe_rport {int enode_mac; } ;
struct fcoe_ctlr {struct fc_lport* lp; } ;
struct fc_rport_priv {int kref; } ;
struct fc_lport {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct fc_rport_priv* FUNC_0 (struct fc_lport*,int ) ;
 struct fcoe_rport* FUNC_1 (struct fc_rport_priv*) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int ,int ) ;

__attribute__((used)) static int FUNC_4(struct fcoe_ctlr *VAR_2, u32 VAR_3, u8 *VAR_4)
{
 struct fc_lport *VAR_5 = VAR_2->lp;
 struct fc_rport_priv *VAR_6;
 struct fcoe_rport *VAR_7;
 int VAR_8 = -1;

 VAR_6 = FUNC_0(VAR_5, VAR_3);
 if (VAR_6) {
  VAR_7 = FUNC_1(VAR_6);
  FUNC_3(VAR_4, VAR_7->enode_mac, VAR_0);
  VAR_8 = 0;
  FUNC_2(&VAR_6->kref, VAR_1);
 }
 return VAR_8;
}
