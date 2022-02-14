
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ice_hw {int dummy; } ;
struct TYPE_2__ {scalar_t__ size; scalar_t__ pa; int * va; } ;
struct ice_ctl_q_ring {TYPE_1__ desc_buf; } ;


 int FUNC_0 (int ,scalar_t__,int *,scalar_t__) ;
 int FUNC_1 (struct ice_hw*) ;

__attribute__((used)) static void FUNC_2(struct ice_hw *VAR_0, struct ice_ctl_q_ring *VAR_1)
{
 FUNC_0(FUNC_1(VAR_0), VAR_1->desc_buf.size,
      VAR_1->desc_buf.va, VAR_1->desc_buf.pa);
 VAR_1->desc_buf.va = ((void*)0);
 VAR_1->desc_buf.pa = 0;
 VAR_1->desc_buf.size = 0;
}
