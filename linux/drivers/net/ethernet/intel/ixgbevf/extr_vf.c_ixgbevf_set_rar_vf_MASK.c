
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct TYPE_2__ {int addr; } ;
struct ixgbe_hw {TYPE_1__ mac; } ;
typedef int s32 ;
typedef int msgbuf ;


 int FUNC_0 (int*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (struct ixgbe_hw*,int ) ;
 int FUNC_3 (struct ixgbe_hw*,int*,int*,int ) ;
 int FUNC_4 (int*,int ,int) ;

__attribute__((used)) static s32 FUNC_5(struct ixgbe_hw *VAR_4, u32 VAR_5, u8 *VAR_6,
         u32 VAR_7)
{
 u32 VAR_8[3];
 u8 *VAR_9 = (u8 *)(&VAR_8[1]);
 s32 VAR_10;

 FUNC_4(VAR_8, 0, sizeof(VAR_8));
 VAR_8[0] = VAR_1;
 FUNC_1(VAR_9, VAR_6);

 VAR_10 = FUNC_3(VAR_4, VAR_8, VAR_8,
          FUNC_0(VAR_8));
 VAR_8[0] &= ~VAR_2;


 if (!VAR_10 &&
     (VAR_8[0] == (VAR_1 | VAR_3))) {
  FUNC_2(VAR_4, VAR_4->mac.addr);
  return VAR_0;
 }

 return VAR_10;
}
