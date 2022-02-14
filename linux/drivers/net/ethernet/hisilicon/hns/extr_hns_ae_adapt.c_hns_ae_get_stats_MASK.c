
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct hns_ppe_cb {int dummy; } ;
struct hns_mac_cb {scalar_t__ mac_type; } ;
struct hnae_vf_cb {int port_index; int dsaf_dev; } ;
struct hnae_handle {int q_num; int * qs; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 struct hnae_vf_cb* FUNC_0 (struct hnae_handle*) ;
 int FUNC_1 (int ,int *,int ) ;
 struct hns_mac_cb* FUNC_2 (struct hnae_handle*) ;
 struct hns_ppe_cb* FUNC_3 (struct hnae_handle*) ;
 int FUNC_4 (struct hns_mac_cb*,int) ;
 int FUNC_5 (struct hns_mac_cb*,int *) ;
 int FUNC_6 (int) ;
 int FUNC_7 (struct hns_ppe_cb*,int *) ;
 int FUNC_8 (int) ;
 int FUNC_9 (int ,int *) ;
 int FUNC_10 (char*) ;

__attribute__((used)) static void FUNC_11(struct hnae_handle *VAR_2, u64 *VAR_3)
{
 int VAR_4;
 struct hns_mac_cb *VAR_5;
 struct hns_ppe_cb *VAR_6;
 u64 *VAR_7 = VAR_3;
 struct hnae_vf_cb *VAR_8;

 if (!VAR_2 || !VAR_3) {
  FUNC_10("hns_ae_get_stats NULL handle or data pointer!\n");
  return;
 }

 VAR_8 = FUNC_0(VAR_2);
 VAR_5 = FUNC_2(VAR_2);
 VAR_6 = FUNC_3(VAR_2);

 for (VAR_4 = 0; VAR_4 < VAR_2->q_num; VAR_4++) {
  FUNC_9(VAR_2->qs[VAR_4], VAR_7);
  VAR_7 += FUNC_8((int)VAR_0);
 }

 FUNC_7(VAR_6, VAR_7);
 VAR_7 += FUNC_6((int)VAR_0);

 FUNC_5(VAR_5, VAR_7);
 VAR_7 += FUNC_4(VAR_5, (int)VAR_0);

 if (VAR_5->mac_type == VAR_1)
  FUNC_1(VAR_8->dsaf_dev, VAR_7, VAR_8->port_index);
}
