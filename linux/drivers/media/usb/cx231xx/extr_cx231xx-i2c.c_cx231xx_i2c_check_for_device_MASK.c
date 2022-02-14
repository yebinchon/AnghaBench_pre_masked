
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct i2c_msg {int addr; } ;
struct i2c_adapter {struct cx231xx_i2c* algo_data; } ;
struct cx231xx_i2c_xfer_data {int buf_size; int * p_buffer; scalar_t__ saddr_dat; scalar_t__ saddr_len; int direction; int dev_addr; } ;
struct cx231xx_i2c {struct cx231xx* dev; } ;
struct cx231xx {int (* cx231xx_send_usb_command ) (struct cx231xx_i2c*,struct cx231xx_i2c_xfer_data*) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct cx231xx_i2c*,struct cx231xx_i2c_xfer_data*) ;

__attribute__((used)) static int FUNC_1(struct i2c_adapter *VAR_1,
     const struct i2c_msg *VAR_2)
{
 struct cx231xx_i2c *VAR_3 = VAR_1->algo_data;
 struct cx231xx *VAR_4 = VAR_3->dev;
 struct cx231xx_i2c_xfer_data VAR_5;
 int VAR_6 = 0;
 u8 VAR_7[1];


 VAR_5.dev_addr = VAR_2->addr;
 VAR_5.direction = VAR_0;
 VAR_5.saddr_len = 0;
 VAR_5.saddr_dat = 0;
 VAR_5.buf_size = 1;
 VAR_5.p_buffer = VAR_7;


 VAR_6 = VAR_4->cx231xx_send_usb_command(VAR_3, &VAR_5);

 return VAR_6 < 0 ? VAR_6 : 0;
}
