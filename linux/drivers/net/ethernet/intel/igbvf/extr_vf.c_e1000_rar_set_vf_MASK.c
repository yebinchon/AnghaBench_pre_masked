
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct TYPE_2__ {scalar_t__ (* read_posted ) (struct e1000_hw*,int*,int) ;scalar_t__ (* write_posted ) (struct e1000_hw*,int*,int) ;} ;
struct e1000_mbx_info {TYPE_1__ ops; } ;
struct e1000_hw {struct e1000_mbx_info mbx; } ;
typedef scalar_t__ s32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct e1000_hw*) ;
 int FUNC_1 (int *,int *,int ) ;
 int FUNC_2 (int*,int ,int) ;
 scalar_t__ FUNC_3 (struct e1000_hw*,int*,int) ;
 scalar_t__ FUNC_4 (struct e1000_hw*,int*,int) ;

__attribute__((used)) static void FUNC_5(struct e1000_hw *VAR_4, u8 *VAR_5, u32 VAR_6)
{
 struct e1000_mbx_info *VAR_7 = &VAR_4->mbx;
 u32 VAR_8[3];
 u8 *VAR_9 = (u8 *)(&VAR_8[1]);
 s32 VAR_10;

 FUNC_2(VAR_8, 0, 12);
 VAR_8[0] = VAR_0;
 FUNC_1(VAR_9, VAR_5, VAR_3);
 VAR_10 = VAR_7->ops.write_posted(VAR_4, VAR_8, 3);

 if (!VAR_10)
  VAR_10 = VAR_7->ops.read_posted(VAR_4, VAR_8, 3);

 VAR_8[0] &= ~VAR_1;


 if (!VAR_10 &&
     (VAR_8[0] == (VAR_0 | VAR_2)))
  FUNC_0(VAR_4);
}
