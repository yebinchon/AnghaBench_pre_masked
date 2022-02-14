
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcpm_port {int wq; } ;
struct pd_rx_event {int work; int msg; struct tcpm_port* port; } ;
struct pd_message {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 struct pd_rx_event* FUNC_1 (int,int ) ;
 int FUNC_2 (int *,struct pd_message const*,int) ;
 int FUNC_3 (int ,int *) ;
 int VAR_1 ;

void FUNC_4(struct tcpm_port *VAR_2, const struct pd_message *VAR_3)
{
 struct pd_rx_event *VAR_4;

 VAR_4 = FUNC_1(sizeof(*VAR_4), VAR_0);
 if (!VAR_4)
  return;

 FUNC_0(&VAR_4->work, VAR_1);
 VAR_4->port = VAR_2;
 FUNC_2(&VAR_4->msg, VAR_3, sizeof(*VAR_3));
 FUNC_3(VAR_2->wq, &VAR_4->work);
}
