
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u32 ;
typedef int u16 ;
struct TYPE_2__ {int (* enqueue_tx ) (struct fm10k_hw*,struct fm10k_mbx_info*,int*) ;} ;
struct fm10k_mbx_info {TYPE_1__ ops; } ;
struct fm10k_hw {struct fm10k_mbx_info mbx; } ;
typedef int s32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct fm10k_hw*,int) ;
 int FUNC_1 (int*,int ,int) ;
 int FUNC_2 (int*,int ) ;
 int FUNC_3 (struct fm10k_hw*,struct fm10k_mbx_info*,int*) ;

__attribute__((used)) static s32 FUNC_4(struct fm10k_hw *VAR_4, u16 VAR_5, u8 VAR_6)
{
 struct fm10k_mbx_info *VAR_7 = &VAR_4->mbx;
 u32 VAR_8[3], VAR_9;

 if (VAR_6 > VAR_3)
  return VAR_0;


 if (!FUNC_0(VAR_4, VAR_5))
  return VAR_0;





 VAR_9 = ((u32)VAR_6 << 16) | VAR_5;


 FUNC_2(VAR_8, VAR_2);
 FUNC_1(VAR_8, VAR_1, VAR_9);


 return VAR_7->ops.enqueue_tx(VAR_4, VAR_7, VAR_8);
}
