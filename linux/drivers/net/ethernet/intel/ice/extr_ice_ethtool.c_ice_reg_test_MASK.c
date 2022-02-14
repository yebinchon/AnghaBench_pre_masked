
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct ice_diag_reg_test_info TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct net_device {int dummy; } ;
struct ice_netdev_priv {TYPE_2__* vsi; } ;
struct TYPE_8__ {int num_msix_vectors; } ;
struct TYPE_9__ {TYPE_3__ common_cap; } ;
struct ice_hw {TYPE_4__ func_caps; } ;
struct ice_diag_reg_test_info {int address; int mask; int elem_num; int elem_size; } ;
struct TYPE_7__ {TYPE_1__* port_info; } ;
struct TYPE_6__ {struct ice_hw* hw; } ;


 int FUNC_0 (TYPE_5__*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_1 (int,int) ;
 scalar_t__ FUNC_2 (struct ice_hw*,int,int) ;
 int FUNC_3 (struct net_device*,char*) ;
 struct ice_netdev_priv* FUNC_4 (struct net_device*) ;

__attribute__((used)) static u64 FUNC_5(struct net_device *VAR_1)
{
 struct ice_netdev_priv *VAR_2 = FUNC_4(VAR_1);
 struct ice_hw *VAR_3 = VAR_2->vsi->port_info->hw;
 u32 VAR_4 = VAR_3->func_caps.common_cap.num_msix_vectors ?
  VAR_3->func_caps.common_cap.num_msix_vectors - 1 : 1;
 struct ice_diag_reg_test_info {
  u32 address;
  u32 mask;
  u32 elem_num;
  u32 elem_size;
 } VAR_5[] = {
  {FUNC_1(0, 0), 0x00000fff, VAR_4,
   FUNC_1(0, 1) - FUNC_1(0, 0)},
  {FUNC_1(1, 0), 0x00000fff, VAR_4,
   FUNC_1(1, 1) - FUNC_1(1, 0)},
  {FUNC_1(0, 0), 0x00000fff, VAR_4,
   FUNC_1(2, 1) - FUNC_1(2, 0)},
  {VAR_0, 0xffff0001, 1, 0}
 };
 int VAR_6;

 FUNC_3(VAR_1, "Register test\n");
 for (VAR_6 = 0; VAR_6 < FUNC_0(VAR_5); ++VAR_6) {
  u32 VAR_7;

  for (VAR_7 = 0; VAR_7 < VAR_5[VAR_6].elem_num; ++VAR_7) {
   u32 VAR_8 = VAR_5[VAR_6].mask;
   u32 VAR_9 = VAR_5[VAR_6].address +
    (VAR_7 * VAR_5[VAR_6].elem_size);


   if (FUNC_2(VAR_3, VAR_9, VAR_8))
    return 1;
  }
 }

 return 0;
}
