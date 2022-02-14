
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ndis_802_11_ssid {int SsidLength; int* Ssid; } ;


 int FUNC_0 (int ,int ,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;

u8 FUNC_1(struct ndis_802_11_ssid *VAR_3)
{
 u8 VAR_4 = 1;

 if (VAR_3->SsidLength > 32) {
  FUNC_0(VAR_1, VAR_0, ("ssid length >32\n"));
  VAR_4 = 0;
  goto exit;
 }
exit:
 return VAR_4;
}
