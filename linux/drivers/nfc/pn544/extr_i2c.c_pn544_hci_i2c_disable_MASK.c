
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pn544_i2c_phy {int en_polarity; scalar_t__ powered; int gpiod_en; int gpiod_fw; } ;


 int FUNC_0 (int ,int) ;
 int FUNC_1 (int,int) ;

__attribute__((used)) static void FUNC_2(void *VAR_0)
{
 struct pn544_i2c_phy *VAR_1 = VAR_0;

 FUNC_0(VAR_1->gpiod_fw, 0);
 FUNC_0(VAR_1->gpiod_en, !VAR_1->en_polarity);
 FUNC_1(10000, 15000);

 FUNC_0(VAR_1->gpiod_en, VAR_1->en_polarity);
 FUNC_1(10000, 15000);

 FUNC_0(VAR_1->gpiod_en, !VAR_1->en_polarity);
 FUNC_1(10000, 15000);

 VAR_1->powered = 0;
}
