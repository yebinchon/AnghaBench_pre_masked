
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct us_data {TYPE_1__* pusb_dev; int dflags; int pusb_intf; } ;
struct TYPE_4__ {int quirks; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ,int *) ;
 int FUNC_1 (TYPE_1__*,int ) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (struct us_data*,char*,...) ;
 int FUNC_4 (TYPE_1__*) ;

int FUNC_5(struct us_data *VAR_4)
{
 int VAR_5;


 if (VAR_4->pusb_dev->quirks & VAR_2)
  return -VAR_1;

 VAR_5 = FUNC_1(VAR_4->pusb_dev, VAR_4->pusb_intf);
 if (VAR_5 < 0)
  FUNC_3(VAR_4, "unable to lock device for reset: %d\n",
        VAR_5);
 else {

  if (FUNC_0(VAR_3, &VAR_4->dflags)) {
   VAR_5 = -VAR_0;
   FUNC_3(VAR_4, "No reset during disconnect\n");
  } else {
   VAR_5 = FUNC_2(VAR_4->pusb_dev);
   FUNC_3(VAR_4, "usb_reset_device returns %d\n",
         VAR_5);
  }
  FUNC_4(VAR_4->pusb_dev);
 }
 return VAR_5;
}
