
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_2__ {scalar_t__ alt_mingainidx; scalar_t__ xatten_margin_cfg; } ;
struct ath_hw {int rxchainmask; int txchainmask; TYPE_1__ config; } ;
struct ath9k_channel {int dummy; } ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (struct ath_hw*) ;
 scalar_t__ FUNC_1 (struct ath_hw*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct ath_hw*,unsigned long,int ,int) ;
 int FUNC_4 (struct ath_hw*,int,struct ath9k_channel*) ;
 int FUNC_5 (struct ath_hw*,int,struct ath9k_channel*) ;
 scalar_t__ FUNC_6 (struct ath_hw*) ;

__attribute__((used)) static void FUNC_7(struct ath_hw *VAR_5, struct ath9k_channel *VAR_6)
{
 int VAR_7;
 u16 VAR_8;
 unsigned long VAR_9[3] = {VAR_0,
       VAR_1,
       VAR_2,
      };

 if ((FUNC_0(VAR_5)) && (VAR_5->rxchainmask == 0x2)) {
  VAR_8 = FUNC_4(VAR_5, 1, VAR_6);
  FUNC_3(VAR_5, VAR_9[0],
         VAR_3, VAR_8);

  VAR_8 = FUNC_5(VAR_5, 1, VAR_6);
  FUNC_3(VAR_5, VAR_9[0],
         VAR_4,
         VAR_8);
 }


 for (VAR_7 = 0; VAR_7 < 3; VAR_7++) {
  if (VAR_5->txchainmask & FUNC_2(VAR_7)) {
   VAR_8 = FUNC_4(VAR_5, VAR_7, VAR_6);
   FUNC_3(VAR_5, VAR_9[VAR_7],
          VAR_3, VAR_8);

   if (FUNC_1(VAR_5) &&
       (FUNC_6(VAR_5) == 0) &&
       VAR_5->config.xatten_margin_cfg)
    VAR_8 = 5;
   else
    VAR_8 = FUNC_5(VAR_5, VAR_7, VAR_6);

   if (VAR_5->config.alt_mingainidx)
    FUNC_3(VAR_5, VAR_0,
           VAR_4,
           VAR_8);

   FUNC_3(VAR_5, VAR_9[VAR_7],
          VAR_4,
          VAR_8);
  }
 }
}
