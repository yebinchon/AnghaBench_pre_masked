
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ppe_common_cb {struct hns_ppe_cb* ppe_cb; } ;
struct hns_ppe_cb {int dummy; } ;
struct hnae_vf_cb {int port_index; TYPE_1__* dsaf_dev; } ;
struct hnae_handle {int dummy; } ;
struct TYPE_2__ {struct ppe_common_cb** ppe_common; } ;


 struct hnae_vf_cb* FUNC_0 (struct hnae_handle*) ;

__attribute__((used)) static struct hns_ppe_cb *FUNC_1(struct hnae_handle *VAR_0)
{
 int VAR_1;
 struct ppe_common_cb *VAR_2;
 struct hnae_vf_cb *VAR_3 = FUNC_0(VAR_0);

 VAR_2 = VAR_3->dsaf_dev->ppe_common[0];
 VAR_1 = VAR_3->port_index;

 return &VAR_2->ppe_cb[VAR_1];
}
