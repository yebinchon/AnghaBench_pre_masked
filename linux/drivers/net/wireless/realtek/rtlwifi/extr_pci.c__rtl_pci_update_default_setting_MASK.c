
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct rtl_ps_ctl {int reg_rfps_level; int support_aspm; int support_backdoor; int const_amdpci_aspm; } ;
struct TYPE_4__ {scalar_t__ hw_type; } ;
struct rtl_priv {TYPE_2__ rtlhal; } ;
struct TYPE_3__ {int pcibridge_vendor; } ;
struct rtl_pci_priv {TYPE_1__ ndis_adapter; } ;
struct rtl_pci {int const_pci_aspm; int const_hwsw_rfoff_d3; int const_support_pciaspm; int pdev; int const_amdpci_aspm; } ;
struct ieee80211_hw {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ,int,int*) ;
 int FUNC_1 (char*,int) ;
 struct rtl_pci* FUNC_2 (struct rtl_pci_priv*) ;
 struct rtl_pci_priv* FUNC_3 (struct ieee80211_hw*) ;
 struct rtl_priv* FUNC_4 (struct ieee80211_hw*) ;
 struct rtl_ps_ctl* FUNC_5 (struct rtl_priv*) ;

__attribute__((used)) static void FUNC_6(struct ieee80211_hw *VAR_8)
{
 struct rtl_priv *VAR_9 = FUNC_4(VAR_8);
 struct rtl_pci_priv *VAR_10 = FUNC_3(VAR_8);
 struct rtl_ps_ctl *VAR_11 = FUNC_5(FUNC_4(VAR_8));
 struct rtl_pci *VAR_12 = FUNC_2(FUNC_3(VAR_8));
 u8 VAR_13 = VAR_10->ndis_adapter.pcibridge_vendor;
 u8 VAR_14;

 VAR_11->reg_rfps_level = 0;
 VAR_11->support_aspm = 0;


 VAR_11->const_amdpci_aspm = VAR_12->const_amdpci_aspm;
 switch (VAR_12->const_pci_aspm) {
 case 0:

  break;

 case 1:

  VAR_11->reg_rfps_level |= VAR_2;
  break;

 case 2:

  VAR_11->reg_rfps_level |= (VAR_2 |
      VAR_4);
  break;

 case 3:



  VAR_11->reg_rfps_level &= ~(VAR_2);
  VAR_11->reg_rfps_level |= (VAR_7 |
      VAR_4);
  break;

 case 4:



  VAR_11->reg_rfps_level &= ~(VAR_2 |
       VAR_4);
  VAR_11->reg_rfps_level |= VAR_7;
  break;
 }

 VAR_11->reg_rfps_level |= VAR_5;


 switch (VAR_12->const_hwsw_rfoff_d3) {
 case 1:
  if (VAR_11->reg_rfps_level & VAR_2)
   VAR_11->reg_rfps_level |= VAR_3;
  break;

 case 2:
  if (VAR_11->reg_rfps_level & VAR_2)
   VAR_11->reg_rfps_level |= VAR_3;
  VAR_11->reg_rfps_level |= VAR_5;
  break;

 case 3:
  VAR_11->reg_rfps_level |= VAR_6;
  break;
 }


 switch (VAR_12->const_support_pciaspm) {
 case 0:

  VAR_11->support_aspm = 0;
  break;
 case 1:

  VAR_11->support_aspm = 1;
  VAR_11->support_backdoor = 1;
  break;
 case 2:

  if (VAR_13 == VAR_1)
   VAR_11->support_aspm = 1;
  break;
 default:
  FUNC_1("switch case %#x not processed\n",
         VAR_12->const_support_pciaspm);
  break;
 }




 FUNC_0(VAR_12->pdev, 0x80, &VAR_14);
 if (VAR_9->rtlhal.hw_type == VAR_0 &&
     VAR_14 == 0x43)
  VAR_11->support_aspm = 0;
}
