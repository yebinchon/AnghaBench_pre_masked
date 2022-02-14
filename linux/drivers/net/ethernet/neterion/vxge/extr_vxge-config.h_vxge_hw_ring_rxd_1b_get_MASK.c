
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct vxge_hw_ring_rxd_1 {int control_1; } ;
struct __vxge_hw_ring {int dummy; } ;


 scalar_t__ FUNC_0 (int ) ;

__attribute__((used)) static inline
void FUNC_1(
 struct __vxge_hw_ring *VAR_0,
 void *VAR_1,
 u32 *VAR_2)
{
 struct vxge_hw_ring_rxd_1 *VAR_3 = (struct vxge_hw_ring_rxd_1 *)VAR_1;

 *VAR_2 =
  (u32)FUNC_0(VAR_3->control_1);
}
