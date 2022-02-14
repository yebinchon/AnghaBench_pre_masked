
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct usb_interface {int dev; } ;
struct req_t {int member_4; int member_5; int addr; int * data; int * member_6; int member_3; int member_2; int member_1; int member_0; } ;
struct dvb_usb_device {struct usb_interface* intf; } ;
struct af9015_state {int eeprom_sum; } ;
typedef int __le32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct dvb_usb_device*,struct req_t*) ;
 struct af9015_state* FUNC_1 (struct dvb_usb_device*) ;
 int FUNC_2 (int *,char*,int,...) ;
 scalar_t__ FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct dvb_usb_device *VAR_4)
{
 struct af9015_state *VAR_5 = FUNC_1(VAR_4);
 struct usb_interface *VAR_6 = VAR_4->intf;
 int VAR_7, VAR_8;
 u8 VAR_9[VAR_0];
 struct req_t VAR_10 = {VAR_3, VAR_1, 0, 0, 1, 1, ((void*)0)};


 for (VAR_8 = 0; VAR_8 < VAR_0; VAR_8++) {
  VAR_10.addr = VAR_8;
  VAR_10.data = &VAR_9[VAR_8];
  VAR_7 = FUNC_0(VAR_4, &VAR_10);
  if (VAR_7 < 0)
   goto err;
 }


 for (VAR_8 = 0; VAR_8 < VAR_0 / sizeof(u32); VAR_8++) {
  VAR_5->eeprom_sum *= VAR_2;
  VAR_5->eeprom_sum += FUNC_3(((__le32 *)VAR_9)[VAR_8]);
 }

 for (VAR_8 = 0; VAR_8 < VAR_0; VAR_8 += 16)
  FUNC_2(&VAR_6->dev, "%*ph\n", 16, VAR_9 + VAR_8);

 FUNC_2(&VAR_6->dev, "eeprom sum %.8x\n", VAR_5->eeprom_sum);
 return 0;
err:
 FUNC_2(&VAR_6->dev, "failed %d\n", VAR_7);
 return VAR_7;
}
