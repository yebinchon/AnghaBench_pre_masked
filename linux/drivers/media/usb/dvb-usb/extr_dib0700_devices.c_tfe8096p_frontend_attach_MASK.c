
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u32 ;
struct dvb_usb_adapter {TYPE_1__* fe_adap; TYPE_3__* dev; struct dib0700_adapter_state* priv; } ;
struct dib0700_state {int fw_use_new_i2c_api; } ;
struct TYPE_7__ {int * (* init ) (int *,int,int *) ;int (* i2c_enumeration ) (int *,int,int,int,int) ;} ;
struct dib0700_adapter_state {TYPE_2__ dib8000_ops; } ;
struct TYPE_8__ {int i2c_adap; struct dib0700_state* priv; } ;
struct TYPE_6__ {int * fe; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (TYPE_3__*,int,int) ;
 int FUNC_1 (TYPE_3__*,int *,int *,int*,int *) ;
 int FUNC_2 (TYPE_3__*,int ,int ,int) ;
 int VAR_8 ;
 int FUNC_3 (int ,TYPE_2__*) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int *,int,int,int,int) ;
 int * FUNC_6 (int *,int,int *) ;
 int VAR_9 ;

__attribute__((used)) static int FUNC_7(struct dvb_usb_adapter *VAR_10)
{
 struct dib0700_state *VAR_11 = VAR_10->dev->priv;
 u32 VAR_12;
 struct dib0700_adapter_state *VAR_13 = VAR_10->priv;

 if (!FUNC_3(VAR_8, &VAR_13->dib8000_ops))
  return -VAR_0;

 FUNC_1(VAR_10->dev, ((void*)0), ((void*)0), &VAR_12, ((void*)0));
 if (VAR_12 >= 0x10200)
  VAR_11->fw_use_new_i2c_api = 1;

 FUNC_2(VAR_10->dev, VAR_4, VAR_7, 1);
 FUNC_4(20);
 FUNC_2(VAR_10->dev, VAR_6, VAR_7, 1);
 FUNC_2(VAR_10->dev, VAR_3, VAR_7, 1);
 FUNC_2(VAR_10->dev, VAR_5, VAR_7, 1);

 FUNC_2(VAR_10->dev, VAR_2, VAR_7, 0);

 FUNC_0(VAR_10->dev, 72, 1);

 FUNC_4(20);
 FUNC_2(VAR_10->dev, VAR_2, VAR_7, 1);
 FUNC_4(20);
 FUNC_2(VAR_10->dev, VAR_1, VAR_7, 1);

 VAR_13->dib8000_ops.i2c_enumeration(&VAR_10->dev->i2c_adap, 1, 0x10, 0x80, 1);

 VAR_10->fe_adap[0].fe = VAR_13->dib8000_ops.init(&VAR_10->dev->i2c_adap,
          0x80, &VAR_9);

 return VAR_10->fe_adap[0].fe == ((void*)0) ? -VAR_0 : 0;
}
