
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct mt76_usb {int data; } ;
struct TYPE_2__ {struct mt76_usb usb; } ;
struct mt76x02_dev {TYPE_1__ mt76; } ;
typedef int data ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int const*,int) ;
 int FUNC_1 (TYPE_1__*,int ,int,int,int ,int ,int) ;

__attribute__((used)) static void FUNC_2(struct mt76x02_dev *VAR_3)
{
 struct mt76_usb *VAR_4 = &VAR_3->mt76.usb;
 static const u8 VAR_5[] = {
  0x6f, 0xfc, 0x08, 0x01,
  0x20, 0x04, 0x00, 0x00,
  0x00, 0x09, 0x00,
 };

 FUNC_0(VAR_4->data, VAR_5, sizeof(VAR_5));
 FUNC_1(&VAR_3->mt76, VAR_0,
        VAR_1 | VAR_2,
        0x12, 0, VAR_4->data, sizeof(VAR_5));
}
