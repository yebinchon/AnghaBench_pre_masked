
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct usb_device_id {int idProduct; int idVendor; } ;
struct TYPE_9__ {int vendor; int product; } ;
struct TYPE_8__ {int qx3_detected; } ;
struct TYPE_7__ {int gainMode; } ;
struct TYPE_6__ {int firmwareVersion; int firmwareRevision; } ;
struct TYPE_10__ {TYPE_4__ pnpID; TYPE_3__ qx3; TYPE_2__ exposure; TYPE_1__ version; } ;
struct sd {int mainsFreq; TYPE_5__ params; } ;
struct cam {int nmodes; int cam_mode; } ;
struct gspca_dev {struct cam cam; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (struct gspca_dev*) ;
 int FUNC_2 (struct gspca_dev*) ;
 int FUNC_3 (struct gspca_dev*,int ,char*,int ,int ) ;
 int FUNC_4 (struct gspca_dev*,char*,int) ;
 int VAR_4 ;
 int FUNC_5 (struct gspca_dev*) ;

__attribute__((used)) static int FUNC_6(struct gspca_dev *VAR_5,
   const struct usb_device_id *VAR_6)
{
 struct sd *VAR_7 = (struct sd *) VAR_5;
 struct cam *VAR_8;
 int VAR_9;

 VAR_7->mainsFreq = VAR_2 == VAR_3;
 FUNC_5(VAR_5);

 FUNC_3(VAR_5, VAR_0, "cpia CPiA camera detected (vid/pid 0x%04X:0x%04X)\n",
    VAR_6->idVendor, VAR_6->idProduct);

 VAR_8 = &VAR_5->cam;
 VAR_8->cam_mode = VAR_4;
 VAR_8->nmodes = FUNC_0(VAR_4);

 VAR_9 = FUNC_2(VAR_5);
 if (VAR_9)
  FUNC_4(VAR_5, "Cannot go to low power mode: %d\n",
     VAR_9);

 VAR_7->params.version.firmwareVersion = 0;
 FUNC_1(VAR_5);
 if (VAR_7->params.version.firmwareVersion != 1) {
  FUNC_4(VAR_5, "only firmware version 1 is supported (got: %d)\n",
     VAR_7->params.version.firmwareVersion);
  return -VAR_1;
 }


 if (VAR_7->params.version.firmwareRevision <= 2 &&
     VAR_7->params.exposure.gainMode > 2) {
  VAR_7->params.exposure.gainMode = 2;
 }


 VAR_7->params.qx3.qx3_detected = (VAR_7->params.pnpID.vendor == 0x0813 &&
           VAR_7->params.pnpID.product == 0x0001);
 return 0;
}
