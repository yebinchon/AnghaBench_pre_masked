
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct TYPE_4__ {scalar_t__ SsidLength; int Ssid; } ;
struct TYPE_3__ {scalar_t__ DSConfig; } ;
struct wlan_bssid_ex {TYPE_2__ Ssid; int MacAddress; TYPE_1__ Configuration; int IEs; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,scalar_t__) ;
 int FUNC_1 (int *,int ,int) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct wlan_bssid_ex *VAR_3,
      struct wlan_bssid_ex *VAR_4)
{
 u16 VAR_5, VAR_6;

 FUNC_1((u8 *)&VAR_5, FUNC_2(VAR_3->IEs), 2);
 FUNC_1((u8 *)&VAR_6, FUNC_2(VAR_4->IEs), 2);
 return (VAR_3->Ssid.SsidLength == VAR_4->Ssid.SsidLength) &&
   (VAR_3->Configuration.DSConfig ==
   VAR_4->Configuration.DSConfig) &&
   ((!FUNC_0(VAR_3->MacAddress, VAR_4->MacAddress,
   VAR_0))) &&
   ((!FUNC_0(VAR_3->Ssid.Ssid,
     VAR_4->Ssid.Ssid,
     VAR_3->Ssid.SsidLength))) &&
   ((VAR_5 & VAR_2) ==
   (VAR_6 & VAR_2)) &&
   ((VAR_5 & VAR_1) ==
   (VAR_6 & VAR_1));

}
