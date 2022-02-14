
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct i2c_adapter {int dummy; } ;
struct dvb_usb_adapter {size_t id; TYPE_4__* fe_adap; TYPE_3__* dev; } ;
typedef int s8 ;
struct TYPE_8__ {int fe; } ;
struct TYPE_7__ {TYPE_2__* udev; struct i2c_adapter i2c_adap; } ;
struct TYPE_5__ {scalar_t__ idVendor; scalar_t__ idProduct; } ;
struct TYPE_6__ {TYPE_1__ descriptor; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int * VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 struct i2c_adapter* FUNC_1 (int ,int) ;
 int * FUNC_2 (int ,int ,struct i2c_adapter*,int *,int) ;
 int FUNC_3 (struct i2c_adapter*,size_t,int*) ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_4(struct dvb_usb_adapter *VAR_5)
{
 struct i2c_adapter *VAR_6 = &VAR_5->dev->i2c_adap;
 struct i2c_adapter *VAR_7 = FUNC_1(VAR_5->fe_adap[0].fe, 1);
 s8 VAR_8;
 int VAR_9=1220;
 if (VAR_5->dev->udev->descriptor.idVendor == FUNC_0(VAR_2) &&
  VAR_5->dev->udev->descriptor.idProduct == FUNC_0(VAR_1)) {
  if (!FUNC_3(VAR_6,0x59 + VAR_5->id,&VAR_8)) VAR_9=1220+VAR_8;
 }
 return FUNC_2(VAR_4, VAR_5->fe_adap[0].fe, VAR_7,
     &VAR_3[VAR_5->id], VAR_9) == ((void*)0) ?
     -VAR_0 : 0;
}
