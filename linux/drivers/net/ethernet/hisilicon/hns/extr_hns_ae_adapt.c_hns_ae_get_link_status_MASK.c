
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct hns_mac_cb {int dummy; } ;
struct hnae_handle {int dummy; } ;


 struct hns_mac_cb* FUNC_0 (struct hnae_handle*) ;
 int FUNC_1 (struct hns_mac_cb*,int *) ;

__attribute__((used)) static int FUNC_2(struct hnae_handle *VAR_0)
{
 u32 VAR_1;
 struct hns_mac_cb *VAR_2 = FUNC_0(VAR_0);

 FUNC_1(VAR_2, &VAR_1);

 return !!VAR_1;
}
