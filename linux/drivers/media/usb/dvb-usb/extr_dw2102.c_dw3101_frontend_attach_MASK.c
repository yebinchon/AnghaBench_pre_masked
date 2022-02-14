
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct dvb_usb_adapter {TYPE_2__* fe_adap; TYPE_1__* dev; } ;
struct TYPE_4__ {int * fe; } ;
struct TYPE_3__ {int i2c_adap; } ;


 int VAR_0 ;
 int * FUNC_0 (int ,int *,int *,int) ;
 int VAR_1 ;
 int FUNC_1 (char*) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_2(struct dvb_usb_adapter *VAR_3)
{
 VAR_3->fe_adap[0].fe = FUNC_0(VAR_2, &VAR_1,
    &VAR_3->dev->i2c_adap, 0x48);
 if (VAR_3->fe_adap[0].fe != ((void*)0)) {
  FUNC_1("Attached tda10023!");
  return 0;
 }
 return -VAR_0;
}
