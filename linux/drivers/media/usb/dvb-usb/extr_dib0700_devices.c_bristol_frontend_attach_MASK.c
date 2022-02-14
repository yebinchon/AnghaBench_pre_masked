
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct dvb_usb_adapter {size_t id; TYPE_2__* dev; TYPE_1__* fe_adap; } ;
struct dib0700_state {int* mt2060_if1; } ;
struct TYPE_4__ {int i2c_adap; struct dib0700_state* priv; } ;
struct TYPE_3__ {int * fe; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int * VAR_6 ;
 int FUNC_0 (TYPE_2__*,int ,int ,int) ;
 int VAR_7 ;
 scalar_t__ FUNC_1 (int *,int,int ,int *) ;
 int * FUNC_2 (int ,int *,int,int *) ;
 scalar_t__ VAR_8 ;
 int FUNC_3 (int) ;

__attribute__((used)) static int FUNC_4(struct dvb_usb_adapter *VAR_9)
{
 struct dib0700_state *VAR_10 = VAR_9->dev->priv;
 if (VAR_9->id == 0) {
  FUNC_0(VAR_9->dev, VAR_4, VAR_5, 0); FUNC_3(10);
  FUNC_0(VAR_9->dev, VAR_4, VAR_5, 1); FUNC_3(10);
  FUNC_0(VAR_9->dev, VAR_3, VAR_5, 0); FUNC_3(10);
  FUNC_0(VAR_9->dev, VAR_3, VAR_5, 1); FUNC_3(10);

  if (VAR_8)
   FUNC_0(VAR_9->dev, VAR_2, VAR_5, 1);
  else
   FUNC_0(VAR_9->dev, VAR_2, VAR_5, 0);

  if (FUNC_1(&VAR_9->dev->i2c_adap, 2, VAR_0, VAR_6) != 0) {
   FUNC_0(VAR_9->dev, VAR_4, VAR_5, 0); FUNC_3(10);
   return -VAR_1;
  }
 }
 VAR_10->mt2060_if1[VAR_9->id] = 1220;
 return (VAR_9->fe_adap[0].fe = FUNC_2(VAR_7, &VAR_9->dev->i2c_adap,
  (10 + VAR_9->id) << 1, &VAR_6[VAR_9->id])) == ((void*)0) ? -VAR_1 : 0;
}
