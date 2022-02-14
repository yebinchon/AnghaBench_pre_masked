
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ndis_802_11_ssid {int SsidLength; int* Ssid; } ;



__attribute__((used)) static u8 FUNC_0(struct ndis_802_11_ssid *VAR_0)
{
 u8 VAR_1;

 if (VAR_0->SsidLength > 32)
  return 0;
 for (VAR_1 = 0; VAR_1 < VAR_0->SsidLength; VAR_1++) {

  if (!((VAR_0->Ssid[VAR_1] >= 0x20) && (VAR_0->Ssid[VAR_1] <= 0x7e)))
   return 0;
 }
 return 1;
}
