
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct dvb_usb_adapter {TYPE_1__* fe_adap; TYPE_4__* dev; struct dib0700_adapter_state* priv; } ;
struct dib0700_state {int* mt2060_if1; int is_dib7000pc; } ;
struct TYPE_7__ {int * (* init ) (int *,int,int *) ;scalar_t__ (* dib7000pc_detection ) (int *) ;} ;
struct dib0700_adapter_state {TYPE_2__ dib7000p_ops; } ;
struct TYPE_8__ {int i2c_adap; struct dib0700_state* priv; } ;
struct TYPE_6__ {int * fe; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (TYPE_4__*,int,int) ;
 int FUNC_1 (TYPE_4__*,int ,int ,int) ;
 int VAR_6 ;
 int VAR_7 ;
 int * FUNC_2 (int ,TYPE_2__*,...) ;
 int FUNC_3 (TYPE_2__*,int ,int) ;
 int FUNC_4 (int) ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_5 (int *) ;
 int * FUNC_6 (int *,int,int *) ;

__attribute__((used)) static int FUNC_7(struct dvb_usb_adapter *VAR_10)
{
 struct dib0700_state *VAR_11 = VAR_10->dev->priv;
 struct dib0700_adapter_state *VAR_12 = VAR_10->priv;

 if (!FUNC_2(VAR_7, &VAR_12->dib7000p_ops))
  return -VAR_0;



 FUNC_1(VAR_10->dev, VAR_2, VAR_5, 0);
 FUNC_1(VAR_10->dev, VAR_3, VAR_5, 0); FUNC_4(50);

 FUNC_1(VAR_10->dev, VAR_3, VAR_5, 1); FUNC_4(10);
 FUNC_1(VAR_10->dev, VAR_4, VAR_5, 1);

 FUNC_1(VAR_10->dev, VAR_2, VAR_5, 0); FUNC_4(10);
 FUNC_0(VAR_10->dev, 72, 1);
 FUNC_1(VAR_10->dev, VAR_2, VAR_5, 1); FUNC_4(100);

 FUNC_1(VAR_10->dev, VAR_1, VAR_5, 1);

 VAR_11->mt2060_if1[0] = 1220;

 if (VAR_12->dib7000p_ops.dib7000pc_detection(&VAR_10->dev->i2c_adap)) {
  VAR_10->fe_adap[0].fe = VAR_12->dib7000p_ops.init(&VAR_10->dev->i2c_adap, 18, &VAR_9);
  VAR_11->is_dib7000pc = 1;
 } else {
  FUNC_3(&VAR_12->dib7000p_ops, 0, sizeof(VAR_12->dib7000p_ops));
  VAR_10->fe_adap[0].fe = FUNC_2(VAR_6, &VAR_10->dev->i2c_adap, 18, &VAR_8);
 }

 return VAR_10->fe_adap[0].fe == ((void*)0) ? -VAR_0 : 0;
}
