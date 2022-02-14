
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ft_tport {int dummy; } ;
struct ft_sess {int dummy; } ;
struct TYPE_4__ {int port_id; } ;
struct fc_rport_priv {int prli_count; TYPE_2__ ids; TYPE_1__* local_port; } ;
struct TYPE_3__ {int * prov; } ;


 size_t VAR_0 ;
 int FUNC_0 (struct ft_sess*) ;
 int VAR_1 ;
 struct ft_sess* FUNC_1 (struct ft_tport*,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 struct ft_tport* FUNC_5 (int ,int ) ;

__attribute__((used)) static void FUNC_6(struct fc_rport_priv *VAR_2)
{
 struct ft_sess *VAR_3;
 struct ft_tport *VAR_4;

 FUNC_3(&VAR_1);
 VAR_4 = FUNC_5(VAR_2->local_port->prov[VAR_0],
       FUNC_2(&VAR_1));

 if (!VAR_4) {
  FUNC_4(&VAR_1);
  return;
 }
 VAR_3 = FUNC_1(VAR_4, VAR_2->ids.port_id);
 if (!VAR_3) {
  FUNC_4(&VAR_1);
  return;
 }
 FUNC_4(&VAR_1);
 FUNC_0(VAR_3);
 VAR_2->prli_count--;

}
