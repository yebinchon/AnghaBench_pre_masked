
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct as10x_bus_adapter_t {TYPE_1__* usb_dev; } ;
struct TYPE_3__ {int dev; } ;


 int FUNC_0 (int *,char*,int,...) ;
 int FUNC_1 (TYPE_1__*,int ,unsigned char*,int,int*,int) ;
 int FUNC_2 (TYPE_1__*,int) ;

__attribute__((used)) static int FUNC_3(struct as10x_bus_adapter_t *VAR_0,
     unsigned char *VAR_1,
     int VAR_2,
     int VAR_3)
{
 int VAR_4, VAR_5;

 VAR_4 = FUNC_1(VAR_0->usb_dev,
      FUNC_2(VAR_0->usb_dev, 1),
      VAR_1, VAR_2, &VAR_5, 200);
 if (VAR_4) {
  FUNC_0(&VAR_0->usb_dev->dev,
   "usb_bulk_msg(send) failed, err %i\n", VAR_4);
  return VAR_4;
 }

 if (VAR_5 != VAR_2) {
  FUNC_0(&VAR_0->usb_dev->dev, "only wrote %d of %d bytes\n",
   VAR_5, VAR_2);
  return -1;
 }
 return VAR_5;
}
