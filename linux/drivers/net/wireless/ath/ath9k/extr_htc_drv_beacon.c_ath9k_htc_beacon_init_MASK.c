
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_3__ {int sw_beacon_response_time; } ;
struct ath_hw {int imask; TYPE_1__ config; } ;
struct ath_beacon_config {int intval; int nexttbtt; } ;
struct TYPE_4__ {scalar_t__ bmisscnt; } ;
struct ath9k_htc_priv {TYPE_2__ beacon; struct ath_hw* ah; } ;
typedef int __be32 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (struct ath9k_htc_priv*) ;
 int FUNC_4 (struct ath_hw*,int ,int ) ;
 int FUNC_5 (struct ath_hw*) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static void FUNC_7(struct ath9k_htc_priv *VAR_4,
      struct ath_beacon_config *VAR_5,
      bool VAR_6)
{
 struct ath_hw *VAR_7 = VAR_4->ah;
 int VAR_8 __attribute__ ((unused));
 __be32 VAR_9 = 0;
 u8 VAR_10;

 if (VAR_5->intval >= FUNC_0(VAR_0))
  VAR_7->config.sw_beacon_response_time = VAR_0;
 else
  VAR_7->config.sw_beacon_response_time = VAR_1;

 FUNC_1(VAR_2);
 if (VAR_6)
  FUNC_5(VAR_7);
 FUNC_3(VAR_4);
 FUNC_4(VAR_7, VAR_5->nexttbtt, VAR_5->intval);
 VAR_4->beacon.bmisscnt = 0;
 VAR_9 = FUNC_6(VAR_7->imask);
 FUNC_2(VAR_3, &VAR_9);
}
