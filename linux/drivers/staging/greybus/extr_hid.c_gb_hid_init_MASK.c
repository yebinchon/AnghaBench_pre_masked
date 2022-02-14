
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int * parent; } ;
struct hid_device {int vendor; int product; int name; TYPE_2__ dev; int * ll_driver; struct gb_hid* driver_data; int country; void* version; } ;
struct TYPE_5__ {int bCountryCode; int wProductID; int wVendorID; int bcdHID; } ;
struct gb_hid {TYPE_4__* connection; TYPE_1__ hdesc; struct hid_device* hid; } ;
struct TYPE_8__ {TYPE_3__* bundle; } ;
struct TYPE_7__ {int dev; } ;


 char* FUNC_0 (int *) ;
 int FUNC_1 (struct gb_hid*) ;
 int VAR_0 ;
 void* FUNC_2 (int ) ;
 int FUNC_3 (int ,int,char*,char*,int,int) ;

__attribute__((used)) static int FUNC_4(struct gb_hid *VAR_1)
{
 struct hid_device *VAR_2 = VAR_1->hid;
 int VAR_3;

 VAR_3 = FUNC_1(VAR_1);
 if (VAR_3)
  return VAR_3;

 VAR_2->version = FUNC_2(VAR_1->hdesc.bcdHID);
 VAR_2->vendor = FUNC_2(VAR_1->hdesc.wVendorID);
 VAR_2->product = FUNC_2(VAR_1->hdesc.wProductID);
 VAR_2->country = VAR_1->hdesc.bCountryCode;

 VAR_2->driver_data = VAR_1;
 VAR_2->ll_driver = &VAR_0;
 VAR_2->dev.parent = &VAR_1->connection->bundle->dev;



 FUNC_3(VAR_2->name, sizeof(VAR_2->name), "%s %04X:%04X",
   FUNC_0(&VAR_1->connection->bundle->dev),
   VAR_2->vendor, VAR_2->product);

 return 0;
}
