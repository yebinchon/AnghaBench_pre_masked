
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct rtllib_network {scalar_t__ CountryIeLen; int ssid; int CountryIeBuf; } ;
struct rtllib_info_element {scalar_t__ len; int data; } ;
struct rtllib_device {int dev; scalar_t__ FirstIe_InScan; } ;


 int FUNC_0 (struct rtllib_device*) ;
 scalar_t__ FUNC_1 (struct rtllib_device*) ;
 scalar_t__ FUNC_2 (struct rtllib_device*,int *) ;
 int FUNC_3 (struct rtllib_device*) ;
 int FUNC_4 (struct rtllib_device*,int *,scalar_t__,int ) ;
 int FUNC_5 (int ,int ,scalar_t__) ;
 int FUNC_6 (int ,char*,int ) ;
 scalar_t__ FUNC_7 (struct rtllib_device*,int) ;

__attribute__((used)) static inline void FUNC_8(
 struct rtllib_device *VAR_0,
 struct rtllib_info_element *VAR_1,
 struct rtllib_network *VAR_2,
 u8 *VAR_3)
{
 if (FUNC_1(VAR_0)) {
  if (VAR_1->len != 0) {
   FUNC_5(VAR_2->CountryIeBuf, VAR_1->data,
          VAR_1->len);
   VAR_2->CountryIeLen = VAR_1->len;

   if (!FUNC_0(VAR_0)) {
    if (FUNC_7(VAR_0, 0) &&
        VAR_0->FirstIe_InScan)
     FUNC_6(VAR_0->dev,
          "Received beacon ContryIE, SSID: <%s>\n",
          VAR_2->ssid);
    FUNC_4(VAR_0, VAR_3,
             VAR_1->len,
             VAR_1->data);
   }
  }

  if (FUNC_2(VAR_0, VAR_3))
   FUNC_3(VAR_0);
 }
}
