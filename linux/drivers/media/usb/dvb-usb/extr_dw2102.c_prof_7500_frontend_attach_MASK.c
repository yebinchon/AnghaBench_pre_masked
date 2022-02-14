
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
struct dvb_usb_adapter {TYPE_2__* dev; TYPE_3__* fe_adap; } ;
struct TYPE_5__ {int set_voltage; } ;
struct TYPE_8__ {TYPE_1__ ops; } ;
struct TYPE_7__ {TYPE_4__* fe; } ;
struct TYPE_6__ {int udev; int i2c_adap; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_4__* FUNC_0 (int ,int *,int *,int ) ;
 int FUNC_1 (int ,int,int ,int ,int*,int,int ) ;
 int VAR_2 ;
 int FUNC_2 (char*) ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_3(struct dvb_usb_adapter *VAR_5)
{
 u8 VAR_6[] = {7, 1};

 VAR_5->fe_adap[0].fe = FUNC_0(VAR_4, &VAR_3,
     &VAR_5->dev->i2c_adap, 0);
 if (VAR_5->fe_adap[0].fe == ((void*)0))
  return -VAR_1;

 VAR_5->fe_adap[0].fe->ops.set_voltage = VAR_2;

 FUNC_1(VAR_5->dev->udev, 0x8a, 0, 0, VAR_6, 2, VAR_0);

 FUNC_2("Attached STV0900+STB6100A!");

 return 0;
}
