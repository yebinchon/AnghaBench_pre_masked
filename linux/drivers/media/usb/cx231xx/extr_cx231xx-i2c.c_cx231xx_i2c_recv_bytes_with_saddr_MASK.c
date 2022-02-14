
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct i2c_msg {int len; int* buf; int flags; int addr; } ;
struct i2c_adapter {struct cx231xx_i2c* algo_data; } ;
struct cx231xx_i2c_xfer_data {int saddr_len; int saddr_dat; int buf_size; int* p_buffer; int direction; int dev_addr; } ;
struct cx231xx_i2c {struct cx231xx* dev; } ;
struct cx231xx {int (* cx231xx_gpio_i2c_write ) (struct cx231xx*,int ,int*,int) ;int (* cx231xx_gpio_i2c_read ) (struct cx231xx*,int ,int*,int) ;int (* cx231xx_send_usb_command ) (struct cx231xx_i2c*,struct cx231xx_i2c_xfer_data*) ;} ;


 int VAR_0 ;
 int FUNC_0 (int,char*,int ,int,int,int) ;
 scalar_t__ FUNC_1 (struct cx231xx*,struct cx231xx_i2c*,struct i2c_msg const*,int ) ;
 int FUNC_2 (struct cx231xx*,int ,int*,int) ;
 int FUNC_3 (struct cx231xx*,int ,int*,int) ;
 int FUNC_4 (struct cx231xx_i2c*,struct cx231xx_i2c_xfer_data*) ;

__attribute__((used)) static int FUNC_5(struct i2c_adapter *VAR_1,
          const struct i2c_msg *VAR_2,
          const struct i2c_msg *VAR_3)
{
 struct cx231xx_i2c *VAR_4 = VAR_1->algo_data;
 struct cx231xx *VAR_5 = VAR_4->dev;
 struct cx231xx_i2c_xfer_data VAR_6;
 int VAR_7 = 0;
 u16 VAR_8 = 0;
 u8 VAR_9 = 0;

 if (VAR_2->len == 2)
  VAR_8 = VAR_2->buf[0] << 8 | VAR_2->buf[1];
 else if (VAR_2->len == 1)
  VAR_8 = VAR_2->buf[0];

 if (FUNC_1(VAR_5, VAR_4, VAR_3, VAR_0)) {
  if ((VAR_3->len < 16)) {

   FUNC_0(1,
   "i2c_read: addr 0x%x, len %d, saddr 0x%x, len %d\n",
   VAR_3->addr, VAR_3->len, VAR_8, VAR_2->len);

   switch (VAR_8) {
   case 0x0008:
    VAR_9 = 1;
    break;
   case 0x0004:
    VAR_9 = 1;
    break;
   }

   if (VAR_9) {
    VAR_7 =
        VAR_5->cx231xx_gpio_i2c_write(VAR_5, VAR_2->addr,
        VAR_2->buf,
        VAR_2->len);
    VAR_7 =
        VAR_5->cx231xx_gpio_i2c_read(VAR_5, VAR_3->addr,
              VAR_3->buf,
              VAR_3->len);
    return VAR_7;
   }
  }
 }


 VAR_6.dev_addr = VAR_3->addr;
 VAR_6.direction = VAR_3->flags;
 VAR_6.saddr_len = VAR_2->len;
 VAR_6.saddr_dat = VAR_8;
 VAR_6.buf_size = VAR_3->len;
 VAR_6.p_buffer = VAR_3->buf;


 VAR_7 = VAR_5->cx231xx_send_usb_command(VAR_4, &VAR_6);

 return VAR_7 < 0 ? VAR_7 : 0;
}
