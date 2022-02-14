
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {int port_id; } ;
struct fc_rport_priv {scalar_t__ rp_state; int rp_mutex; int flags; TYPE_2__ ids; struct fc_lport* local_port; } ;
struct TYPE_3__ {int (* exch_mgr_reset ) (struct fc_lport*,int ,int ) ;} ;
struct fc_lport {TYPE_1__ tt; } ;


 int FUNC_0 (struct fc_rport_priv*,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (struct fc_rport_priv*,int ) ;
 int FUNC_2 (struct fc_rport_priv*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct fc_lport*,int ,int ) ;
 int FUNC_6 (struct fc_lport*,int ,int ) ;

int FUNC_7(struct fc_rport_priv *VAR_3)
{
 struct fc_lport *VAR_4 = VAR_3->local_port;
 u32 VAR_5 = VAR_3->ids.port_id;

 FUNC_3(&VAR_3->rp_mutex);

 FUNC_0(VAR_3, "Remove port\n");

 VAR_3->flags &= ~VAR_0;
 if (VAR_3->rp_state == VAR_2) {
  FUNC_0(VAR_3, "Port in Delete state, not removing\n");
  goto out;
 }






 VAR_4->tt.exch_mgr_reset(VAR_4, 0, VAR_5);
 VAR_4->tt.exch_mgr_reset(VAR_4, VAR_5, 0);

 FUNC_2(VAR_3);





 FUNC_1(VAR_3, VAR_1);
out:
 FUNC_4(&VAR_3->rp_mutex);
 return 0;
}
