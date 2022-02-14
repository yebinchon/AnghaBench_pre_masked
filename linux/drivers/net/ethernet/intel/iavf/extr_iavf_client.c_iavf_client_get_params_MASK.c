
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct iavf_vsi {int qs_handle; TYPE_1__* back; TYPE_4__* netdev; } ;
struct TYPE_7__ {TYPE_2__* prio_qos; } ;
struct iavf_params {TYPE_3__ qos; int link_up; int mtu; } ;
struct TYPE_8__ {int mtu; } ;
struct TYPE_6__ {int qs_handle; scalar_t__ tc; } ;
struct TYPE_5__ {int link_up; } ;


 int VAR_0 ;
 int FUNC_0 (struct iavf_params*,int ,int) ;

__attribute__((used)) static
void FUNC_1(struct iavf_vsi *VAR_1, struct iavf_params *VAR_2)
{
 int VAR_3;

 FUNC_0(VAR_2, 0, sizeof(struct iavf_params));
 VAR_2->mtu = VAR_1->netdev->mtu;
 VAR_2->link_up = VAR_1->back->link_up;

 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
  VAR_2->qos.prio_qos[VAR_3].tc = 0;
  VAR_2->qos.prio_qos[VAR_3].qs_handle = VAR_1->qs_handle;
 }
}
