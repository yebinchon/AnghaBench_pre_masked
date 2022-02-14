
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wiphy_wowlan_support {int flags; void* pattern_min_len; void* pattern_max_len; void* n_patterns; } ;
struct qtnf_mac_info {struct wiphy_wowlan_support* wowlan; } ;
struct qtnf_wmac {int macid; struct qtnf_mac_info macinfo; } ;
struct qlink_wowlan_support {int pattern_min_len; int pattern_max_len; int n_patterns; } ;
struct qlink_wowlan_capab_data {int version; scalar_t__ data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct wiphy_wowlan_support*) ;
 struct wiphy_wowlan_support* FUNC_1 (int,int ) ;
 int FUNC_2 (int ) ;
 void* FUNC_3 (int ) ;
 int FUNC_4 (char*,int ,int) ;

__attribute__((used)) static void
FUNC_5(struct qtnf_wmac *VAR_3,
         const struct qlink_wowlan_capab_data *VAR_4)
{
 struct qtnf_mac_info *VAR_5 = &VAR_3->macinfo;
 const struct qlink_wowlan_support *VAR_6;
 struct wiphy_wowlan_support *VAR_7;

 VAR_7 = FUNC_1(sizeof(*VAR_7), VAR_0);
 if (!VAR_7)
  return;

 switch (FUNC_2(VAR_4->version)) {
 case 0x1:
  VAR_6 = (struct qlink_wowlan_support *)VAR_4->data;

  VAR_7->flags = VAR_2 | VAR_1;
  VAR_7->n_patterns = FUNC_3(VAR_6->n_patterns);
  VAR_7->pattern_max_len = FUNC_3(VAR_6->pattern_max_len);
  VAR_7->pattern_min_len = FUNC_3(VAR_6->pattern_min_len);

  VAR_5->wowlan = VAR_7;
  break;
 default:
  FUNC_4("MAC%u: unsupported WoWLAN version 0x%x\n",
   VAR_3->macid, FUNC_2(VAR_4->version));
  FUNC_0(VAR_7);
  break;
 }
}
