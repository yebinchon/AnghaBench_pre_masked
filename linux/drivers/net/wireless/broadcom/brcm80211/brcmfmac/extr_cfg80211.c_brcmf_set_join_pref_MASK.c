
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int band; scalar_t__ delta; } ;
struct TYPE_4__ {int band_pref; TYPE_1__ adjust; } ;
struct cfg80211_bss_selection {int behaviour; TYPE_2__ param; } ;
struct brcmf_pub {int dummy; } ;
struct brcmf_join_pref_params {int len; void* band; scalar_t__ rssi_gain; int type; } ;
struct brcmf_if {struct brcmf_pub* drvr; } ;
typedef int join_pref_params ;
typedef enum nl80211_band { ____Placeholder_nl80211_band } nl80211_band ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;



 int VAR_4 ;

 int FUNC_0 (struct brcmf_pub*,char*,int) ;
 int FUNC_1 (struct brcmf_if*) ;
 int FUNC_2 (struct brcmf_if*,int ,int ) ;
 int FUNC_3 (struct brcmf_if*,char*,struct brcmf_join_pref_params*,int) ;
 void* FUNC_4 (int) ;

__attribute__((used)) static void FUNC_5(struct brcmf_if *VAR_5,
    struct cfg80211_bss_selection *VAR_6)
{
 struct brcmf_pub *VAR_7 = VAR_5->drvr;
 struct brcmf_join_pref_params VAR_8[2];
 enum nl80211_band VAR_9;
 int VAR_10, VAR_11 = 0;

 VAR_8[VAR_11].len = 2;
 VAR_8[VAR_11].rssi_gain = 0;

 if (VAR_6->behaviour != 131)
  FUNC_2(VAR_5, VAR_0, VAR_4);

 switch (VAR_6->behaviour) {
 case 128:
  FUNC_1(VAR_5);
  return;
 case 131:
  VAR_8[VAR_11].type = VAR_1;
  VAR_9 = VAR_6->param.band_pref;
  VAR_8[VAR_11].band = FUNC_4(VAR_9);
  VAR_11++;
  break;
 case 129:
  VAR_8[VAR_11].type = VAR_3;
  VAR_9 = VAR_6->param.adjust.band;
  VAR_8[VAR_11].band = FUNC_4(VAR_9);
  VAR_8[VAR_11].rssi_gain = VAR_6->param.adjust.delta;
  VAR_11++;
  break;
 case 130:
 default:
  break;
 }
 VAR_8[VAR_11].type = VAR_2;
 VAR_8[VAR_11].len = 2;
 VAR_8[VAR_11].rssi_gain = 0;
 VAR_8[VAR_11].band = 0;
 VAR_10 = FUNC_3(VAR_5, "join_pref", VAR_8,
           sizeof(VAR_8));
 if (VAR_10)
  FUNC_0(VAR_7, "Set join_pref error (%d)\n", VAR_10);
}
