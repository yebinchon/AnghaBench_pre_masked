
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {scalar_t__ data; } ;
struct qtnf_bus {int dummy; } ;
struct qlink_resp_get_hw_info {int dummy; } ;
struct qlink_cmd {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (struct qtnf_bus*) ;
 int FUNC_2 (struct qtnf_bus*) ;
 struct sk_buff* FUNC_3 (int ,int ,int ,int) ;
 int FUNC_4 (struct qtnf_bus*,struct qlink_resp_get_hw_info const*,size_t) ;
 int FUNC_5 (struct qtnf_bus*,struct sk_buff*,struct sk_buff**,int,size_t*) ;

int FUNC_6(struct qtnf_bus *VAR_4)
{
 struct sk_buff *VAR_5, *VAR_6 = ((void*)0);
 const struct qlink_resp_get_hw_info *VAR_7;
 size_t VAR_8 = 0;
 int VAR_9 = 0;

 VAR_5 = FUNC_3(VAR_2, VAR_3,
         VAR_1,
         sizeof(struct qlink_cmd));
 if (!VAR_5)
  return -VAR_0;

 FUNC_1(VAR_4);
 VAR_9 = FUNC_5(VAR_4, VAR_5, &VAR_6,
           sizeof(*VAR_7), &VAR_8);
 if (VAR_9)
  goto out;

 VAR_7 = (const struct qlink_resp_get_hw_info *)VAR_6->data;
 VAR_9 = FUNC_4(VAR_4, VAR_7, VAR_8);

out:
 FUNC_2(VAR_4);
 FUNC_0(VAR_6);

 return VAR_9;
}
