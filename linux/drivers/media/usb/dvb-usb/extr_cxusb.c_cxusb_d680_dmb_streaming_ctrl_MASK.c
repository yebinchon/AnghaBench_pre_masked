
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct dvb_usb_adapter {int dev; } ;
typedef int buf ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int*,int,int *,int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct dvb_usb_adapter *VAR_2,
      int VAR_3)
{
 if (VAR_3) {
  u8 VAR_4[2] = { 0x03, 0x00 };

  FUNC_1(VAR_2->dev);
  return FUNC_0(VAR_2->dev, VAR_1,
          VAR_4, sizeof(VAR_4), ((void*)0), 0);
 } else {
  int VAR_5 = FUNC_0(VAR_2->dev,
      VAR_0, ((void*)0), 0, ((void*)0), 0);
  return VAR_5;
 }
}
