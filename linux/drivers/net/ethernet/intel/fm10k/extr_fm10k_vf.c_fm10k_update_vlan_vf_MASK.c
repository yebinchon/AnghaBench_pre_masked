
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u32 ;
struct TYPE_2__ {int (* enqueue_tx ) (struct fm10k_hw*,struct fm10k_mbx_info*,int*) ;} ;
struct fm10k_mbx_info {TYPE_1__ ops; } ;
struct fm10k_hw {struct fm10k_mbx_info mbx; } ;
typedef int s32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int*,int ,int) ;
 int FUNC_1 (int*,int ) ;
 int FUNC_2 (struct fm10k_hw*,struct fm10k_mbx_info*,int*) ;

__attribute__((used)) static s32 FUNC_3(struct fm10k_hw *VAR_4, u32 VAR_5, u8 VAR_6, bool VAR_7)
{
 struct fm10k_mbx_info *VAR_8 = &VAR_4->mbx;
 u32 VAR_9[4];


 if (VAR_6)
  return VAR_0;


 if ((VAR_5 << 16 | VAR_5) >> 28)
  return VAR_0;


 if (!VAR_7)
  VAR_5 |= VAR_3;


 FUNC_1(VAR_9, VAR_2);
 FUNC_0(VAR_9, VAR_1, VAR_5);


 return VAR_8->ops.enqueue_tx(VAR_4, VAR_8, VAR_9);
}
