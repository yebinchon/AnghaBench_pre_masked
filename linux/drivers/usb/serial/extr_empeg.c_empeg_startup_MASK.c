
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct usb_serial {TYPE_3__* dev; } ;
struct TYPE_6__ {TYPE_2__* actconfig; int dev; } ;
struct TYPE_4__ {int bConfigurationValue; } ;
struct TYPE_5__ {TYPE_1__ desc; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (TYPE_3__*) ;

__attribute__((used)) static int FUNC_2(struct usb_serial *VAR_1)
{
 int VAR_2;

 if (VAR_1->dev->actconfig->desc.bConfigurationValue != 1) {
  FUNC_0(&VAR_1->dev->dev, "active config #%d != 1 ??\n",
   VAR_1->dev->actconfig->desc.bConfigurationValue);
  return -VAR_0;
 }

 VAR_2 = FUNC_1(VAR_1->dev);


 return VAR_2;
}
