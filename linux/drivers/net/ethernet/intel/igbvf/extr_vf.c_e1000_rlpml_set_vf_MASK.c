
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct TYPE_2__ {int (* read_posted ) (struct e1000_hw*,int *,int) ;int (* write_posted ) (struct e1000_hw*,int *,int) ;} ;
struct e1000_mbx_info {TYPE_1__ ops; } ;
struct e1000_hw {struct e1000_mbx_info mbx; } ;
typedef int s32 ;


 int VAR_0 ;
 int FUNC_0 (struct e1000_hw*,int *,int) ;
 int FUNC_1 (struct e1000_hw*,int *,int) ;

void FUNC_2(struct e1000_hw *VAR_1, u16 VAR_2)
{
 struct e1000_mbx_info *VAR_3 = &VAR_1->mbx;
 u32 VAR_4[2];
 s32 VAR_5;

 VAR_4[0] = VAR_0;
 VAR_4[1] = VAR_2;

 VAR_5 = VAR_3->ops.write_posted(VAR_1, VAR_4, 2);
 if (!VAR_5)
  VAR_3->ops.read_posted(VAR_1, VAR_4, 1);
}
