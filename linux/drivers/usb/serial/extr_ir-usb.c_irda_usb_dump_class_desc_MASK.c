
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_serial {TYPE_1__* dev; } ;
struct usb_irda_cs_descriptor {int bMaxUnicastList; int bIrdaRateSniff; int bmAdditionalBOFs; int wBaudRate; int bmMinTurnaroundTime; int bmWindowSize; int bmDataSize; int bcdSpecRevision; int bDescriptorType; int bLength; } ;
struct device {int dummy; } ;
struct TYPE_2__ {struct device dev; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct device*,char*,int ) ;

__attribute__((used)) static inline void FUNC_2(struct usb_serial *VAR_0,
         struct usb_irda_cs_descriptor *VAR_1)
{
 struct device *VAR_2 = &VAR_0->dev->dev;

 FUNC_1(VAR_2, "bLength=%x\n", VAR_1->bLength);
 FUNC_1(VAR_2, "bDescriptorType=%x\n", VAR_1->bDescriptorType);
 FUNC_1(VAR_2, "bcdSpecRevision=%x\n", FUNC_0(VAR_1->bcdSpecRevision));
 FUNC_1(VAR_2, "bmDataSize=%x\n", VAR_1->bmDataSize);
 FUNC_1(VAR_2, "bmWindowSize=%x\n", VAR_1->bmWindowSize);
 FUNC_1(VAR_2, "bmMinTurnaroundTime=%d\n", VAR_1->bmMinTurnaroundTime);
 FUNC_1(VAR_2, "wBaudRate=%x\n", FUNC_0(VAR_1->wBaudRate));
 FUNC_1(VAR_2, "bmAdditionalBOFs=%x\n", VAR_1->bmAdditionalBOFs);
 FUNC_1(VAR_2, "bIrdaRateSniff=%x\n", VAR_1->bIrdaRateSniff);
 FUNC_1(VAR_2, "bMaxUnicastList=%x\n", VAR_1->bMaxUnicastList);
}
