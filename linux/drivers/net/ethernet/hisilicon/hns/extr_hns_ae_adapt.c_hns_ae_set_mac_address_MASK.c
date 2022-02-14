
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct hns_mac_cb {int dummy; } ;
struct hnae_handle {int owner_dev; int vf_id; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,...) ;
 struct hns_mac_cb* FUNC_1 (struct hnae_handle*) ;
 int FUNC_2 (struct hns_mac_cb*,int ,void*) ;
 int FUNC_3 (int const*) ;

__attribute__((used)) static int FUNC_4(struct hnae_handle *VAR_1, void *VAR_2)
{
 int VAR_3;
 struct hns_mac_cb *VAR_4 = FUNC_1(VAR_1);

 if (!VAR_2 || !FUNC_3((const u8 *)VAR_2)) {
  FUNC_0(VAR_1->owner_dev, "is not valid ether addr !\n");
  return -VAR_0;
 }

 VAR_3 = FUNC_2(VAR_4, VAR_1->vf_id, VAR_2);
 if (VAR_3 != 0) {
  FUNC_0(VAR_1->owner_dev,
   "set_mac_address fail, ret=%d!\n", VAR_3);
  return VAR_3;
 }

 return 0;
}
