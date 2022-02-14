
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct TYPE_2__ {int (* read_posted ) (struct e1000_hw*,int*,int) ;int (* write_posted ) (struct e1000_hw*,int*,int) ;} ;
struct e1000_mbx_info {TYPE_1__ ops; } ;
struct e1000_hw {struct e1000_mbx_info mbx; } ;
typedef int s32 ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct e1000_hw*,int*,int) ;
 int FUNC_2 (struct e1000_hw*,int*,int) ;

__attribute__((used)) static s32 FUNC_3(struct e1000_hw *VAR_5, u16 VAR_6, bool VAR_7)
{
 struct e1000_mbx_info *VAR_8 = &VAR_5->mbx;
 u32 VAR_9[2];
 s32 VAR_10;

 VAR_9[0] = VAR_1;
 VAR_9[1] = VAR_6;

 if (VAR_7)
  VAR_9[0] |= FUNC_0(VAR_2);

 VAR_8->ops.write_posted(VAR_5, VAR_9, 2);

 VAR_10 = VAR_8->ops.read_posted(VAR_5, VAR_9, 2);

 VAR_9[0] &= ~VAR_3;


 if (!VAR_10 && (VAR_9[0] == (VAR_1 | VAR_4)))
  VAR_10 = -VAR_0;

 return VAR_10;
}
