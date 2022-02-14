
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int port; scalar_t__ b_update_port; } ;
struct TYPE_3__ {int port; scalar_t__ b_update_port; } ;
struct qed_tunnel_info {TYPE_2__ geneve_port; TYPE_1__ vxlan_port; } ;
struct qed_ptt {int dummy; } ;
struct qed_hwfn {int dummy; } ;


 int FUNC_0 (struct qed_hwfn*,struct qed_ptt*,int ) ;
 int FUNC_1 (struct qed_hwfn*,struct qed_ptt*,struct qed_tunnel_info*) ;
 int FUNC_2 (struct qed_hwfn*,struct qed_ptt*,int ) ;

__attribute__((used)) static void FUNC_3(struct qed_hwfn *VAR_0,
          struct qed_ptt *VAR_1,
          struct qed_tunnel_info *VAR_2)
{
 if (VAR_2->vxlan_port.b_update_port)
  FUNC_2(VAR_0, VAR_1,
     VAR_2->vxlan_port.port);

 if (VAR_2->geneve_port.b_update_port)
  FUNC_0(VAR_0, VAR_1,
      VAR_2->geneve_port.port);

 FUNC_1(VAR_0, VAR_1, VAR_2);
}
