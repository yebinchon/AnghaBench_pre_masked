
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct TYPE_2__ {int (* enqueue_tx ) (struct fm10k_hw*,struct fm10k_mbx_info*,int*) ;} ;
struct fm10k_mbx_info {TYPE_1__ ops; } ;
struct fm10k_hw {struct fm10k_mbx_info mbx; } ;
typedef int s32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct fm10k_hw*,int) ;
 int FUNC_1 (int*,int ,int) ;
 int FUNC_2 (int*,int ) ;
 int FUNC_3 (struct fm10k_hw*,int,int ) ;
 int FUNC_4 (struct fm10k_hw*,struct fm10k_mbx_info*,int*) ;

__attribute__((used)) static s32 FUNC_5(struct fm10k_hw *VAR_5, u16 VAR_6,
           u16 VAR_7, bool VAR_8)
{
 struct fm10k_mbx_info *VAR_9 = &VAR_5->mbx;
 u32 VAR_10[3], VAR_11;


 if (!VAR_7)
  return 0;


 if (!FUNC_0(VAR_5, VAR_6))
  return VAR_0;


 if (!VAR_8)
  FUNC_3(VAR_5, VAR_6, VAR_4);


 VAR_11 = ((u32)VAR_7 << 16) | VAR_6;


 FUNC_2(VAR_10, VAR_8 ? VAR_2 :
      VAR_3);
 FUNC_1(VAR_10, VAR_1, VAR_11);


 return VAR_9->ops.enqueue_tx(VAR_5, VAR_9, VAR_10);
}
