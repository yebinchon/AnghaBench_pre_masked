
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct station_info {int dummy; } ;
struct sk_buff {scalar_t__ data; } ;
struct qtnf_vif {TYPE_1__* mac; int vifid; } ;
struct qlink_tlv_hdr {int dummy; } ;
struct qlink_resp_get_sta_info {scalar_t__ info; int sta_addr; } ;
struct qlink_cmd_get_sta_info {int sta_addr; } ;
struct TYPE_2__ {int bus; int macid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (int ,int const*) ;
 int FUNC_2 (int const*,int ) ;
 int FUNC_3 (char*,int ,int ,int ,int const*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 struct sk_buff* FUNC_6 (int ,int ,int ,int) ;
 int FUNC_7 (int ,struct sk_buff*,struct sk_buff**,int,size_t*) ;
 int FUNC_8 (struct station_info*,struct qlink_tlv_hdr const*,size_t) ;

int FUNC_9(struct qtnf_vif *VAR_3, const u8 *VAR_4,
     struct station_info *VAR_5)
{
 struct sk_buff *VAR_6, *VAR_7 = ((void*)0);
 struct qlink_cmd_get_sta_info *VAR_8;
 const struct qlink_resp_get_sta_info *VAR_9;
 size_t VAR_10 = 0;
 int VAR_11 = 0;

 VAR_6 = FUNC_6(VAR_3->mac->macid, VAR_3->vifid,
         VAR_2,
         sizeof(*VAR_8));
 if (!VAR_6)
  return -VAR_1;

 FUNC_4(VAR_3->mac->bus);

 VAR_8 = (struct qlink_cmd_get_sta_info *)VAR_6->data;
 FUNC_1(VAR_8->sta_addr, VAR_4);

 VAR_11 = FUNC_7(VAR_3->mac->bus, VAR_6, &VAR_7,
           sizeof(*VAR_9), &VAR_10);
 if (VAR_11)
  goto out;

 VAR_9 = (const struct qlink_resp_get_sta_info *)VAR_7->data;

 if (!FUNC_2(VAR_4, VAR_9->sta_addr)) {
  FUNC_3("VIF%u.%u: wrong mac in reply: %pM != %pM\n",
         VAR_3->mac->macid, VAR_3->vifid, VAR_9->sta_addr, VAR_4);
  VAR_11 = -VAR_0;
  goto out;
 }

 FUNC_8(VAR_5,
    (const struct qlink_tlv_hdr *)VAR_9->info,
    VAR_10);

out:
 FUNC_5(VAR_3->mac->bus);
 FUNC_0(VAR_7);

 return VAR_11;
}
