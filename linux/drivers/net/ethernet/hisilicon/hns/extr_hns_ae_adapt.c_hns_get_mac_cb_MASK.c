
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hns_mac_cb {int dummy; } ;
struct hnae_vf_cb {struct hns_mac_cb* mac_cb; } ;
struct hnae_handle {int dummy; } ;


 struct hnae_vf_cb* FUNC_0 (struct hnae_handle*) ;

__attribute__((used)) static struct hns_mac_cb *FUNC_1(struct hnae_handle *VAR_0)
{
 struct hnae_vf_cb *VAR_1 = FUNC_0(VAR_0);

 return VAR_1->mac_cb;
}
