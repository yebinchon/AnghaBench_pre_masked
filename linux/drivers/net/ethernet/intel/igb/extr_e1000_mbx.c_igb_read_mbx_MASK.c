
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef scalar_t__ u16 ;
struct TYPE_2__ {int (* read ) (struct e1000_hw*,int *,scalar_t__,scalar_t__,int) ;} ;
struct e1000_mbx_info {scalar_t__ size; TYPE_1__ ops; } ;
struct e1000_hw {struct e1000_mbx_info mbx; } ;
typedef int s32 ;


 int VAR_0 ;
 int FUNC_0 (struct e1000_hw*,int *,scalar_t__,scalar_t__,int) ;

s32 FUNC_1(struct e1000_hw *VAR_1, u32 *VAR_2, u16 VAR_3, u16 VAR_4,
   bool VAR_5)
{
 struct e1000_mbx_info *VAR_6 = &VAR_1->mbx;
 s32 VAR_7 = -VAR_0;


 if (VAR_3 > VAR_6->size)
  VAR_3 = VAR_6->size;

 if (VAR_6->ops.read)
  VAR_7 = VAR_6->ops.read(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5);

 return VAR_7;
}
