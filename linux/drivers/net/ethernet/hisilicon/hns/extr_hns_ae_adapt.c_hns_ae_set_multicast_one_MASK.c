
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct hns_mac_cb {scalar_t__ mac_type; int mac_id; } ;
struct hnae_handle {int owner_dev; int vf_id; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct hns_mac_cb*) ;
 int FUNC_1 (int ,char*,char*,int ,int) ;
 struct hns_mac_cb* FUNC_2 (struct hnae_handle*) ;
 int FUNC_3 (struct hns_mac_cb*,int ,int *) ;
 int FUNC_4 (struct hns_mac_cb*,int ,char*,int) ;

__attribute__((used)) static int FUNC_5(struct hnae_handle *VAR_2, void *VAR_3)
{
 int VAR_4;
 char *VAR_5 = (char *)VAR_3;
 struct hns_mac_cb *VAR_6 = FUNC_2(VAR_2);
 u8 VAR_7;

 FUNC_0(VAR_6);

 if (VAR_6->mac_type != VAR_1)
  return 0;

 VAR_4 = FUNC_4(VAR_6, VAR_6->mac_id, VAR_5, 1);
 if (VAR_4) {
  FUNC_1(VAR_2->owner_dev,
   "mac add mul_mac:%pM port%d  fail, ret = %#x!\n",
   VAR_5, VAR_6->mac_id, VAR_4);
  return VAR_4;
 }

 VAR_4 = FUNC_3(VAR_6, VAR_2->vf_id, &VAR_7);
 if (VAR_4)
  return VAR_4;

 VAR_4 = FUNC_4(VAR_6, VAR_7, VAR_5, 1);
 if (VAR_4)
  FUNC_1(VAR_2->owner_dev,
   "mac add mul_mac:%pM port%d  fail, ret = %#x!\n",
   VAR_5, VAR_0, VAR_4);

 return VAR_4;
}
