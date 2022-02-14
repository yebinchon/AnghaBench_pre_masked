
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct ieee80211_hw {int wiphy; struct adm8211_priv* priv; } ;
struct adm8211_priv {scalar_t__ bbp_type; int specific_bbptype; int transceiver_type; TYPE_2__* eeprom; TYPE_1__* pdev; } ;
struct TYPE_4__ {int major_version; int cr28; int cr29; } ;
struct TYPE_3__ {int revision; } ;



 int VAR_0 ;



 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_2 (struct ieee80211_hw*) ;
 int FUNC_3 (struct ieee80211_hw*,int,int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int ,char*,scalar_t__) ;

__attribute__((used)) static int FUNC_6(struct ieee80211_hw *VAR_20)
{
 struct adm8211_priv *VAR_21 = VAR_20->priv;
 u32 VAR_22;


 if (VAR_21->bbp_type == VAR_6) {
  FUNC_1(VAR_12, 0x100E0C0A);
  FUNC_1(VAR_10, 0x00007C7E);
  FUNC_1(VAR_11, 0x00100000);
 } else if (VAR_21->bbp_type == VAR_7 ||
     VAR_21->bbp_type == VAR_5) {

  switch (VAR_21->specific_bbptype) {
  case 137:
  case 136:
   FUNC_1(VAR_12, 0x00009101);
   FUNC_1(VAR_10, 0x00000301);
   break;

  case 138:
   FUNC_1(VAR_12, 0x00008903);
   FUNC_1(VAR_10, 0x00001716);

   VAR_22 = FUNC_0(VAR_8);
   VAR_22 &= ~VAR_0;
   VAR_22 |= 0x5 << 18;
   FUNC_1(VAR_8, VAR_22);
   break;
  }

  switch (VAR_21->pdev->revision) {
  case 131:
   if (VAR_21->transceiver_type == 129 ||
       VAR_21->transceiver_type == 128 ||
       VAR_21->transceiver_type == 130)
    FUNC_1(VAR_18, 0x1 << 22);
   else if (VAR_21->transceiver_type == 135 ||
     VAR_21->transceiver_type == 139)
    FUNC_1(VAR_18, 0x3 << 22);
   break;

  case 132:
   VAR_22 = FUNC_0(VAR_11);
   VAR_22 &= 0x0000FFFF;
   VAR_22 |= 0x7e100000;
   FUNC_1(VAR_11, VAR_22);
   break;

  case 134:
  case 133:
  default:
   FUNC_1(VAR_11, 0x7e100000);
   break;
  }


  FUNC_1(VAR_9, 0x800);
 }

 FUNC_2(VAR_20);


 FUNC_1(VAR_19, VAR_4 |
     VAR_2 | VAR_3);
 FUNC_0(VAR_19);
 FUNC_4(20);


 if (VAR_21->bbp_type == VAR_7) {
  FUNC_3(VAR_20, VAR_13, 0x80);

  FUNC_3(VAR_20, VAR_14, 0x80);
  FUNC_3(VAR_20, VAR_17, 0x74);
  FUNC_3(VAR_20, VAR_16, 0x38);
  FUNC_3(VAR_20, VAR_15, 0x40);

  if (VAR_21->eeprom->major_version < 2) {
   FUNC_3(VAR_20, 0x1c, 0x00);
   FUNC_3(VAR_20, 0x1d, 0x80);
  } else {
   if (VAR_21->pdev->revision == 132)
    FUNC_3(VAR_20, 0x1c, VAR_21->eeprom->cr28);
   else
    FUNC_3(VAR_20, 0x1c, 0x00);

   FUNC_3(VAR_20, 0x1d, VAR_21->eeprom->cr29);
  }
 } else if (VAR_21->bbp_type == VAR_5) {

  FUNC_3(VAR_20, 0x00, 0xFF);

  FUNC_3(VAR_20, 0x07, 0x0A);


  switch (VAR_21->transceiver_type) {
  case 129:
  case 128:
   FUNC_3(VAR_20, 0x00, 0x00);
   FUNC_3(VAR_20, 0x01, 0x00);
   FUNC_3(VAR_20, 0x02, 0x00);
   FUNC_3(VAR_20, 0x03, 0x00);
   FUNC_3(VAR_20, 0x06, 0x0f);
   FUNC_3(VAR_20, 0x09, 0x00);
   FUNC_3(VAR_20, 0x0a, 0x00);
   FUNC_3(VAR_20, 0x0b, 0x00);
   FUNC_3(VAR_20, 0x0c, 0x00);
   FUNC_3(VAR_20, 0x0f, 0xAA);
   FUNC_3(VAR_20, 0x10, 0x8c);
   FUNC_3(VAR_20, 0x11, 0x43);
   FUNC_3(VAR_20, 0x18, 0x40);
   FUNC_3(VAR_20, 0x20, 0x23);
   FUNC_3(VAR_20, 0x21, 0x02);
   FUNC_3(VAR_20, 0x22, 0x28);
   FUNC_3(VAR_20, 0x23, 0x30);
   FUNC_3(VAR_20, 0x24, 0x2d);
   FUNC_3(VAR_20, 0x28, 0x35);
   FUNC_3(VAR_20, 0x2a, 0x8c);
   FUNC_3(VAR_20, 0x2b, 0x81);
   FUNC_3(VAR_20, 0x2c, 0x44);
   FUNC_3(VAR_20, 0x2d, 0x0A);
   FUNC_3(VAR_20, 0x29, 0x40);
   FUNC_3(VAR_20, 0x60, 0x08);
   FUNC_3(VAR_20, 0x64, 0x01);
   break;

  case 135:
   FUNC_3(VAR_20, 0x00, 0x00);
   FUNC_3(VAR_20, 0x01, 0x00);
   FUNC_3(VAR_20, 0x02, 0x00);
   FUNC_3(VAR_20, 0x03, 0x00);
   FUNC_3(VAR_20, 0x06, 0x0f);
   FUNC_3(VAR_20, 0x09, 0x05);
   FUNC_3(VAR_20, 0x0a, 0x02);
   FUNC_3(VAR_20, 0x0b, 0x00);
   FUNC_3(VAR_20, 0x0c, 0x0f);
   FUNC_3(VAR_20, 0x0f, 0x55);
   FUNC_3(VAR_20, 0x10, 0x8d);
   FUNC_3(VAR_20, 0x11, 0x43);
   FUNC_3(VAR_20, 0x18, 0x4a);
   FUNC_3(VAR_20, 0x20, 0x20);
   FUNC_3(VAR_20, 0x21, 0x02);
   FUNC_3(VAR_20, 0x22, 0x23);
   FUNC_3(VAR_20, 0x23, 0x30);
   FUNC_3(VAR_20, 0x24, 0x2d);
   FUNC_3(VAR_20, 0x2a, 0x8c);
   FUNC_3(VAR_20, 0x2b, 0x81);
   FUNC_3(VAR_20, 0x2c, 0x44);
   FUNC_3(VAR_20, 0x29, 0x4a);
   FUNC_3(VAR_20, 0x60, 0x2b);
   FUNC_3(VAR_20, 0x64, 0x01);
   break;

  case 139:
   FUNC_3(VAR_20, 0x00, 0x00);
   FUNC_3(VAR_20, 0x01, 0x00);
   FUNC_3(VAR_20, 0x02, 0x00);
   FUNC_3(VAR_20, 0x03, 0x00);
   FUNC_3(VAR_20, 0x06, 0x0f);
   FUNC_3(VAR_20, 0x07, 0x05);
   FUNC_3(VAR_20, 0x08, 0x03);
   FUNC_3(VAR_20, 0x09, 0x00);
   FUNC_3(VAR_20, 0x0a, 0x00);
   FUNC_3(VAR_20, 0x0b, 0x00);
   FUNC_3(VAR_20, 0x0c, 0x10);
   FUNC_3(VAR_20, 0x0f, 0x55);
   FUNC_3(VAR_20, 0x10, 0x8d);
   FUNC_3(VAR_20, 0x11, 0x43);
   FUNC_3(VAR_20, 0x18, 0x4a);
   FUNC_3(VAR_20, 0x20, 0x20);
   FUNC_3(VAR_20, 0x21, 0x02);
   FUNC_3(VAR_20, 0x22, 0x23);
   FUNC_3(VAR_20, 0x23, 0x30);
   FUNC_3(VAR_20, 0x24, 0x2d);
   FUNC_3(VAR_20, 0x2a, 0xaa);
   FUNC_3(VAR_20, 0x2b, 0x81);
   FUNC_3(VAR_20, 0x2c, 0x44);
   FUNC_3(VAR_20, 0x29, 0xfa);
   FUNC_3(VAR_20, 0x60, 0x2d);
   FUNC_3(VAR_20, 0x64, 0x01);
   break;

  case 130:
   break;

  default:
   FUNC_5(VAR_20->wiphy, "unsupported transceiver %d\n",
        VAR_21->transceiver_type);
   break;
  }
 } else
  FUNC_5(VAR_20->wiphy, "unsupported BBP %d\n", VAR_21->bbp_type);

 FUNC_1(VAR_19, 0);


 VAR_22 = FUNC_0(VAR_18);
 VAR_22 |= VAR_1;
 FUNC_1(VAR_18, VAR_22);

 return 0;
}
