
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hns_ppe_cb {int dummy; } ;
struct hnae_vf_cb {int mac_cb; } ;
struct hnae_handle {int q_num; int dport_id; int dev; int * qs; } ;
struct dsaf_device {int dummy; } ;


 int VAR_0 ;
 struct dsaf_device* FUNC_0 (int ) ;
 struct hnae_vf_cb* FUNC_1 (struct hnae_handle*) ;
 int FUNC_2 (struct dsaf_device*,int ) ;
 struct hns_ppe_cb* FUNC_3 (struct hnae_handle*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct hns_ppe_cb*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int) ;

__attribute__((used)) static int FUNC_8(struct hnae_handle *VAR_1)
{
 struct dsaf_device *VAR_2;
 struct hns_ppe_cb *VAR_3;
 struct hnae_vf_cb *VAR_4;
 int VAR_5;
 int VAR_6;

 for (VAR_6 = 0; VAR_6 < VAR_1->q_num; VAR_6++) {
  VAR_5 = FUNC_6(VAR_1->qs[VAR_6]);
  if (VAR_5)
   return VAR_5;
 }

 VAR_3 = FUNC_3(VAR_1);
 VAR_5 = FUNC_5(VAR_3);
 if (VAR_5)
  return VAR_5;

 VAR_2 = FUNC_0(VAR_1->dev);
 if (!VAR_2)
  return -VAR_0;
 VAR_5 = FUNC_2(VAR_2, VAR_1->dport_id);
 if (VAR_5)
  return VAR_5;

 VAR_4 = FUNC_1(VAR_1);
 VAR_5 = FUNC_4(VAR_4->mac_cb);
 if (VAR_5)
  return VAR_5;

 FUNC_7(10);
 return 0;
}
