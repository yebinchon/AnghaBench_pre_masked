
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {scalar_t__ data; } ;
struct qtnf_wmac {int bus; int macid; } ;
struct qlink_resp_get_mac_info {int dummy; } ;
struct qlink_cmd {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 struct sk_buff* FUNC_3 (int ,int ,int ,int) ;
 int FUNC_4 (struct qtnf_wmac*,struct qlink_resp_get_mac_info const*) ;
 int FUNC_5 (int ,struct sk_buff*,struct sk_buff**,int,size_t*) ;
 int FUNC_6 (struct qtnf_wmac*,struct qlink_resp_get_mac_info const*,size_t) ;

int FUNC_7(struct qtnf_wmac *VAR_3)
{
 struct sk_buff *VAR_4, *VAR_5 = ((void*)0);
 const struct qlink_resp_get_mac_info *VAR_6;
 size_t VAR_7 = 0;
 int VAR_8 = 0;

 VAR_4 = FUNC_3(VAR_3->macid, VAR_2,
         VAR_1,
         sizeof(struct qlink_cmd));
 if (!VAR_4)
  return -VAR_0;

 FUNC_1(VAR_3->bus);
 VAR_8 = FUNC_5(VAR_3->bus, VAR_4, &VAR_5,
           sizeof(*VAR_6), &VAR_7);
 if (VAR_8)
  goto out;

 VAR_6 = (const struct qlink_resp_get_mac_info *)VAR_5->data;
 FUNC_4(VAR_3, VAR_6);
 VAR_8 = FUNC_6(VAR_3, VAR_6, VAR_7);

out:
 FUNC_2(VAR_3->bus);
 FUNC_0(VAR_5);

 return VAR_8;
}
