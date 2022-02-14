
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct vxlanhdr_gbp {int dont_learn; int policy_applied; int policy_id; } ;
struct vxlanhdr {int vx_flags; } ;
struct vxlan_metadata {int gbp; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;

__attribute__((used)) static void FUNC_1(struct vxlanhdr *VAR_4, u32 VAR_5,
    struct vxlan_metadata *VAR_6)
{
 struct vxlanhdr_gbp *VAR_7;

 if (!VAR_6->gbp)
  return;

 VAR_7 = (struct vxlanhdr_gbp *)VAR_4;
 VAR_4->vx_flags |= VAR_3;

 if (VAR_6->gbp & VAR_0)
  VAR_7->dont_learn = 1;

 if (VAR_6->gbp & VAR_2)
  VAR_7->policy_applied = 1;

 VAR_7->policy_id = FUNC_0(VAR_6->gbp & VAR_1);
}
