
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct dvb_usb_adapter {TYPE_1__* fe_adap; TYPE_3__* dev; struct dib0700_adapter_state* priv; } ;
struct TYPE_6__ {scalar_t__ (* i2c_enumeration ) (int *,int,int,int *) ;int (* init ) (int *,int,int *) ;} ;
struct dib0700_adapter_state {TYPE_2__ dib7000p_ops; } ;
struct TYPE_7__ {int i2c_adap; int udev; } ;
struct TYPE_5__ {int fe; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_3__*,int,int) ;
 int FUNC_1 (TYPE_3__*,int ,int *,int ,int *,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int ,TYPE_2__*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*) ;
 scalar_t__ FUNC_5 (int *,int,int,int *) ;
 int FUNC_6 (int *,int,int *) ;
 scalar_t__ FUNC_7 (int ,int ,int) ;

__attribute__((used)) static int FUNC_8(struct dvb_usb_adapter *VAR_5)
{
 struct dib0700_adapter_state *VAR_6 = VAR_5->priv;

 if (FUNC_7(VAR_5->dev->udev, 0, 1) < 0)
  FUNC_3("set interface failed");

 FUNC_1(VAR_5->dev, VAR_0, ((void*)0), 0, ((void*)0), 0);

 FUNC_0(VAR_5->dev, 0x02, 1);

 if (!FUNC_2(VAR_4, &VAR_6->dib7000p_ops))
  return -VAR_2;

 if (VAR_6->dib7000p_ops.i2c_enumeration(&VAR_5->dev->i2c_adap, 1, 18,
      &VAR_3) < 0) {
  FUNC_4("Unable to enumerate dib7000p\n");
  return -VAR_2;
 }

 VAR_5->fe_adap[0].fe = VAR_6->dib7000p_ops.init(&VAR_5->dev->i2c_adap,
             0x80,
             &VAR_3);
 if (!VAR_5->fe_adap[0].fe)
  return -VAR_1;

 return 0;
}
