
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ipw_priv {int config; int channel; int bssid; int capability; int rates_mask; int essid; int essid_len; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,...) ;

__attribute__((used)) static void FUNC_1(struct ipw_priv *VAR_4)
{
 FUNC_0("Scan completed, no valid APs matched "
         "[CFG 0x%08X]\n", VAR_4->config);
 if (VAR_4->config & VAR_2)
  FUNC_0("Channel locked to %d\n", VAR_4->channel);
 else
  FUNC_0("Channel unlocked.\n");
 if (VAR_4->config & VAR_3)
  FUNC_0("ESSID locked to '%*pE'\n",
          VAR_4->essid_len, VAR_4->essid);
 else
  FUNC_0("ESSID unlocked.\n");
 if (VAR_4->config & VAR_1)
  FUNC_0("BSSID locked to %pM\n", VAR_4->bssid);
 else
  FUNC_0("BSSID unlocked.\n");
 if (VAR_4->capability & VAR_0)
  FUNC_0("PRIVACY on\n");
 else
  FUNC_0("PRIVACY off\n");
 FUNC_0("RATE MASK: 0x%08X\n", VAR_4->rates_mask);
}
