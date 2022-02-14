
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct dvb_usb_adapter {TYPE_2__* fe_adap; TYPE_1__* dev; } ;
struct digitv_state {int is_nxt6000; } ;
struct TYPE_4__ {int * fe; } ;
struct TYPE_3__ {int i2c_adap; struct digitv_state* priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_0 (int ,int *,int *) ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_1(struct dvb_usb_adapter *VAR_5)
{
 struct digitv_state *VAR_6 = VAR_5->dev->priv;

 VAR_5->fe_adap[0].fe = FUNC_0(VAR_3, &VAR_1,
      &VAR_5->dev->i2c_adap);
 if ((VAR_5->fe_adap[0].fe) != ((void*)0)) {
  VAR_6->is_nxt6000 = 0;
  return 0;
 }
 VAR_5->fe_adap[0].fe = FUNC_0(VAR_4,
      &VAR_2,
      &VAR_5->dev->i2c_adap);
 if ((VAR_5->fe_adap[0].fe) != ((void*)0)) {
  VAR_6->is_nxt6000 = 1;
  return 0;
 }
 return -VAR_0;
}
