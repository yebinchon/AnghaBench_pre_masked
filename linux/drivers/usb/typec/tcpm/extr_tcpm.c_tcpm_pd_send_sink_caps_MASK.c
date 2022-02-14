
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcpm_port {int nr_snk_pdo; int * snk_pdo; int message_id; int negotiated_rev; int data_role; int pwr_role; } ;
struct pd_message {int * payload; void* header; } ;
typedef int msg ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (int ,int ,int ,int ,int ,int) ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct pd_message*,int ,int) ;
 int FUNC_3 (struct tcpm_port*,int ,struct pd_message*) ;

__attribute__((used)) static int FUNC_4(struct tcpm_port *VAR_3)
{
 struct pd_message VAR_4;
 int VAR_5;

 FUNC_2(&VAR_4, 0, sizeof(VAR_4));
 if (!VAR_3->nr_snk_pdo) {

  VAR_4.header = FUNC_0(VAR_0,
       VAR_3->pwr_role,
       VAR_3->data_role,
       VAR_3->negotiated_rev,
       VAR_3->message_id, 0);
 } else {
  VAR_4.header = FUNC_0(VAR_1,
       VAR_3->pwr_role,
       VAR_3->data_role,
       VAR_3->negotiated_rev,
       VAR_3->message_id,
       VAR_3->nr_snk_pdo);
 }
 for (VAR_5 = 0; VAR_5 < VAR_3->nr_snk_pdo; VAR_5++)
  VAR_4.payload[VAR_5] = FUNC_1(VAR_3->snk_pdo[VAR_5]);

 return FUNC_3(VAR_3, VAR_2, &VAR_4);
}
