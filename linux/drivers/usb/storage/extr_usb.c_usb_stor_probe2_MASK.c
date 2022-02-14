
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct us_data {scalar_t__ transport; int fflags; int max_lun; TYPE_1__* pusb_intf; int scan_dwork; int dflags; int scsi_name; int protocol_name; int transport_name; int proto_handler; } ;
struct device {int dummy; } ;
struct TYPE_6__ {int this_id; int max_id; int no_scsi2_lun_in_cdb; } ;
struct TYPE_5__ {struct device dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct device*,char*) ;
 char* FUNC_1 (struct device*) ;
 int FUNC_2 (struct device*,char*) ;
 int FUNC_3 (struct us_data*) ;
 int FUNC_4 (int ,int *,int) ;
 int FUNC_5 (struct us_data*) ;
 int FUNC_6 (TYPE_3__*,struct device*) ;
 int FUNC_7 (int ,int *) ;
 int FUNC_8 (int ,int,char*,char*) ;
 int VAR_8 ;
 TYPE_3__* FUNC_9 (struct us_data*) ;
 int FUNC_10 (TYPE_1__*) ;
 int FUNC_11 (TYPE_1__*) ;
 scalar_t__ VAR_9 ;
 int FUNC_12 (struct us_data*) ;
 int FUNC_13 (struct us_data*,char*,...) ;

int FUNC_14(struct us_data *VAR_10)
{
 int VAR_11;
 struct device *VAR_12 = &VAR_10->pusb_intf->dev;


 if (!VAR_10->transport || !VAR_10->proto_handler) {
  VAR_11 = -VAR_0;
  goto BadDevice;
 }
 FUNC_13(VAR_10, "Transport: %s\n", VAR_10->transport_name);
 FUNC_13(VAR_10, "Protocol: %s\n", VAR_10->protocol_name);

 if (VAR_10->fflags & VAR_5) {




  VAR_10->max_lun = 7;

  FUNC_9(VAR_10)->this_id = 7;

 } else {

  FUNC_9(VAR_10)->max_id = 1;





  if (VAR_10->transport == VAR_9)
   FUNC_9(VAR_10)->no_scsi2_lun_in_cdb = 1;
 }


 if (VAR_10->fflags & VAR_6)
  VAR_10->max_lun = 0;


 VAR_11 = FUNC_3(VAR_10);
 if (VAR_11)
  goto BadDevice;





 if (VAR_10->fflags & VAR_4)
  FUNC_7(VAR_2, &VAR_10->dflags);


 VAR_11 = FUNC_12(VAR_10);
 if (VAR_11)
  goto BadDevice;
 FUNC_10(VAR_10->pusb_intf);
 FUNC_8(VAR_10->scsi_name, sizeof(VAR_10->scsi_name), "usb-storage %s",
     FUNC_1(&VAR_10->pusb_intf->dev));
 VAR_11 = FUNC_6(FUNC_9(VAR_10), VAR_12);
 if (VAR_11) {
  FUNC_2(VAR_12,
    "Unable to add the scsi host\n");
  goto HostAddErr;
 }


 FUNC_7(VAR_3, &VAR_10->dflags);

 if (VAR_7 > 0)
  FUNC_0(VAR_12, "waiting for device to settle before scanning\n");
 FUNC_4(VAR_8, &VAR_10->scan_dwork,
   VAR_7 * VAR_1);
 return 0;


HostAddErr:
 FUNC_11(VAR_10->pusb_intf);
BadDevice:
 FUNC_13(VAR_10, "storage_probe() failed\n");
 FUNC_5(VAR_10);
 return VAR_11;
}
