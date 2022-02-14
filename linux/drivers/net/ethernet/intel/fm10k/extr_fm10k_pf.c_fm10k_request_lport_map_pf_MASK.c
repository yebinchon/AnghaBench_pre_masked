
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int (* enqueue_tx ) (struct fm10k_hw*,struct fm10k_mbx_info*,int *) ;} ;
struct fm10k_mbx_info {TYPE_1__ ops; } ;
struct fm10k_hw {struct fm10k_mbx_info mbx; } ;
typedef int s32 ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (struct fm10k_hw*,struct fm10k_mbx_info*,int *) ;

__attribute__((used)) static s32 FUNC_2(struct fm10k_hw *VAR_1)
{
 struct fm10k_mbx_info *VAR_2 = &VAR_1->mbx;
 u32 VAR_3[1];


 FUNC_0(VAR_3, VAR_0);


 return VAR_2->ops.enqueue_tx(VAR_1, VAR_2, VAR_3);
}
