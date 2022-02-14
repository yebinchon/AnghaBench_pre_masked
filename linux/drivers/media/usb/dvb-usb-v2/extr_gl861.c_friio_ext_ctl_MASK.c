
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct i2c_msg {int addr; int len; int* buf; scalar_t__ flags; } ;
struct dvb_usb_device {int i2c_adap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int *,struct i2c_msg*,int) ;
 int FUNC_1 (int*) ;
 int* FUNC_2 (int,int ) ;

__attribute__((used)) static int FUNC_3(struct dvb_usb_device *VAR_7,
       u32 VAR_8, int VAR_9)
{
 int VAR_10, VAR_11;
 struct i2c_msg VAR_12;
 u8 *VAR_13;
 u32 VAR_14;
 u8 VAR_15 = (VAR_9) ? VAR_4 : 0;

 VAR_13 = FUNC_2(2, VAR_6);
 if (!VAR_13)
  return -VAR_0;

 VAR_12.addr = 0x00;
 VAR_12.flags = 0;
 VAR_12.len = 2;
 VAR_12.buf = VAR_13;
 VAR_13[0] = 0x00;


 VAR_13[1] = VAR_15 | VAR_3 | VAR_5;
 VAR_11 = FUNC_0(&VAR_7->i2c_adap, &VAR_12, 1);
 VAR_13[1] |= VAR_2;
 VAR_11 += FUNC_0(&VAR_7->i2c_adap, &VAR_12, 1);

 VAR_13[1] = VAR_15 | VAR_5;
 VAR_11 += FUNC_0(&VAR_7->i2c_adap, &VAR_12, 1);
 VAR_13[1] |= VAR_2;
 VAR_11 += FUNC_0(&VAR_7->i2c_adap, &VAR_12, 1);


 VAR_14 = 1UL << 31;
 for (VAR_10 = 0; VAR_10 < 32; VAR_10++) {
  VAR_13[1] = VAR_15 | VAR_5;
  if (VAR_8 & VAR_14)
   VAR_13[1] |= VAR_3;
  VAR_11 += FUNC_0(&VAR_7->i2c_adap, &VAR_12, 1);
  VAR_13[1] |= VAR_2;
  VAR_11 += FUNC_0(&VAR_7->i2c_adap, &VAR_12, 1);
  VAR_14 >>= 1;
 }


 VAR_13[1] = VAR_15;
 VAR_11 += FUNC_0(&VAR_7->i2c_adap, &VAR_12, 1);
 VAR_13[1] |= VAR_2;
 VAR_11 += FUNC_0(&VAR_7->i2c_adap, &VAR_12, 1);

 FUNC_1(VAR_13);
 return (VAR_11 == 70) ? 0 : -VAR_1;
}
