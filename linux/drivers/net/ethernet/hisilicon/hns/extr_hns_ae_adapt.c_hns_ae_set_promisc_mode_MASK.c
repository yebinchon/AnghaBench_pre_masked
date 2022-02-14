
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct hns_mac_cb {int dummy; } ;
struct hnae_handle {int dev; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 struct hns_mac_cb* FUNC_2 (struct hnae_handle*) ;
 int FUNC_3 (struct hns_mac_cb*,int ) ;

__attribute__((used)) static void FUNC_4(struct hnae_handle *VAR_0, u32 VAR_1)
{
 struct hns_mac_cb *VAR_2 = FUNC_2(VAR_0);

 FUNC_1(FUNC_0(VAR_0->dev), VAR_1);
 FUNC_3(VAR_2, (u8)!!VAR_1);
}
