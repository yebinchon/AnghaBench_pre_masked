
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct dvb_usb_adapter {TYPE_2__* dev; TYPE_1__* fe_adap; } ;
struct TYPE_4__ {int i2c_adap; } ;
struct TYPE_3__ {int fe; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int *,int *) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_1(struct dvb_usb_adapter *VAR_2)
{
 FUNC_0(VAR_1, VAR_2->fe_adap[0].fe,
     &VAR_2->dev->i2c_adap, &VAR_0);
 return 0;
}
