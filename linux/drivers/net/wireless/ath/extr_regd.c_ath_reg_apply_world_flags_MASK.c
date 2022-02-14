
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wiphy {int dummy; } ;
struct ath_regulatory {TYPE_1__* regpair; } ;
typedef enum nl80211_reg_initiator { ____Placeholder_nl80211_reg_initiator } nl80211_reg_initiator ;
struct TYPE_2__ {int reg_domain; } ;


 int FUNC_0 (struct wiphy*,struct ath_regulatory*,int) ;
 int FUNC_1 (struct wiphy*,struct ath_regulatory*,int) ;
 int FUNC_2 (struct ath_regulatory*) ;

__attribute__((used)) static void FUNC_3(struct wiphy *VAR_0,
          enum nl80211_reg_initiator VAR_1,
          struct ath_regulatory *VAR_2)
{
 switch (VAR_2->regpair->reg_domain) {
 case 0x60:
 case 0x63:
 case 0x66:
 case 0x67:
 case 0x6C:
  FUNC_0(VAR_0, VAR_2, VAR_1);
  break;
 case 0x68:
  FUNC_0(VAR_0, VAR_2, VAR_1);
  FUNC_1(VAR_0, VAR_2, VAR_1);
  break;
 default:
  if (FUNC_2(VAR_2))
   FUNC_0(VAR_0, VAR_2, VAR_1);
 }
}
