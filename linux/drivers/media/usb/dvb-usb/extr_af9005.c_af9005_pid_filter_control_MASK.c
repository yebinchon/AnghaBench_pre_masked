
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dvb_usb_adapter {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (int ,int ,int,int,int) ;
 int FUNC_2 (char*,...) ;

__attribute__((used)) static int FUNC_3(struct dvb_usb_adapter *VAR_1, int VAR_2)
{
 int VAR_3;
 FUNC_2("pid filter control  onoff %d\n", VAR_2);
 if (VAR_2) {
  VAR_3 =
      FUNC_0(VAR_1->dev, VAR_0, 1);
  if (VAR_3)
   return VAR_3;
  VAR_3 =
      FUNC_1(VAR_1->dev,
            VAR_0, 1, 1, 1);
  if (VAR_3)
   return VAR_3;
  VAR_3 =
      FUNC_0(VAR_1->dev, VAR_0, 1);
 } else
  VAR_3 =
      FUNC_0(VAR_1->dev, VAR_0, 0);
 if (VAR_3)
  return VAR_3;
 FUNC_2("pid filter control ok\n");
 return 0;
}
