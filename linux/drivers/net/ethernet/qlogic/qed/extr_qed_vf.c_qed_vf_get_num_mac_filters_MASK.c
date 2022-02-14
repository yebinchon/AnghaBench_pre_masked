
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_3__ {int num_mac_filters; } ;
struct TYPE_4__ {TYPE_1__ resc; } ;
struct qed_vf_iov {TYPE_2__ acquire_resp; } ;
struct qed_hwfn {struct qed_vf_iov* vf_iov_info; } ;



void FUNC_0(struct qed_hwfn *VAR_0, u8 *VAR_1)
{
 struct qed_vf_iov *VAR_2 = VAR_0->vf_iov_info;

 *VAR_1 = VAR_2->acquire_resp.resc.num_mac_filters;
}
