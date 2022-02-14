
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct qed_hwfn {TYPE_3__* vf_iov_info; } ;
struct TYPE_4__ {int port_mac; } ;
struct TYPE_5__ {TYPE_1__ pfdev_info; } ;
struct TYPE_6__ {TYPE_2__ acquire_resp; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,int ) ;

void FUNC_1(struct qed_hwfn *VAR_1, u8 *VAR_2)
{
 FUNC_0(VAR_2,
        VAR_1->vf_iov_info->acquire_resp.pfdev_info.port_mac, VAR_0);
}
