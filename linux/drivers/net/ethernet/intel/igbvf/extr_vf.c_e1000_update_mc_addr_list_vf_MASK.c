
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct TYPE_2__ {int (* read_posted ) (struct e1000_hw*,int*,int) ;int (* write_posted ) (struct e1000_hw*,int*,int) ;} ;
struct e1000_mbx_info {TYPE_1__ ops; } ;
struct e1000_hw {struct e1000_mbx_info mbx; } ;
typedef int s32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct e1000_hw*,int *) ;
 int FUNC_1 (struct e1000_hw*,int*,int) ;
 int FUNC_2 (struct e1000_hw*,int*,int) ;

__attribute__((used)) static void FUNC_3(struct e1000_hw *VAR_4,
      u8 *VAR_5, u32 VAR_6,
      u32 VAR_7, u32 VAR_8)
{
 struct e1000_mbx_info *VAR_9 = &VAR_4->mbx;
 u32 VAR_10[VAR_0];
 u16 *VAR_11 = (u16 *)&VAR_10[1];
 u32 VAR_12;
 u32 VAR_13, VAR_14;
 s32 VAR_15;
 VAR_13 = (VAR_6 > 30) ? 30 : VAR_6;
 VAR_10[0] = VAR_1;
 VAR_10[0] |= VAR_13 << VAR_2;

 for (VAR_14 = 0; VAR_14 < VAR_13; VAR_14++) {
  VAR_12 = FUNC_0(VAR_4, VAR_5);
  VAR_11[VAR_14] = VAR_12 & 0x0FFFF;
  VAR_5 += VAR_3;
 }

 VAR_15 = VAR_9->ops.write_posted(VAR_4, VAR_10, VAR_0);
 if (!VAR_15)
  VAR_9->ops.read_posted(VAR_4, VAR_10, 1);
}
