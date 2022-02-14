
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct usb_interface {TYPE_2__* altsetting; } ;
struct usb_device {int dummy; } ;
struct uas_dev_info {int shutdown; } ;
struct device {int dummy; } ;
struct Scsi_Host {scalar_t__ hostdata; } ;
struct TYPE_3__ {int bInterfaceNumber; } ;
struct TYPE_4__ {TYPE_1__ desc; } ;


 scalar_t__ VAR_0 ;
 struct usb_device* FUNC_0 (struct usb_interface*) ;
 scalar_t__ VAR_1 ;
 struct usb_interface* FUNC_1 (struct device*) ;
 int FUNC_2 (struct uas_dev_info*) ;
 struct Scsi_Host* FUNC_3 (struct usb_interface*) ;
 int FUNC_4 (struct usb_device*) ;
 int FUNC_5 (struct usb_device*,int ,int ) ;

__attribute__((used)) static void FUNC_6(struct device *VAR_2)
{
 struct usb_interface *VAR_3 = FUNC_1(VAR_2);
 struct usb_device *VAR_4 = FUNC_0(VAR_3);
 struct Scsi_Host *VAR_5 = FUNC_3(VAR_3);
 struct uas_dev_info *VAR_6 = (struct uas_dev_info *)VAR_5->hostdata;

 if (VAR_1 != VAR_0)
  return;

 VAR_6->shutdown = 1;
 FUNC_2(VAR_6);
 FUNC_5(VAR_4, VAR_3->altsetting[0].desc.bInterfaceNumber, 0);
 FUNC_4(VAR_4);
}
