
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mxl111sf_state {scalar_t__ chip_rev; } ;
struct i2c_msg {int flags; int addr; int len; } ;
struct i2c_adapter {int dummy; } ;
struct dvb_usb_device {int i2c_mutex; struct mxl111sf_state* priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 struct dvb_usb_device* FUNC_0 (struct i2c_adapter*) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct mxl111sf_state*,struct i2c_msg*) ;
 int FUNC_4 (struct mxl111sf_state*,struct i2c_msg*) ;
 int FUNC_5 (char*,int,int,int,char*,int ,int ) ;
 scalar_t__ FUNC_6 (int) ;

int FUNC_7(struct i2c_adapter *VAR_4,
        struct i2c_msg VAR_5[], int VAR_6)
{
 struct dvb_usb_device *VAR_7 = FUNC_0(VAR_4);
 struct mxl111sf_state *VAR_8 = VAR_7->priv;
 int VAR_9 = (VAR_8->chip_rev > VAR_3);
 int VAR_10, VAR_11;

 if (FUNC_1(&VAR_7->i2c_mutex) < 0)
  return -VAR_0;

 for (VAR_10 = 0; VAR_10 < VAR_6; VAR_10++) {
  VAR_11 = (VAR_9) ?
   FUNC_3(VAR_8, &VAR_5[VAR_10]) :
   FUNC_4(VAR_8, &VAR_5[VAR_10]);
  if (FUNC_6(VAR_11)) {
   FUNC_5("failed with error %d on i2c transaction %d of %d, %sing %d bytes to/from 0x%02x",
          VAR_11, VAR_10+1, VAR_6,
          (VAR_5[VAR_10].flags & VAR_2) ?
          "read" : "writ",
          VAR_5[VAR_10].len, VAR_5[VAR_10].addr);

   break;
  }
 }

 FUNC_2(&VAR_7->i2c_mutex);

 return VAR_10 == VAR_6 ? VAR_6 : -VAR_1;
}
