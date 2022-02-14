
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct usb_interface {int dev; } ;
struct usb_device_id {int dummy; } ;
struct TYPE_3__ {int bNumConfigurations; int idProduct; int idVendor; } ;
struct usb_device {int dev; TYPE_1__ descriptor; } ;
struct firmware {int dummy; } ;
struct TYPE_4__ {char* fw_name1; scalar_t__ vendor; scalar_t__ product; char* fw_name2; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct usb_device*,struct firmware const*,int ) ;
 int FUNC_1 (int *,char*,...) ;
 int FUNC_2 (int *,char*,char const*) ;
 TYPE_2__* VAR_2 ;
 int FUNC_3 (struct usb_interface*) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (struct firmware const*) ;
 scalar_t__ FUNC_6 (struct firmware const**,char const*,int *) ;
 struct usb_device* FUNC_7 (int ) ;
 int FUNC_8 (struct usb_device*) ;

__attribute__((used)) static int FUNC_9(struct usb_interface *VAR_3,
    const struct usb_device_id *VAR_4)
{
 struct usb_device *VAR_5;
 const struct firmware *VAR_6;
 u16 VAR_7, VAR_8;
 const char *VAR_9, *VAR_10;
 int VAR_11;
 int VAR_12;

 VAR_5 = FUNC_7(FUNC_3(VAR_3));
 if (!VAR_5)
  goto failed2;

 if (VAR_5->descriptor.bNumConfigurations != 1) {
  FUNC_1(&VAR_3->dev, "can't handle multiple config\n");
  goto failed2;
 }

 VAR_7 = FUNC_4(VAR_5->descriptor.idVendor);
 VAR_8 = FUNC_4(VAR_5->descriptor.idProduct);

 for (VAR_12 = 0; VAR_2[VAR_12].fw_name1; VAR_12++)
  if (VAR_2[VAR_12].vendor == VAR_7 &&
      VAR_2[VAR_12].product == VAR_8)
   break;


 if (VAR_2[VAR_12].fw_name1 == ((void*)0))
  goto failed2;

 VAR_9 = VAR_2[VAR_12].fw_name1;
 VAR_10 = VAR_2[VAR_12].fw_name2;

 FUNC_2(&VAR_3->dev, "loading firmware %s\n", VAR_9);

 if (FUNC_6(&VAR_6, VAR_9, &VAR_5->dev)) {
  FUNC_1(&VAR_3->dev,
   "unable to load firmware from file \"%s\"\n", VAR_9);
  goto failed2;
 }
 VAR_11 = FUNC_0(VAR_5, VAR_6, VAR_0);
 FUNC_5(VAR_6);
 if (0 != VAR_11) {
  FUNC_1(&VAR_3->dev, "loader download failed\n");
  goto failed2;
 }

 if (VAR_10 == ((void*)0))
  return 0;

 if (FUNC_6(&VAR_6, VAR_10, &VAR_5->dev)) {
  FUNC_1(&VAR_3->dev,
   "unable to load firmware from file \"%s\"\n", VAR_10);
  goto failed2;
 }
 VAR_11 = FUNC_0(VAR_5, VAR_6, VAR_0);
 FUNC_5(VAR_6);
 if (0 != VAR_11) {
  FUNC_1(&VAR_3->dev, "firmware download failed\n");
  goto failed2;
 }
 return 0;

failed2:
 FUNC_8(VAR_5);
 FUNC_1(&VAR_3->dev, "probe failed\n");
 return -VAR_1;
}
