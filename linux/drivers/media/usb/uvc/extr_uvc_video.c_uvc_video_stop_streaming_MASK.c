
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {unsigned int bEndpointAddress; } ;
struct uvc_streaming {TYPE_3__* dev; TYPE_1__ header; int intfnum; TYPE_2__* intf; } ;
struct TYPE_6__ {int udev; } ;
struct TYPE_5__ {int num_altsetting; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (int ,unsigned int) ;
 int FUNC_1 (int ,int ,int ) ;
 unsigned int FUNC_2 (int ,unsigned int) ;
 int FUNC_3 (struct uvc_streaming*) ;
 int FUNC_4 (struct uvc_streaming*,int) ;

void FUNC_5(struct uvc_streaming *VAR_2)
{
 FUNC_4(VAR_2, 1);

 if (VAR_2->intf->num_altsetting > 1) {
  FUNC_1(VAR_2->dev->udev, VAR_2->intfnum, 0);
 } else {





  unsigned int VAR_3 = VAR_2->header.bEndpointAddress
       & VAR_1;
  unsigned int VAR_4 = VAR_2->header.bEndpointAddress
     & VAR_0;
  unsigned int VAR_5;

  VAR_5 = FUNC_2(VAR_2->dev->udev, VAR_3) | VAR_4;
  FUNC_0(VAR_2->dev->udev, VAR_5);
 }

 FUNC_3(VAR_2);
}
