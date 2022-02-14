
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {int (* enqueue_tx ) (struct fm10k_hw*,TYPE_2__*,int *) ;} ;
struct TYPE_4__ {TYPE_1__ ops; } ;
struct fm10k_vf_info {scalar_t__ glort; scalar_t__ vf_flags; TYPE_2__ mbx; } ;
struct fm10k_hw {int dummy; } ;


 scalar_t__ FUNC_0 (struct fm10k_vf_info*) ;
 int VAR_0 ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (struct fm10k_hw*,scalar_t__,int,int) ;
 int FUNC_3 (struct fm10k_hw*,TYPE_2__*,int *) ;

__attribute__((used)) static void FUNC_4(struct fm10k_hw *VAR_1,
         struct fm10k_vf_info *VAR_2)
{
 u32 VAR_3[1];


 if (FUNC_0(VAR_2)) {

  FUNC_2(VAR_1, VAR_2->glort, 1, 0);


  FUNC_1(VAR_3, VAR_0);
  VAR_2->mbx.ops.enqueue_tx(VAR_1, &VAR_2->mbx, VAR_3);
 }


 VAR_2->vf_flags = 0;
 VAR_2->glort = 0;
}
