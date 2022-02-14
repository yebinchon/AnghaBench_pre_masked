
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct redrat3_dev {TYPE_3__* udev; int phys; int name; struct device* dev; } ;
struct TYPE_6__ {struct device* parent; } ;
struct rc_dev {int map_name; void* rx_resolution; int driver_name; int s_carrier_report; int s_tx_carrier; int tx_ir; int s_timeout; void* timeout; void* max_timeout; void* min_timeout; int allowed_protocols; struct redrat3_dev* priv; TYPE_2__ dev; int input_id; int input_phys; int device_name; } ;
struct device {int dummy; } ;
struct TYPE_5__ {int idProduct; } ;
struct TYPE_7__ {TYPE_1__ descriptor; } ;


 int VAR_0 ;
 void* FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 void* FUNC_1 (int) ;
 int FUNC_2 (struct device*,char*) ;
 scalar_t__ FUNC_3 (int ) ;
 struct rc_dev* FUNC_4 (int ) ;
 int FUNC_5 (struct rc_dev*) ;
 int FUNC_6 (struct rc_dev*) ;
 int FUNC_7 (struct redrat3_dev*) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_8 (int ,int,char*,char*) ;
 int FUNC_9 (TYPE_3__*,int ,int) ;
 int FUNC_10 (TYPE_3__*,int *) ;

__attribute__((used)) static struct rc_dev *FUNC_11(struct redrat3_dev *VAR_11)
{
 struct device *VAR_12 = VAR_11->dev;
 struct rc_dev *VAR_13;
 int VAR_14;
 u16 VAR_15 = FUNC_3(VAR_11->udev->descriptor.idProduct);

 VAR_13 = FUNC_4(VAR_1);
 if (!VAR_13)
  return ((void*)0);

 FUNC_8(VAR_11->name, sizeof(VAR_11->name),
   "RedRat3%s Infrared Remote Transceiver",
   VAR_15 == VAR_6 ? "-II" : "");

 FUNC_9(VAR_11->udev, VAR_11->phys, sizeof(VAR_11->phys));

 VAR_13->device_name = VAR_11->name;
 VAR_13->input_phys = VAR_11->phys;
 FUNC_10(VAR_11->udev, &VAR_13->input_id);
 VAR_13->dev.parent = VAR_12;
 VAR_13->priv = VAR_11;
 VAR_13->allowed_protocols = VAR_3;
 VAR_13->min_timeout = FUNC_0(VAR_5);
 VAR_13->max_timeout = FUNC_0(VAR_4);
 VAR_13->timeout = FUNC_1(FUNC_7(VAR_11));
 VAR_13->s_timeout = VAR_7;
 VAR_13->tx_ir = VAR_9;
 VAR_13->s_tx_carrier = VAR_8;
 VAR_13->s_carrier_report = VAR_10;
 VAR_13->driver_name = VAR_0;
 VAR_13->rx_resolution = FUNC_1(2);
 VAR_13->map_name = VAR_2;

 VAR_14 = FUNC_6(VAR_13);
 if (VAR_14 < 0) {
  FUNC_2(VAR_12, "remote dev registration failed\n");
  goto out;
 }

 return VAR_13;

out:
 FUNC_5(VAR_13);
 return ((void*)0);
}
