
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ath_hw {int dummy; } ;
struct ath9k_channel {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct ath_hw*) ;
 scalar_t__ FUNC_1 (struct ath9k_channel*) ;
 int FUNC_2 (struct ath_hw*,struct ath9k_channel*) ;
 scalar_t__ FUNC_3 (struct ath9k_channel*) ;
 scalar_t__ FUNC_4 (struct ath9k_channel*) ;
 int FUNC_5 (int,int ) ;

__attribute__((used)) static u32 FUNC_6(struct ath_hw *VAR_3,
      struct ath9k_channel *VAR_4)
{
 int VAR_5 = 5;
 int VAR_6 = 0x2c;
 u32 VAR_7;

 if (VAR_4 && FUNC_1(VAR_4) && !FUNC_2(VAR_3, VAR_4)) {
  if (FUNC_0(VAR_3)) {
   VAR_5 = 10;
   VAR_6 = 0x50;
  } else {
   VAR_6 = 0x28;
  }
 }

 VAR_7 = FUNC_5(VAR_5, VAR_2);
 VAR_7 |= FUNC_5(VAR_6, VAR_1);

 if (VAR_4 && FUNC_3(VAR_4))
  VAR_7 |= FUNC_5(0x1, VAR_0);
 else if (VAR_4 && FUNC_4(VAR_4))
  VAR_7 |= FUNC_5(0x2, VAR_0);

 return VAR_7;
}
