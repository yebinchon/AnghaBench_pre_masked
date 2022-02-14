
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct rtl_priv {int dummy; } ;
struct rtl_pci {int pdev; } ;
struct ieee80211_hw {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct rtl_priv*,int ,int ,char*,...) ;
 int FUNC_2 (int ,int,int*) ;
 int FUNC_3 (int ,int,int*) ;
 int FUNC_4 (int ,int,int) ;
 struct rtl_pci* FUNC_5 (int ) ;
 int FUNC_6 (struct ieee80211_hw*) ;
 struct rtl_priv* FUNC_7 (struct ieee80211_hw*) ;

__attribute__((used)) static void FUNC_8(struct ieee80211_hw *VAR_4)
{
 struct rtl_priv *VAR_5 = FUNC_7(VAR_4);
 struct rtl_pci *VAR_6 = FUNC_5(FUNC_6(VAR_4));
 u16 VAR_7;
 u8 VAR_8;
 u8 VAR_9 = 0xff;
 u8 VAR_10;
 u8 VAR_11 = 0;





 FUNC_2(VAR_6->pdev, 0x34, &VAR_8);
 FUNC_1(VAR_5, VAR_0, VAR_2,
   "PCI configuration 0x34 = 0x%2x\n", VAR_8);

 do {
  FUNC_3(VAR_6->pdev, VAR_8, &VAR_7);
  VAR_9 = VAR_7 & 0xFF;

  FUNC_1(VAR_5, VAR_0, VAR_2,
    "in pci configuration, cap_pointer%x = %x\n",
     VAR_8, VAR_9);

  if (VAR_9 == 0x01) {
   break;
  } else {

   VAR_8 = (VAR_7 >> 8) & 0xFF;

   if (VAR_8 == 0x00 || VAR_8 == 0xff) {
    VAR_9 = 0xff;
    break;
   }
  }
 } while (VAR_11++ < 200);

 if (VAR_9 == 0x01) {



  FUNC_2(VAR_6->pdev, VAR_8 + 5, &VAR_10);

  if (VAR_10 & FUNC_0(7)) {

   VAR_10 = VAR_10 | FUNC_0(7);

   FUNC_4(VAR_6->pdev, VAR_8 + 5,
           VAR_10);

   FUNC_2(VAR_6->pdev, VAR_8 + 5,
          &VAR_10);
   FUNC_1(VAR_5, VAR_0, VAR_1,
     "Clear PME status 0x%2x to 0x%2x\n",
      VAR_8 + 5, VAR_10);
  } else {
   FUNC_1(VAR_5, VAR_0, VAR_1,
     "PME status(0x%2x) = 0x%2x\n",
      VAR_8 + 5, VAR_10);
  }
 } else {
  FUNC_1(VAR_5, VAR_0, VAR_3,
    "Cannot find PME Capability\n");
 }
}
