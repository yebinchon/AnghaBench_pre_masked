
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct dvb_usb_adapter {TYPE_2__* dev; TYPE_1__* fe_adap; } ;
struct TYPE_6__ {int callback; } ;
struct TYPE_5__ {int i2c_adap; } ;
struct TYPE_4__ {TYPE_3__* fe; } ;


 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 (int ,TYPE_3__*,int *,int *) ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_1(struct dvb_usb_adapter *VAR_4)
{

 VAR_4->fe_adap[0].fe->callback = VAR_1;

 return FUNC_0(VAR_3, VAR_4->fe_adap[0].fe, &VAR_4->dev->i2c_adap,
     &VAR_2)
  == ((void*)0) ? -VAR_0 : 0;
}
