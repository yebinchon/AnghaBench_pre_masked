
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct qed_hwfn {TYPE_3__* vf_iov_info; } ;
struct TYPE_4__ {int num_rxqs; } ;
struct TYPE_5__ {TYPE_1__ resc; } ;
struct TYPE_6__ {TYPE_2__ acquire_resp; } ;



void FUNC_0(struct qed_hwfn *VAR_0, u8 *VAR_1)
{
 *VAR_1 = VAR_0->vf_iov_info->acquire_resp.resc.num_rxqs;
}
