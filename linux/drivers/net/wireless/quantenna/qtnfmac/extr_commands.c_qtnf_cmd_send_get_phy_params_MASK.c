
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {scalar_t__ data; } ;
struct qtnf_wmac {int bus; int macid; } ;
struct qlink_resp_phy_params {int info; } ;
struct qlink_cmd {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 struct sk_buff* FUNC_3 (int ,int ,int ,int) ;
 int FUNC_4 (struct qtnf_wmac*,int ,size_t) ;
 int FUNC_5 (int ,struct sk_buff*,struct sk_buff**,int,size_t*) ;

int FUNC_6(struct qtnf_wmac *VAR_2)
{
 struct sk_buff *VAR_3, *VAR_4 = ((void*)0);
 struct qlink_resp_phy_params *VAR_5;
 size_t VAR_6 = 0;
 int VAR_7 = 0;

 VAR_3 = FUNC_3(VAR_2->macid, 0,
         VAR_1,
         sizeof(struct qlink_cmd));
 if (!VAR_3)
  return -VAR_0;

 FUNC_1(VAR_2->bus);
 VAR_7 = FUNC_5(VAR_2->bus, VAR_3, &VAR_4,
           sizeof(*VAR_5), &VAR_6);
 if (VAR_7)
  goto out;

 VAR_5 = (struct qlink_resp_phy_params *)VAR_4->data;
 VAR_7 = FUNC_4(VAR_2, VAR_5->info, VAR_6);

out:
 FUNC_2(VAR_2->bus);
 FUNC_0(VAR_4);

 return VAR_7;
}
