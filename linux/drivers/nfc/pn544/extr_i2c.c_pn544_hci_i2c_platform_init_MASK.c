
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pn544_i2c_phy {int en_polarity; int gpiod_en; TYPE_1__* i2c_dev; int gpiod_fw; } ;
typedef int rset_cmd ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (TYPE_1__*,char*,int) ;
 int FUNC_3 (int *,char*) ;
 int FUNC_4 (int *,char*,...) ;
 int FUNC_5 (int,int) ;

__attribute__((used)) static void FUNC_6(struct pn544_i2c_phy *VAR_0)
{
 int VAR_1, VAR_2, VAR_3;
 char VAR_4[] = { 0x05, 0xF9, 0x04, 0x00, 0xC3, 0xE5 };
 int VAR_5 = sizeof(VAR_4);

 FUNC_4(&VAR_0->i2c_dev->dev, "Detecting nfc_en polarity\n");


 FUNC_1(VAR_0->gpiod_fw, 0);

 for (VAR_1 = 0; VAR_1 < 2; VAR_1++) {
  VAR_0->en_polarity = VAR_1;
  VAR_2 = 3;
  while (VAR_2--) {

   FUNC_1(VAR_0->gpiod_en, !VAR_0->en_polarity);
   FUNC_5(10000, 15000);


   FUNC_1(VAR_0->gpiod_en, VAR_0->en_polarity);
   FUNC_5(10000, 15000);


   FUNC_0(&VAR_0->i2c_dev->dev, "Sending reset cmd\n");
   VAR_3 = FUNC_2(VAR_0->i2c_dev, VAR_4, VAR_5);
   if (VAR_3 == VAR_5) {
    FUNC_4(&VAR_0->i2c_dev->dev,
      "nfc_en polarity : active %s\n",
      (VAR_1 == 0 ? "low" : "high"));
    goto out;
   }
  }
 }

 FUNC_3(&VAR_0->i2c_dev->dev,
  "Could not detect nfc_en polarity, fallback to active high\n");

out:
 FUNC_1(VAR_0->gpiod_en, !VAR_0->en_polarity);
}
