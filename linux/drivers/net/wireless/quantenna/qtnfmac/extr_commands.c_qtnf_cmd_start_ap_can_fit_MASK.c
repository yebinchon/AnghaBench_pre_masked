
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct qtnf_vif {int vifid; TYPE_2__* mac; } ;
struct qlink_tlv_hdr {int dummy; } ;
struct qlink_tlv_chandef {int dummy; } ;
struct qlink_cmd_start_ap {int dummy; } ;
struct qlink_cmd {int dummy; } ;
struct TYPE_4__ {scalar_t__ probe_resp_len; scalar_t__ assocresp_ies_len; scalar_t__ proberesp_ies_len; scalar_t__ beacon_ies_len; scalar_t__ tail_len; scalar_t__ head_len; } ;
struct cfg80211_ap_settings {TYPE_3__* acl; int chandef; TYPE_1__ beacon; scalar_t__ ssid_len; } ;
struct TYPE_6__ {int n_acl_entries; } ;
struct TYPE_5__ {int macid; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 int VAR_1 ;
 int FUNC_1 (char*,int ,int ,unsigned int) ;
 scalar_t__ FUNC_2 (TYPE_3__*,int ,int ) ;

__attribute__((used)) static bool FUNC_3(const struct qtnf_vif *VAR_2,
          const struct cfg80211_ap_settings *VAR_3)
{
 unsigned int VAR_4 = sizeof(struct qlink_cmd_start_ap);

 VAR_4 += VAR_3->ssid_len;
 VAR_4 += VAR_3->beacon.head_len;
 VAR_4 += VAR_3->beacon.tail_len;
 VAR_4 += VAR_3->beacon.beacon_ies_len;
 VAR_4 += VAR_3->beacon.proberesp_ies_len;
 VAR_4 += VAR_3->beacon.assocresp_ies_len;
 VAR_4 += VAR_3->beacon.probe_resp_len;

 if (FUNC_0(&VAR_3->chandef))
  VAR_4 += sizeof(struct qlink_tlv_chandef);

 if (VAR_3->acl)
  VAR_4 += sizeof(struct qlink_tlv_hdr) +
         FUNC_2(VAR_3->acl, VAR_1, VAR_3->acl->n_acl_entries);

 if (VAR_4 > (sizeof(struct qlink_cmd) + VAR_0)) {
  FUNC_1("VIF%u.%u: can not fit AP settings: %u\n",
         VAR_2->mac->macid, VAR_2->vifid, VAR_4);
  return 0;
 }

 return 1;
}
