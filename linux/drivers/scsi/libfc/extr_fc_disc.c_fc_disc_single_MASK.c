
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct fc_rport_priv {scalar_t__ disc_id; } ;
struct TYPE_2__ {int disc_mutex; } ;
struct fc_lport {TYPE_1__ disc; } ;
struct fc_disc_port {int port_id; } ;


 int VAR_0 ;
 int FUNC_0 (struct fc_lport*,struct fc_rport_priv*) ;
 struct fc_rport_priv* FUNC_1 (struct fc_lport*,int ) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct fc_lport *VAR_1, struct fc_disc_port *VAR_2)
{
 struct fc_rport_priv *VAR_3;

 FUNC_2(&VAR_1->disc.disc_mutex);

 VAR_3 = FUNC_1(VAR_1, VAR_2->port_id);
 if (!VAR_3)
  return -VAR_0;
 VAR_3->disc_id = 0;
 return FUNC_0(VAR_1, VAR_3);
}
