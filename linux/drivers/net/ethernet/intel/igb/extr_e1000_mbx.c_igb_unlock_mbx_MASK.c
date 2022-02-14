
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_2__ {int (* unlock ) (struct e1000_hw*,int ) ;} ;
struct e1000_mbx_info {TYPE_1__ ops; } ;
struct e1000_hw {struct e1000_mbx_info mbx; } ;
typedef int s32 ;


 int VAR_0 ;
 int FUNC_0 (struct e1000_hw*,int ) ;

s32 FUNC_1(struct e1000_hw *VAR_1, u16 VAR_2)
{
 struct e1000_mbx_info *VAR_3 = &VAR_1->mbx;
 s32 VAR_4 = -VAR_0;

 if (VAR_3->ops.unlock)
  VAR_4 = VAR_3->ops.unlock(VAR_1, VAR_2);

 return VAR_4;
}
