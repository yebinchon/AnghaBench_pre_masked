
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvme_fc_local_port {struct fcloop_lport_priv* private; } ;
struct fcloop_lport_priv {struct fcloop_lport* lport; } ;
struct fcloop_lport {int unreg_done; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void
FUNC_1(struct nvme_fc_local_port *VAR_0)
{
 struct fcloop_lport_priv *VAR_1 = VAR_0->private;
 struct fcloop_lport *VAR_2 = VAR_1->lport;


 FUNC_0(&VAR_2->unreg_done);
}
