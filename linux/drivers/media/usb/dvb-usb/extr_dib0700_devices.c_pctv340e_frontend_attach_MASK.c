
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct dvb_usb_adapter {TYPE_1__* fe_adap; TYPE_3__* dev; struct dib0700_adapter_state* priv; } ;
struct dib0700_state {int is_dib7000pc; } ;
struct TYPE_6__ {scalar_t__ (* dib7000pc_detection ) (int *) ;int * (* init ) (int *,int,int *) ;int set_wbd_ref; } ;
struct dib0700_adapter_state {TYPE_2__ dib7000p_ops; } ;
struct TYPE_7__ {int i2c_adap; struct dib0700_state* priv; } ;
struct TYPE_5__ {int * fe; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (TYPE_3__*,int,int) ;
 int FUNC_1 (TYPE_3__*,int ,int ,int) ;
 int VAR_6 ;
 int FUNC_2 (int ,TYPE_2__*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int) ;
 int VAR_7 ;
 scalar_t__ FUNC_5 (int *) ;
 int * FUNC_6 (int *,int,int *) ;

__attribute__((used)) static int FUNC_7(struct dvb_usb_adapter *VAR_8)
{
 struct dib0700_state *VAR_9 = VAR_8->dev->priv;
 struct dib0700_adapter_state *VAR_10 = VAR_8->priv;

 if (!FUNC_2(VAR_6, &VAR_10->dib7000p_ops))
  return -VAR_0;


 FUNC_1(VAR_8->dev, VAR_3, VAR_5, 0);
 FUNC_4(50);
 FUNC_1(VAR_8->dev, VAR_3, VAR_5, 1);
 FUNC_4(100);


 FUNC_1(VAR_8->dev, VAR_1, VAR_5, 0);
 FUNC_4(1);
 FUNC_1(VAR_8->dev, VAR_1, VAR_5, 1);


 FUNC_1(VAR_8->dev, VAR_4, VAR_5, 1);


 FUNC_1(VAR_8->dev, VAR_2, VAR_5, 1);


 FUNC_0(VAR_8->dev, 72, 1);

 FUNC_4(500);

 if (VAR_10->dib7000p_ops.dib7000pc_detection(&VAR_8->dev->i2c_adap) == 0) {

  FUNC_3(VAR_10->dib7000p_ops.set_wbd_ref);
  return -VAR_0;
 }

 VAR_8->fe_adap[0].fe = VAR_10->dib7000p_ops.init(&VAR_8->dev->i2c_adap, 0x12,
         &VAR_7);
 VAR_9->is_dib7000pc = 1;

 return VAR_8->fe_adap[0].fe == ((void*)0) ? -VAR_0 : 0;
}
