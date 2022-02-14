
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct scsi_cmnd {TYPE_2__* device; } ;
struct mts_desc {int usb_dev; int usb_intf; } ;
struct TYPE_4__ {TYPE_1__* host; } ;
struct TYPE_3__ {scalar_t__* hostdata; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 int VAR_1 ;
 int FUNC_1 (struct mts_desc*) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(struct scsi_cmnd *VAR_2)
{
 struct mts_desc* VAR_3 = (struct mts_desc*)(VAR_2->device->host->hostdata[0]);
 int VAR_4;

 FUNC_0();
 FUNC_1(VAR_3);

 VAR_4 = FUNC_2(VAR_3->usb_dev, VAR_3->usb_intf);
 if (VAR_4 == 0) {
  VAR_4 = FUNC_3(VAR_3->usb_dev);
  FUNC_4(VAR_3->usb_dev);
 }
 return VAR_4 ? VAR_0 : VAR_1;
}
