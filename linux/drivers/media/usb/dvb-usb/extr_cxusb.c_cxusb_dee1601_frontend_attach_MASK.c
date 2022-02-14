
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct dvb_usb_adapter {TYPE_1__* fe_adap; TYPE_2__* dev; } ;
struct TYPE_4__ {int i2c_adap; int udev; } ;
struct TYPE_3__ {void* fe; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*,int ,int *,int ,int *,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 void* FUNC_1 (int ,int *,int *) ;
 int FUNC_2 (char*) ;
 int VAR_4 ;
 scalar_t__ FUNC_3 (int ,int ,int ) ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_4(struct dvb_usb_adapter *VAR_6)
{
 if (FUNC_3(VAR_6->dev->udev, 0, 0) < 0)
  FUNC_2("set interface failed");

 FUNC_0(VAR_6->dev, VAR_0, ((void*)0), 0, ((void*)0), 0);

 VAR_6->fe_adap[0].fe = FUNC_1(VAR_4, &VAR_2,
      &VAR_6->dev->i2c_adap);
 if (VAR_6->fe_adap[0].fe)
  return 0;

 VAR_6->fe_adap[0].fe = FUNC_1(VAR_5,
      &VAR_3,
      &VAR_6->dev->i2c_adap);
 if (VAR_6->fe_adap[0].fe)
  return 0;

 return -VAR_1;
}
