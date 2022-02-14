
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct cx231xx_i2c_xfer_data {int dev_addr; int saddr_len; int saddr_dat; int buf_size; int* p_buffer; scalar_t__ direction; } ;
struct cx231xx {int (* cx231xx_send_usb_command ) (int *,struct cx231xx_i2c_xfer_data*) ;int * i2c_bus; } ;


 int FUNC_0 (int *,struct cx231xx_i2c_xfer_data*) ;

int FUNC_1(struct cx231xx *VAR_0, u8 VAR_1, u16 VAR_2,
      u8 VAR_3, u32 VAR_4, u8 VAR_5)
{
 int VAR_6 = 0;
 u8 VAR_7[4] = { 0, 0, 0, 0 };
 struct cx231xx_i2c_xfer_data VAR_8;

 VAR_7[0] = (u8) VAR_4;
 VAR_7[1] = (u8) (VAR_4 >> 8);
 VAR_7[2] = (u8) (VAR_4 >> 16);
 VAR_7[3] = (u8) (VAR_4 >> 24);

 if (VAR_3 == 0)
  VAR_2 = 0;
 else if (VAR_3 == 1)
  VAR_2 &= 0xff;


 VAR_8.dev_addr = VAR_1 >> 1;
 VAR_8.direction = 0;
 VAR_8.saddr_len = VAR_3;
 VAR_8.saddr_dat = VAR_2;
 VAR_8.buf_size = VAR_5;
 VAR_8.p_buffer = VAR_7;


 VAR_6 = VAR_0->cx231xx_send_usb_command(&VAR_0->i2c_bus[0], &VAR_8);

 return VAR_6;
}
