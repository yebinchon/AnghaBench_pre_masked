
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct se_session {struct ft_sess* fabric_sess_ptr; } ;
struct ft_sess {int port_id; TYPE_1__* tport; } ;
struct TYPE_2__ {int lport; } ;


 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (struct ft_sess*) ;
 int VAR_0 ;
 int FUNC_2 (struct ft_sess*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 () ;

void FUNC_6(struct se_session *VAR_1)
{
 struct ft_sess *VAR_2 = VAR_1->fabric_sess_ptr;
 u32 VAR_3;

 FUNC_3(&VAR_0);
 VAR_3 = VAR_2->port_id;
 if (VAR_3 == -1) {
  FUNC_4(&VAR_0);
  return;
 }
 FUNC_0(VAR_2->tport->lport, "port_id %x close session\n", VAR_3);
 FUNC_2(VAR_2);
 FUNC_4(&VAR_0);
 FUNC_1(VAR_2);

 FUNC_5();
}
