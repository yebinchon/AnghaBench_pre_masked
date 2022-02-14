
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct orinoco_private {struct ezusb_priv* card; } ;
struct ezusb_priv {int udev; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (struct ezusb_priv*,int) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (int ,int ,int ,int,int,int,int *,int ,int ) ;
 int FUNC_5 (int ,int ) ;

__attribute__((used)) static int FUNC_6(struct orinoco_private *VAR_6)
{
 struct ezusb_priv *VAR_7 = VAR_6->card;
 int VAR_8 = FUNC_2(VAR_7, 1);

 if (VAR_8 < 0) {
  FUNC_1("Failed to reset");
  return VAR_8;
 }

 VAR_8 = FUNC_2(VAR_7, 0);
 if (VAR_8 < 0) {
  FUNC_1("Failed to unreset");
  return VAR_8;
 }

 FUNC_3(VAR_7->dev, "sending control message\n");
 VAR_8 = FUNC_4(VAR_7->udev,
     FUNC_5(VAR_7->udev, 0),
     VAR_1,
     VAR_5 | VAR_4 |
     VAR_3, 0x0, 0x0, ((void*)0), 0,
     VAR_0);
 if (VAR_8 < 0) {
  FUNC_1("EZUSB_REQUEST_TRIGER failed retval %d", VAR_8);
  return VAR_8;
 }
 return 0;
}
