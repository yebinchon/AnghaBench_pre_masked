
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef scalar_t__ u16 ;
struct atl1_hw {scalar_t__ hw_addr; int * perm_mac_addr; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct atl1_hw*) ;
 scalar_t__ FUNC_1 (struct atl1_hw*,int,int*) ;
 scalar_t__ FUNC_2 (struct atl1_hw*,int,int*) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (int *,int *,int) ;
 scalar_t__ FUNC_7 (scalar_t__) ;
 int FUNC_8 (int) ;

__attribute__((used)) static int FUNC_9(struct atl1_hw *VAR_2)
{
 u32 VAR_3[2];
 u32 VAR_4, VAR_5;
 u16 VAR_6;
 u8 VAR_7[VAR_0];
 bool VAR_8;

 if (FUNC_5(VAR_2->perm_mac_addr))
  return 0;


 VAR_3[0] = VAR_3[1] = 0;

 if (!FUNC_0(VAR_2)) {
  VAR_6 = 0;
  VAR_8 = 0;

  VAR_4 = 0;
  while (1) {
   if (FUNC_1(VAR_2, VAR_4 + 0x100, &VAR_5)) {
    if (VAR_8) {
     if (VAR_6 == VAR_1)
      VAR_3[0] = VAR_5;
     else if (VAR_6 == (VAR_1 + 4))
      VAR_3[1] = VAR_5;
     VAR_8 = 0;
    } else if ((VAR_5 & 0xff) == 0x5A) {
     VAR_8 = 1;
     VAR_6 = (u16) (VAR_5 >> 16);
    } else
     break;
   } else

    break;
   VAR_4 += 4;
  }

  *(u32 *) &VAR_7[2] = FUNC_8(VAR_3[0]);
  *(u16 *) &VAR_7[0] = FUNC_7(*(u16 *) &VAR_3[1]);
  if (FUNC_5(VAR_7)) {
   FUNC_6(VAR_2->perm_mac_addr, VAR_7, VAR_0);
   return 0;
  }
 }


 VAR_3[0] = VAR_3[1] = 0;
 VAR_6 = 0;
 VAR_8 = 0;
 VAR_4 = 0;
 while (1) {
  if (FUNC_2(VAR_2, VAR_4 + 0x1f000, &VAR_5)) {
   if (VAR_8) {
    if (VAR_6 == VAR_1)
     VAR_3[0] = VAR_5;
    else if (VAR_6 == (VAR_1 + 4))
     VAR_3[1] = VAR_5;
    VAR_8 = 0;
   } else if ((VAR_5 & 0xff) == 0x5A) {
    VAR_8 = 1;
    VAR_6 = (u16) (VAR_5 >> 16);
   } else

    break;
  } else

   break;
  VAR_4 += 4;
 }

 *(u32 *) &VAR_7[2] = FUNC_8(VAR_3[0]);
 *(u16 *) &VAR_7[0] = FUNC_7(*(u16 *) &VAR_3[1]);
 if (FUNC_5(VAR_7)) {
  FUNC_6(VAR_2->perm_mac_addr, VAR_7, VAR_0);
  return 0;
 }







 VAR_3[0] = FUNC_4(VAR_2->hw_addr + VAR_1);
 VAR_3[1] = FUNC_3(VAR_2->hw_addr + (VAR_1 + 4));
 *(u32 *) &VAR_7[2] = FUNC_8(VAR_3[0]);
 *(u16 *) &VAR_7[0] = FUNC_7(*(u16 *) &VAR_3[1]);
 if (FUNC_5(VAR_7)) {
  FUNC_6(VAR_2->perm_mac_addr, VAR_7, VAR_0);
  return 0;
 }

 return 1;
}
