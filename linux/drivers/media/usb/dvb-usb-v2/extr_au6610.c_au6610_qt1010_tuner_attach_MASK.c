
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dvb_usb_adapter {int * fe; } ;
struct TYPE_2__ {int i2c_adap; } ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (struct dvb_usb_adapter*) ;
 int VAR_1 ;
 int * FUNC_1 (int ,int ,int *,int *) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_2(struct dvb_usb_adapter *VAR_3)
{
 return FUNC_1(VAR_2, VAR_3->fe[0],
   &FUNC_0(VAR_3)->i2c_adap,
   &VAR_1) == ((void*)0) ? -VAR_0 : 0;
}
