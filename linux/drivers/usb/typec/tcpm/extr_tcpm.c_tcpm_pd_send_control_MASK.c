
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcpm_port {int message_id; int negotiated_rev; int data_role; int pwr_role; } ;
struct pd_message {int header; } ;
typedef int msg ;
typedef enum pd_ctrl_msg_type { ____Placeholder_pd_ctrl_msg_type } pd_ctrl_msg_type ;


 int FUNC_0 (int,int ,int ,int ,int ,int ) ;
 int VAR_0 ;
 int FUNC_1 (struct pd_message*,int ,int) ;
 int FUNC_2 (struct tcpm_port*,int ,struct pd_message*) ;

__attribute__((used)) static int FUNC_3(struct tcpm_port *VAR_1,
    enum pd_ctrl_msg_type VAR_2)
{
 struct pd_message VAR_3;

 FUNC_1(&VAR_3, 0, sizeof(VAR_3));
 VAR_3.header = FUNC_0(VAR_2, VAR_1->pwr_role,
      VAR_1->data_role,
      VAR_1->negotiated_rev,
      VAR_1->message_id, 0);

 return FUNC_2(VAR_1, VAR_0, &VAR_3);
}
