
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef void* u32 ;
struct TYPE_6__ {int wlan_ver; void* abi_ver; } ;
struct TYPE_4__ {int cap; } ;
struct ath6kl {int event_wq; int flag; TYPE_3__ version; TYPE_2__* wiphy; TYPE_1__ hw; int mac_addr; } ;
typedef enum wmi_phy_cap { ____Placeholder_wmi_phy_cap } wmi_phy_cap ;
struct TYPE_5__ {int fw_version; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,int ,void*,void*,int) ;
 int FUNC_1 (int ,int *,int ) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int ,int,char*,int,int,int,int) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int *) ;

void FUNC_6(void *VAR_3, u8 *VAR_4, u32 VAR_5, u32 VAR_6,
   enum wmi_phy_cap VAR_7)
{
 struct ath6kl *VAR_8 = VAR_3;

 FUNC_1(VAR_8->mac_addr, VAR_4, VAR_1);

 FUNC_0(VAR_0,
     "ready event mac addr %pM sw_ver 0x%x abi_ver 0x%x cap 0x%x\n",
     VAR_8->mac_addr, VAR_5, VAR_6, VAR_7);

 VAR_8->version.wlan_ver = VAR_5;
 VAR_8->version.abi_ver = VAR_6;
 VAR_8->hw.cap = VAR_7;

 if (FUNC_4(VAR_8->wiphy->fw_version) == 0) {
  FUNC_3(VAR_8->wiphy->fw_version,
    sizeof(VAR_8->wiphy->fw_version),
    "%u.%u.%u.%u",
    (VAR_8->version.wlan_ver & 0xf0000000) >> 28,
    (VAR_8->version.wlan_ver & 0x0f000000) >> 24,
    (VAR_8->version.wlan_ver & 0x00ff0000) >> 16,
    (VAR_8->version.wlan_ver & 0x0000ffff));
 }


 FUNC_2(VAR_2, &VAR_8->flag);
 FUNC_5(&VAR_8->event_wq);
}
