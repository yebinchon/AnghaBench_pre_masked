
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct dvb_usb_adapter {TYPE_1__* fe_adap; TYPE_2__* dev; } ;
struct dib0700_state {int fw_use_new_i2c_api; int disable_streaming_master_mode; } ;
struct TYPE_4__ {int i2c_adap; struct dib0700_state* priv; } ;
struct TYPE_3__ {int * fe; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (TYPE_2__*,int ,int ,int) ;
 int * FUNC_1 (int ,int *,int *) ;
 int FUNC_2 (int) ;
 int VAR_10 ;
 int VAR_11 ;

__attribute__((used)) static int FUNC_3(struct dvb_usb_adapter *VAR_12)
{
 struct dib0700_state *VAR_13 = VAR_12->dev->priv;


 VAR_13->fw_use_new_i2c_api = 1;


 VAR_13->disable_streaming_master_mode = 1;


 FUNC_0(VAR_12->dev, VAR_1, VAR_9, 0);
 FUNC_0(VAR_12->dev, VAR_4, VAR_9, 0);
 FUNC_0(VAR_12->dev, VAR_6, VAR_9, 1);
 FUNC_2(400);
 FUNC_0(VAR_12->dev, VAR_2, VAR_9, 0);
 FUNC_2(60);
 FUNC_0(VAR_12->dev, VAR_2, VAR_9, 1);
 FUNC_2(30);
 FUNC_0(VAR_12->dev, VAR_1, VAR_9, 1);
 FUNC_0(VAR_12->dev, VAR_8, VAR_9, 1);
 FUNC_0(VAR_12->dev, VAR_5, VAR_9, 1);
 FUNC_0(VAR_12->dev, VAR_7, VAR_9, 1);
 FUNC_0(VAR_12->dev, VAR_3, VAR_9, 0);
 FUNC_2(30);


 FUNC_0(VAR_12->dev, VAR_3, VAR_9, 1);


 VAR_12->fe_adap[0].fe = FUNC_1(VAR_11, &VAR_10,
         &VAR_12->dev->i2c_adap);
 return VAR_12->fe_adap[0].fe == ((void*)0) ? -VAR_0 : 0;
}
