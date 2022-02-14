
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t u16 ;
struct fm10k_vf_info {size_t sw_vid; } ;
struct fm10k_iov_data {size_t num_vfs; struct fm10k_vf_info* vf_info; } ;
struct TYPE_5__ {int (* assign_default_mac_vlan ) (struct fm10k_hw*,struct fm10k_vf_info*) ;} ;
struct TYPE_6__ {TYPE_2__ ops; } ;
struct TYPE_4__ {size_t dglort_map; } ;
struct fm10k_hw {TYPE_3__ iov; TYPE_1__ mac; } ;
struct fm10k_intfc {struct fm10k_hw hw; struct fm10k_iov_data* iov_data; } ;
typedef int s32 ;


 size_t VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct fm10k_hw*,struct fm10k_vf_info*) ;

s32 FUNC_1(struct fm10k_intfc *VAR_2, u16 VAR_3, u16 VAR_4)
{
 struct fm10k_iov_data *VAR_5 = VAR_2->iov_data;
 struct fm10k_hw *VAR_6 = &VAR_2->hw;
 struct fm10k_vf_info *VAR_7;
 u16 VAR_8 = (VAR_3 - VAR_6->mac.dglort_map) & VAR_0;


 if (!VAR_5)
  return VAR_1;


 if (VAR_8 >= VAR_5->num_vfs)
  return VAR_1;


 VAR_7 = &VAR_5->vf_info[VAR_8];
 if (VAR_7->sw_vid != VAR_4) {
  VAR_7->sw_vid = VAR_4;
  VAR_6->iov.ops.assign_default_mac_vlan(VAR_6, VAR_7);
 }

 return 0;
}
