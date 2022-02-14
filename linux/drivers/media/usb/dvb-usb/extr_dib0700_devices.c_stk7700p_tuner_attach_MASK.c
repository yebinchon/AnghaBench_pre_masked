
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct i2c_adapter {int dummy; } ;
struct dvb_usb_adapter {TYPE_5__* fe_adap; TYPE_3__* dev; struct dib0700_adapter_state* priv; } ;
struct dib0700_state {scalar_t__ is_dib7000pc; } ;
struct TYPE_9__ {struct i2c_adapter* (* get_i2c_master ) (int ,int ,int) ;} ;
struct dib0700_adapter_state {TYPE_4__ dib7000p_ops; } ;
typedef int s8 ;
struct TYPE_10__ {int fe; } ;
struct TYPE_8__ {TYPE_2__* udev; struct dib0700_state* priv; struct i2c_adapter i2c_adap; } ;
struct TYPE_6__ {scalar_t__ idVendor; scalar_t__ idProduct; } ;
struct TYPE_7__ {TYPE_1__ descriptor; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 struct i2c_adapter* FUNC_1 (int ,int ,int) ;
 int * FUNC_2 (int ,int ,struct i2c_adapter*,int *,int) ;
 int FUNC_3 (struct i2c_adapter*,int,int*) ;
 int VAR_4 ;
 int VAR_5 ;
 struct i2c_adapter* FUNC_4 (int ,int ,int) ;

__attribute__((used)) static int FUNC_5(struct dvb_usb_adapter *VAR_6)
{
 struct i2c_adapter *VAR_7 = &VAR_6->dev->i2c_adap;
 struct dib0700_state *VAR_8 = VAR_6->dev->priv;
 struct i2c_adapter *VAR_9;
 struct dib0700_adapter_state *VAR_10 = VAR_6->priv;
 s8 VAR_11;
 int VAR_12=1220;

 if (VAR_6->dev->udev->descriptor.idVendor == FUNC_0(VAR_3) &&
  VAR_6->dev->udev->descriptor.idProduct == FUNC_0(VAR_2)) {
  if (!FUNC_3(VAR_7,0x58,&VAR_11)) VAR_12=1220+VAR_11;
 }
 if (VAR_8->is_dib7000pc)
  VAR_9 = VAR_10->dib7000p_ops.get_i2c_master(VAR_6->fe_adap[0].fe, VAR_0, 1);
 else
  VAR_9 = FUNC_1(VAR_6->fe_adap[0].fe, VAR_0, 1);

 return FUNC_2(VAR_4, VAR_6->fe_adap[0].fe, VAR_9, &VAR_5,
  VAR_12) == ((void*)0) ? -VAR_1 : 0;
}
