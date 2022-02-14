
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ath_hw {int dummy; } ;
struct ath_common {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct ath_hw*,int) ;
 int FUNC_1 (struct ath_hw*,int,int) ;
 int FUNC_2 (struct ath_hw*) ;
 struct ath_common* FUNC_3 (struct ath_hw*) ;
 int FUNC_4 (struct ath_common*,int ,char*,int,int) ;
 int FUNC_5 (int) ;

__attribute__((used)) static int FUNC_6(struct ath_hw *VAR_8, u32 VAR_9,
     u32 VAR_10, int VAR_11)
{
 struct ath_common *VAR_12 = FUNC_3(VAR_8);

 while (VAR_11) {
  if (!(FUNC_0(VAR_8, VAR_9) & VAR_10)) {
   FUNC_5(10);
   VAR_11 -= 10;

   if (VAR_11 < 0)
    break;
   else
    continue;
  }
  FUNC_1(VAR_8, VAR_9, VAR_10);

  if (VAR_9 != VAR_3)
   break;

  if (VAR_10 & VAR_4)
   FUNC_2(VAR_8);

  if (VAR_10 & (VAR_5 |
        VAR_6))
   FUNC_1(VAR_8, VAR_0,
      VAR_1);

  FUNC_1(VAR_8, VAR_0, VAR_2);
  break;
 }

 if (VAR_11 <= 0) {
  FUNC_4(VAR_12, VAR_7,
   "MCI Wait for Reg 0x%08x = 0x%08x timeout\n",
   VAR_9, VAR_10);
  FUNC_4(VAR_12, VAR_7,
   "MCI INT_RAW = 0x%08x, RX_MSG_RAW = 0x%08x\n",
   FUNC_0(VAR_8, VAR_0),
   FUNC_0(VAR_8, VAR_3));
  VAR_11 = 0;
 }

 return VAR_11;
}
