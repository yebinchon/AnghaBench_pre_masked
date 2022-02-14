
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct hns_ppe_cb {int dummy; } ;
struct hns_mac_cb {scalar_t__ mac_type; } ;
struct hnae_vf_cb {int port_index; } ;
struct hnae_handle {int q_num; int dev; } ;
struct dsaf_device {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct hnae_handle*) ;
 struct dsaf_device* FUNC_1 (int ) ;
 struct hnae_vf_cb* FUNC_2 (struct hnae_handle*) ;
 int FUNC_3 (int ,int *,int,struct dsaf_device*) ;
 struct hns_mac_cb* FUNC_4 (struct hnae_handle*) ;
 struct hns_ppe_cb* FUNC_5 (struct hnae_handle*) ;
 int FUNC_6 (struct hns_mac_cb*,int ) ;
 int FUNC_7 (struct hns_mac_cb*,int ,int *) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (struct hns_ppe_cb*,int ,int *) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ,int *,int) ;

__attribute__((used)) static void FUNC_12(struct hnae_handle *VAR_2,
          u32 VAR_3, u8 *VAR_4)
{
 int VAR_5;
 int VAR_6;
 struct hns_mac_cb *VAR_7;
 struct hns_ppe_cb *VAR_8;
 struct dsaf_device *VAR_9 = FUNC_1(VAR_2->dev);
 u8 *VAR_10 = VAR_4;
 struct hnae_vf_cb *VAR_11;

 FUNC_0(VAR_2);

 VAR_11 = FUNC_2(VAR_2);
 VAR_5 = VAR_11->port_index;
 VAR_7 = FUNC_4(VAR_2);
 VAR_8 = FUNC_5(VAR_2);

 for (VAR_6 = 0; VAR_6 < VAR_2->q_num; VAR_6++) {
  FUNC_11(VAR_3, VAR_10, VAR_6);
  VAR_10 += VAR_0 * FUNC_10(VAR_3);
 }

 FUNC_9(VAR_8, VAR_3, VAR_10);
 VAR_10 += VAR_0 * FUNC_8(VAR_3);

 FUNC_7(VAR_7, VAR_3, VAR_10);
 VAR_10 += VAR_0 * FUNC_6(VAR_7, VAR_3);

 if (VAR_7->mac_type == VAR_1)
  FUNC_3(VAR_3, VAR_10, VAR_5, VAR_9);
}
