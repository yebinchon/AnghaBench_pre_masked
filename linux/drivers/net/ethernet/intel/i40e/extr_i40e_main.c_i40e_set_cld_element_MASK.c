
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct i40e_cloud_filter {scalar_t__ n_proto; scalar_t__ tenant_id; int vlan_id; int dst_ipv4; int * dst_ipv6; int src_mac; int dst_mac; } ;
struct TYPE_5__ {int data; } ;
struct TYPE_4__ {int * data; } ;
struct TYPE_6__ {TYPE_2__ v4; TYPE_1__ raw_v6; } ;
struct i40e_aqc_cloud_filters_element_data {int inner_vlan; TYPE_3__ ipaddr; int inner_mac; int outer_mac; } ;
typedef int ipa ;


 int FUNC_0 (int *) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int *,int *,int) ;
 int FUNC_6 (struct i40e_aqc_cloud_filters_element_data*,int ,int) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static inline void
FUNC_8(struct i40e_cloud_filter *VAR_3,
       struct i40e_aqc_cloud_filters_element_data *VAR_4)
{
 int VAR_5, VAR_6;
 u32 VAR_7;

 FUNC_6(VAR_4, 0, sizeof(*VAR_4));
 FUNC_4(VAR_4->outer_mac, VAR_3->dst_mac);
 FUNC_4(VAR_4->inner_mac, VAR_3->src_mac);

 if (VAR_3->n_proto != VAR_0 && VAR_3->n_proto != VAR_1)
  return;

 if (VAR_3->n_proto == VAR_1) {

  for (VAR_5 = 0, VAR_6 = 0; VAR_5 < FUNC_0(VAR_3->dst_ipv6);
       VAR_5++, VAR_6 += 2) {
   VAR_7 = FUNC_1(VAR_3->dst_ipv6[(FUNC_0(VAR_3->dst_ipv6) - 1) - VAR_5]);
   VAR_7 = FUNC_3(VAR_7);
   FUNC_5(&VAR_4->ipaddr.raw_v6.data[VAR_6], &VAR_7, sizeof(VAR_7));
  }
 } else {
  VAR_7 = FUNC_1(VAR_3->dst_ipv4);
  FUNC_5(&VAR_4->ipaddr.v4.data, &VAR_7, sizeof(VAR_7));
 }

 VAR_4->inner_vlan = FUNC_2(FUNC_7(VAR_3->vlan_id));




 if (VAR_3->tenant_id)
  return;
}
