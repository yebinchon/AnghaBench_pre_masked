
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct as10x_bus_adapter_t {TYPE_1__* usb_dev; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,int,...) ;
 int FUNC_1 (TYPE_1__*,int ,unsigned char*,int,int*,int) ;
 int FUNC_2 (TYPE_1__*,int) ;

__attribute__((used)) static int FUNC_3(struct as10x_bus_adapter_t *VAR_1,
     unsigned char *VAR_2, int VAR_3)
{
 int VAR_4, VAR_5;

 if (VAR_2 == ((void*)0))
  return -VAR_0;

 VAR_4 = FUNC_1(VAR_1->usb_dev,
      FUNC_2(VAR_1->usb_dev, 2),
      VAR_2, VAR_3, &VAR_5, 200);
 if (VAR_4) {
  FUNC_0(&VAR_1->usb_dev->dev,
   "usb_bulk_msg(recv) failed, err %i\n", VAR_4);
  return VAR_4;
 }

 if (VAR_5 != VAR_3) {
  FUNC_0(&VAR_1->usb_dev->dev, "only read %d of %d bytes\n",
   VAR_5, VAR_3);
  return -1;
 }
 return VAR_5;
}
