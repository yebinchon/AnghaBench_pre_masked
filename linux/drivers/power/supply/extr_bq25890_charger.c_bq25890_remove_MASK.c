
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_client {int dummy; } ;
struct bq25890_device {int usb_nb; int usb_phy; int charger; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct bq25890_device*) ;
 struct bq25890_device* FUNC_2 (struct i2c_client*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int *) ;

__attribute__((used)) static int FUNC_5(struct i2c_client *VAR_0)
{
 struct bq25890_device *VAR_1 = FUNC_2(VAR_0);

 FUNC_3(VAR_1->charger);

 if (!FUNC_0(VAR_1->usb_phy))
  FUNC_4(VAR_1->usb_phy, &VAR_1->usb_nb);


 FUNC_1(VAR_1);

 return 0;
}
