
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint ;
struct wlan_bssid_ex {scalar_t__ IELength; } ;


 scalar_t__ VAR_0 ;

uint FUNC_0(struct wlan_bssid_ex *VAR_1)
{
 return sizeof(*VAR_1) + VAR_1->IELength - VAR_0;
}
