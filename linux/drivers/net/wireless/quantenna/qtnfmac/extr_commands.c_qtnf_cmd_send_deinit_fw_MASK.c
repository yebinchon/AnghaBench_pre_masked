
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct qtnf_bus {int dummy; } ;
struct qlink_cmd {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct qtnf_bus*) ;
 int FUNC_1 (struct qtnf_bus*) ;
 struct sk_buff* FUNC_2 (int ,int ,int ,int) ;
 int FUNC_3 (struct qtnf_bus*,struct sk_buff*) ;

void FUNC_4(struct qtnf_bus *VAR_3)
{
 struct sk_buff *VAR_4;

 VAR_4 = FUNC_2(VAR_1, VAR_2,
         VAR_0,
         sizeof(struct qlink_cmd));
 if (!VAR_4)
  return;

 FUNC_0(VAR_3);
 FUNC_3(VAR_3, VAR_4);
 FUNC_1(VAR_3);
}
