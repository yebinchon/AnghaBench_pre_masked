
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u16 ;
struct net_device {int dummy; } ;
struct fm10k_vf_info {int pf_vid; int vsi; } ;
struct fm10k_iov_data {int num_vfs; struct fm10k_vf_info* vf_info; } ;
struct TYPE_3__ {int (* update_vlan ) (struct fm10k_hw*,int ,int ,int) ;} ;
struct TYPE_4__ {TYPE_1__ ops; } ;
struct fm10k_hw {TYPE_2__ mac; } ;
struct fm10k_intfc {struct fm10k_hw hw; struct fm10k_iov_data* iov_data; } ;
typedef scalar_t__ __be16 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct fm10k_intfc*,struct fm10k_vf_info*) ;
 scalar_t__ FUNC_1 (int ) ;
 struct fm10k_intfc* FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct fm10k_hw*,int ,int ,int) ;

int FUNC_4(struct net_device *VAR_5, int VAR_6, u16 VAR_7,
     u8 VAR_8, __be16 VAR_9)
{
 struct fm10k_intfc *VAR_10 = FUNC_2(VAR_5);
 struct fm10k_iov_data *VAR_11 = VAR_10->iov_data;
 struct fm10k_hw *VAR_12 = &VAR_10->hw;
 struct fm10k_vf_info *VAR_13;


 if (!VAR_11 || VAR_6 >= VAR_11->num_vfs)
  return -VAR_0;


 if (VAR_8 || (VAR_7 > (VAR_4 - 1)))
  return -VAR_0;


 if (VAR_9 != FUNC_1(VAR_2))
  return -VAR_1;

 VAR_13 = &VAR_11->vf_info[VAR_6];


 if (VAR_13->pf_vid == VAR_7)
  return 0;


 VAR_13->pf_vid = VAR_7;


 VAR_12->mac.ops.update_vlan(VAR_12, VAR_3, VAR_13->vsi, 0);

 FUNC_0(VAR_10, VAR_13);

 return 0;
}
