
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ath_hw {int imask; } ;
struct ath_common {int dummy; } ;
struct ath_beacon_config {int beacon_interval; int intval; int nexttbtt; scalar_t__ enable_beacon; scalar_t__ ibss_creator; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct ath_hw*,int ,int ) ;
 struct ath_common* FUNC_2 (struct ath_hw*) ;
 int FUNC_3 (struct ath_hw*) ;
 int FUNC_4 (struct ath_common*,int ,char*,char*,int ,int ,int ) ;

void FUNC_5(struct ath_hw *VAR_2,
       struct ath_beacon_config *VAR_3)
{
 struct ath_common *VAR_4 = FUNC_2(VAR_2);

 VAR_3->intval = FUNC_0(VAR_3->beacon_interval);

 if (VAR_3->ibss_creator)
  VAR_3->nexttbtt = VAR_3->intval;
 else
  VAR_3->nexttbtt = FUNC_1(VAR_2, FUNC_3(VAR_2),
            VAR_3->beacon_interval);

 if (VAR_3->enable_beacon)
  VAR_2->imask |= VAR_0;
 else
  VAR_2->imask &= ~VAR_0;

 FUNC_4(VAR_4, VAR_1,
  "IBSS (%s) nexttbtt: %u intval: %u conf_intval: %u\n",
  (VAR_3->enable_beacon) ? "Enable" : "Disable",
  VAR_3->nexttbtt, VAR_3->intval, VAR_3->beacon_interval);
}
