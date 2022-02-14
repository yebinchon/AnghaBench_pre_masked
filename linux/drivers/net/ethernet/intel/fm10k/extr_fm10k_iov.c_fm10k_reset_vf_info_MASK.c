
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct fm10k_vf_info {int vf_idx; int glort; } ;
struct TYPE_3__ {int (* set_lport ) (struct fm10k_hw*,struct fm10k_vf_info*,int ,int ) ;int (* assign_default_mac_vlan ) (struct fm10k_hw*,struct fm10k_vf_info*) ;int (* reset_lport ) (struct fm10k_hw*,struct fm10k_vf_info*) ;} ;
struct TYPE_4__ {TYPE_1__ ops; } ;
struct fm10k_hw {TYPE_2__ iov; } ;
struct fm10k_intfc {struct fm10k_hw hw; } ;


 int VAR_0 ;
 int FUNC_0 (struct fm10k_intfc*,int ,int) ;
 int FUNC_1 (struct fm10k_intfc*) ;
 int FUNC_2 (struct fm10k_intfc*) ;
 int FUNC_3 (struct fm10k_hw*,struct fm10k_vf_info*) ;
 int FUNC_4 (struct fm10k_hw*,struct fm10k_vf_info*) ;
 int FUNC_5 (struct fm10k_hw*,struct fm10k_vf_info*,int ,int ) ;

__attribute__((used)) static inline void FUNC_6(struct fm10k_intfc *VAR_1,
           struct fm10k_vf_info *VAR_2)
{
 struct fm10k_hw *VAR_3 = &VAR_1->hw;


 FUNC_1(VAR_1);


 VAR_3->iov.ops.reset_lport(VAR_3, VAR_2);

 FUNC_0(VAR_1, VAR_2->glort, 0);


 VAR_3->iov.ops.assign_default_mac_vlan(VAR_3, VAR_2);


 VAR_3->iov.ops.set_lport(VAR_3, VAR_2, VAR_2->vf_idx,
         VAR_0);

 FUNC_2(VAR_1);
}
