
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct fc_rport_libfc_priv {struct fc_lport* local_port; } ;
struct fc_rport {int port_id; struct fc_rport_libfc_priv* dd_data; } ;
struct TYPE_2__ {int (* exch_mgr_reset ) (struct fc_lport*,int ,int ) ;} ;
struct fc_lport {TYPE_1__ tt; } ;


 int FUNC_0 (struct fc_lport*,int ,int ) ;
 int FUNC_1 (struct fc_lport*,int ,int ) ;

void FUNC_2(struct fc_rport *VAR_0)
{
 struct fc_rport_libfc_priv *VAR_1 = VAR_0->dd_data;
 struct fc_lport *VAR_2 = VAR_1->local_port;

 VAR_2->tt.exch_mgr_reset(VAR_2, 0, VAR_0->port_id);
 VAR_2->tt.exch_mgr_reset(VAR_2, VAR_0->port_id, 0);
}
