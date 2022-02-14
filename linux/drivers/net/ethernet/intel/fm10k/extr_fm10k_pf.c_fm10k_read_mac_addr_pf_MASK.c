
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u32 ;
struct TYPE_2__ {int addr; int perm_addr; } ;
struct fm10k_hw {TYPE_1__ mac; } ;
typedef int s32 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,scalar_t__*) ;
 int FUNC_2 (struct fm10k_hw*,int ) ;

__attribute__((used)) static s32 FUNC_3(struct fm10k_hw *VAR_2)
{
 u8 VAR_3[VAR_0];
 u32 VAR_4;

 VAR_4 = FUNC_2(VAR_2, FUNC_0(1));


 if ((~VAR_4) << 24)
  return VAR_1;

 VAR_3[0] = (u8)(VAR_4 >> 24);
 VAR_3[1] = (u8)(VAR_4 >> 16);
 VAR_3[2] = (u8)(VAR_4 >> 8);

 VAR_4 = FUNC_2(VAR_2, FUNC_0(0));


 if ((~VAR_4) >> 24)
  return VAR_1;

 VAR_3[3] = (u8)(VAR_4 >> 16);
 VAR_3[4] = (u8)(VAR_4 >> 8);
 VAR_3[5] = (u8)(VAR_4);

 FUNC_1(VAR_2->mac.perm_addr, VAR_3);
 FUNC_1(VAR_2->mac.addr, VAR_3);

 return 0;
}
