
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hns_mac_cb {scalar_t__ mac_type; } ;
struct hnae_handle {int vf_id; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 struct hns_mac_cb* FUNC_0 (struct hnae_handle*) ;
 int FUNC_1 (struct hns_mac_cb*,int ,unsigned char const*) ;

__attribute__((used)) static int FUNC_2(struct hnae_handle *VAR_2,
     const unsigned char *VAR_3)
{
 struct hns_mac_cb *VAR_4 = FUNC_0(VAR_2);

 if (VAR_4->mac_type != VAR_1)
  return -VAR_0;

 return FUNC_1(VAR_4, VAR_2->vf_id, VAR_3);
}
