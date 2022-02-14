
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hns_mac_cb {scalar_t__ mac_type; } ;
struct hnae_handle {int vf_id; } ;


 scalar_t__ VAR_0 ;
 struct hns_mac_cb* FUNC_0 (struct hnae_handle*) ;
 int FUNC_1 (struct hns_mac_cb*,int ) ;

__attribute__((used)) static int FUNC_2(struct hnae_handle *VAR_1)
{
 struct hns_mac_cb *VAR_2 = FUNC_0(VAR_1);

 if (VAR_2->mac_type != VAR_0)
  return 0;

 return FUNC_1(VAR_2, VAR_1->vf_id);
}
