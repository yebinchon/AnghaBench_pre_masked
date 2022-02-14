
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tcpm_port {int vconn_role; int typec_port; TYPE_1__* tcpc; } ;
struct TYPE_2__ {int (* set_vconn ) (TYPE_1__*,int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,int) ;
 int FUNC_1 (struct tcpm_port*,char*,int) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static int FUNC_3(struct tcpm_port *VAR_2, bool VAR_3)
{
 int VAR_4;

 FUNC_1(VAR_2, "vconn:=%d", VAR_3);

 VAR_4 = VAR_2->tcpc->set_vconn(VAR_2->tcpc, VAR_3);
 if (!VAR_4) {
  VAR_2->vconn_role = VAR_3 ? VAR_1 : VAR_0;
  FUNC_2(VAR_2->typec_port, VAR_2->vconn_role);
 }

 return VAR_4;
}
