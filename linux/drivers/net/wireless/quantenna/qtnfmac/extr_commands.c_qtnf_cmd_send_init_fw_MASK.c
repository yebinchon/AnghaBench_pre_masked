
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
 int VAR_3 ;
 int FUNC_0 (struct qtnf_bus*) ;
 int FUNC_1 (struct qtnf_bus*) ;
 struct sk_buff* FUNC_2 (int ,int ,int ,int) ;
 int FUNC_3 (struct qtnf_bus*,struct sk_buff*) ;

int FUNC_4(struct qtnf_bus *VAR_4)
{
 struct sk_buff *VAR_5;
 int VAR_6 = 0;

 VAR_5 = FUNC_2(VAR_2, VAR_3,
         VAR_1,
         sizeof(struct qlink_cmd));
 if (!VAR_5)
  return -VAR_0;

 FUNC_0(VAR_4);
 VAR_6 = FUNC_3(VAR_4, VAR_5);
 if (VAR_6)
  goto out;

out:
 FUNC_1(VAR_4);

 return VAR_6;
}
