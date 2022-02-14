
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tcpm_port {int message_id; int negotiated_rev; int data_role; int pwr_role; } ;
struct pd_message {int * payload; int header; } ;
typedef int msg ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ,int ,int ,int) ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct pd_message*,int ,int) ;
 int FUNC_3 (struct tcpm_port*,int *) ;
 int FUNC_4 (struct tcpm_port*,int ,struct pd_message*) ;

__attribute__((used)) static int FUNC_5(struct tcpm_port *VAR_2)
{
 struct pd_message VAR_3;
 int VAR_4;
 u32 VAR_5;

 VAR_4 = FUNC_3(VAR_2, &VAR_5);
 if (VAR_4 < 0)
  return VAR_4;

 FUNC_2(&VAR_3, 0, sizeof(VAR_3));
 VAR_3.header = FUNC_0(VAR_0,
      VAR_2->pwr_role,
      VAR_2->data_role,
      VAR_2->negotiated_rev,
      VAR_2->message_id, 1);
 VAR_3.payload[0] = FUNC_1(VAR_5);

 return FUNC_4(VAR_2, VAR_1, &VAR_3);
}
