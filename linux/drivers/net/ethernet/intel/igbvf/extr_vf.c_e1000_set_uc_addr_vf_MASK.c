
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
typedef int msgbuf ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,int *,int ) ;
 int FUNC_1 (int*,int ,int) ;
 scalar_t__ FUNC_2 (struct e1000_hw*,int*,int) ;
 scalar_t__ FUNC_3 (struct e1000_hw*,int*,int) ;

__attribute__((used)) static s32 FUNC_4(struct e1000_hw *VAR_5, u32 VAR_6, u8 *VAR_7)
{
 struct e1000_mbx_info *VAR_8 = &VAR_5->mbx;
 u32 VAR_9[3], VAR_10;
 u8 *VAR_11 = (u8 *)(&VAR_9[1]);
 s32 VAR_12;

 FUNC_1(VAR_9, 0, sizeof(VAR_9));
 VAR_9[0] |= VAR_6;
 VAR_9[0] |= VAR_0;
 VAR_10 = VAR_9[0];

 if (VAR_7)
  FUNC_0(VAR_11, VAR_7, VAR_4);

 VAR_12 = VAR_8->ops.write_posted(VAR_5, VAR_9, 3);

 if (!VAR_12)
  VAR_12 = VAR_8->ops.read_posted(VAR_5, VAR_9, 3);

 VAR_9[0] &= ~VAR_1;

 if (!VAR_12) {
  VAR_9[0] &= ~VAR_1;

  if (VAR_9[0] == (VAR_10 | VAR_2))
   return -VAR_3;
 }

 return VAR_12;
}
