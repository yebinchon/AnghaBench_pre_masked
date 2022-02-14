
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ g_state; } ;
struct TYPE_3__ {scalar_t__ txp_ofdm; } ;
struct ath5k_hw {TYPE_2__ ah_gain; TYPE_1__ ah_txpower; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (scalar_t__,int ) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (struct ath5k_hw*,int,int ) ;

__attribute__((used)) static void
FUNC_2(struct ath5k_hw *VAR_5)
{



 if (VAR_5->ah_gain.g_state != VAR_3)
  return;



 FUNC_1(VAR_5, FUNC_0(VAR_5->ah_txpower.txp_ofdm - 4,
   VAR_1) |
   VAR_2, VAR_0);

 VAR_5->ah_gain.g_state = VAR_4;

}
