
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct i2c_msg {int addr; char* len; int flags; int buf; } ;
struct i2c_adapter {struct em28xx_i2c_bus* algo_data; } ;
struct em28xx_i2c_bus {unsigned int bus; scalar_t__ algo_type; struct em28xx* dev; } ;
struct em28xx {unsigned int cur_i2c_bus; int i2c_bus_lock; scalar_t__ disconnected; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int,char*,char*,char*,int,char*,char*,int) ;
 int FUNC_1 (struct em28xx*,int ,scalar_t__,scalar_t__) ;
 int FUNC_2 (struct em28xx_i2c_bus*,int) ;
 int FUNC_3 (struct em28xx_i2c_bus*,struct i2c_msg) ;
 int FUNC_4 (struct em28xx_i2c_bus*,struct i2c_msg,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7(struct i2c_adapter *VAR_7,
      struct i2c_msg VAR_8[], int VAR_9)
{
 struct em28xx_i2c_bus *VAR_10 = VAR_7->algo_data;
 struct em28xx *VAR_11 = VAR_10->dev;
 unsigned int VAR_12 = VAR_10->bus;
 int VAR_13, VAR_14, VAR_15;
 u8 VAR_16;






 if (VAR_11->disconnected)
  return -VAR_4;

 if (!FUNC_5(&VAR_11->i2c_bus_lock))
  return -VAR_0;


 if (VAR_12 != VAR_11->cur_i2c_bus &&
     VAR_10->algo_type == VAR_2) {
  if (VAR_12 == 1)
   VAR_16 = VAR_1;
  else
   VAR_16 = 0;
  FUNC_1(VAR_11, VAR_3, VAR_16,
          VAR_1);
  VAR_11->cur_i2c_bus = VAR_12;
 }

 for (VAR_15 = 0; VAR_15 < VAR_9; VAR_15++) {
  VAR_13 = VAR_8[VAR_15].addr << 1;
  if (!VAR_8[VAR_15].len) {




   VAR_14 = FUNC_2(VAR_10, VAR_13);

   if (VAR_14 == -VAR_5)
    VAR_14 = -VAR_4;
  } else if (VAR_8[VAR_15].flags & VAR_6) {

   VAR_14 = FUNC_3(VAR_10, VAR_8[VAR_15]);
  } else {

   VAR_14 = FUNC_4(VAR_10, VAR_8[VAR_15], VAR_15 == VAR_9 - 1);
  }

  if (VAR_14 < 0)
   goto error;

  FUNC_0(2, "%s %s addr=%02x len=%d: %*ph\n",
   (VAR_8[VAR_15].flags & VAR_6) ? "read" : "write",
   VAR_15 == VAR_9 - 1 ? "stop" : "nonstop",
   VAR_13, VAR_8[VAR_15].len,
   VAR_8[VAR_15].len, VAR_8[VAR_15].buf);
 }

 FUNC_6(&VAR_11->i2c_bus_lock);
 return VAR_9;

error:
 FUNC_0(2, "%s %s addr=%02x len=%d: %sERROR: %i\n",
  (VAR_8[VAR_15].flags & VAR_6) ? "read" : "write",
  VAR_15 == VAR_9 - 1 ? "stop" : "nonstop",
  VAR_13, VAR_8[VAR_15].len,
  (VAR_14 == -VAR_4) ? "no device " : "",
  VAR_14);

 FUNC_6(&VAR_11->i2c_bus_lock);
 return VAR_14;
}
