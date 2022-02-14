
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct ath_hw {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (struct ath_hw*,int ,int) ;
 int FUNC_3 (struct ath_hw*,int ) ;
 int FUNC_4 (struct ath_hw*,int ,int) ;
 int FUNC_5 (struct ath_hw*,int ,int) ;
 int FUNC_6 (int) ;

void FUNC_7(struct ath_hw *VAR_8)
{
 u32 VAR_9, VAR_10;
 int VAR_11;
 u8 VAR_12, VAR_13;

 for (VAR_11 = 0; VAR_11 < VAR_1; VAR_11++) {
  VAR_9 = FUNC_3(VAR_8, VAR_2);
  if (VAR_9 != 0xdeadbeef)
   break;
  FUNC_6(VAR_0);
 }
 FUNC_5(VAR_8, VAR_2, (VAR_9 | FUNC_0(23)));

 for (VAR_11 = 0; VAR_11 < VAR_1; VAR_11++) {
  VAR_10 = FUNC_3(VAR_8, VAR_4);
  if (VAR_10 != 0xdeadbeef)
   break;
  FUNC_6(VAR_0);
 }
 FUNC_5(VAR_8, VAR_4, (VAR_10 | FUNC_0(27) | FUNC_0(19) | FUNC_0(18)));
 VAR_12 = FUNC_3(VAR_8, VAR_7) & 0x3;
 VAR_13 = FUNC_1(FUNC_3(VAR_8, VAR_6), VAR_5);

 FUNC_5(VAR_8, VAR_2, VAR_9);
 FUNC_5(VAR_8, VAR_4, VAR_10);

 if (VAR_13 && (VAR_12 == 2)) {
  FUNC_4(VAR_8, VAR_3, 0x1);
  FUNC_2(VAR_8, VAR_3, 0x1);
  FUNC_6(50);
 }
}
