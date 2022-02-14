
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct i2c_msg {int addr; int flags; int len; int* buf; } ;
struct i2c_adapter {int dummy; } ;
struct go7007_usb {int i2c_lock; } ;
struct go7007 {int* usb_buf; scalar_t__ status; struct go7007_usb* hpi_context; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (struct go7007*,int,int ,int ,int*,int,int) ;
 struct go7007* FUNC_1 (struct i2c_adapter*) ;
 int FUNC_2 (int*,int*,int) ;
 int FUNC_3 (int*,int ,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (char*,int,int,...) ;

__attribute__((used)) static int FUNC_7(struct i2c_adapter *VAR_4,
     struct i2c_msg VAR_5[], int VAR_6)
{
 struct go7007 *VAR_7 = FUNC_1(VAR_4);
 struct go7007_usb *VAR_8 = VAR_7->hpi_context;
 u8 *VAR_9 = VAR_7->usb_buf;
 int VAR_10, VAR_11;
 int VAR_12 = -VAR_0;

 if (VAR_7->status == VAR_3)
  return -VAR_1;

 FUNC_4(&VAR_8->i2c_lock);

 for (VAR_11 = 0; VAR_11 < VAR_6; ++VAR_11) {



  if (VAR_11 + 1 < VAR_6 && VAR_5[VAR_11].addr == VAR_5[VAR_11 + 1].addr &&
    !(VAR_5[VAR_11].flags & VAR_2) &&
    (VAR_5[VAR_11 + 1].flags & VAR_2)) {




   VAR_9[0] = 0x01;
   VAR_9[1] = VAR_5[VAR_11].len + 1;
   VAR_9[2] = VAR_5[VAR_11].addr << 1;
   FUNC_2(&VAR_9[3], VAR_5[VAR_11].buf, VAR_5[VAR_11].len);
   VAR_10 = VAR_5[VAR_11].len + 3;
   VAR_9[VAR_10++] = VAR_5[++VAR_11].len;
  } else if (VAR_5[VAR_11].flags & VAR_2) {




   VAR_9[0] = 0x01;
   VAR_9[1] = 1;
   VAR_9[2] = VAR_5[VAR_11].addr << 1;
   VAR_9[3] = VAR_5[VAR_11].len;
   VAR_10 = 4;
  } else {




   VAR_9[0] = 0x00;
   VAR_9[1] = VAR_5[VAR_11].len + 1;
   VAR_9[2] = VAR_5[VAR_11].addr << 1;
   FUNC_2(&VAR_9[3], VAR_5[VAR_11].buf, VAR_5[VAR_11].len);
   VAR_10 = VAR_5[VAR_11].len + 3;
   VAR_9[VAR_10++] = 0;
  }
  if (FUNC_0(VAR_7, 0x24, 0, 0,
      VAR_9, VAR_10, 0) < 0)
   goto i2c_done;
  if (VAR_5[VAR_11].flags & VAR_2) {
   FUNC_3(VAR_9, 0, VAR_5[VAR_11].len + 1);
   if (FUNC_0(VAR_7, 0x25, 0, 0, VAR_9,
      VAR_5[VAR_11].len + 1, 1) < 0)
    goto i2c_done;
   FUNC_2(VAR_5[VAR_11].buf, VAR_9 + 1, VAR_5[VAR_11].len);
  }
 }
 VAR_12 = VAR_6;

i2c_done:
 FUNC_5(&VAR_8->i2c_lock);
 return VAR_12;
}
