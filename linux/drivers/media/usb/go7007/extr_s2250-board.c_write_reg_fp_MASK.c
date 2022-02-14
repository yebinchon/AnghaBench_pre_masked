
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef unsigned int u16 ;
struct s2250 {unsigned int reg12b_val; } ;
struct i2c_client {int dev; int adapter; } ;
struct go7007_usb {int i2c_lock; } ;
struct go7007 {scalar_t__ status; struct go7007_usb* hpi_context; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (int *,char*,...) ;
 int FUNC_1 (struct go7007*,int,unsigned int,unsigned int,scalar_t__*,int,int) ;
 struct go7007* FUNC_2 (int ) ;
 struct s2250* FUNC_3 (struct i2c_client*) ;
 int FUNC_4 (scalar_t__*) ;
 scalar_t__* FUNC_5 (int,int ) ;
 int FUNC_6 (scalar_t__*,int,int) ;
 scalar_t__ FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static int FUNC_9(struct i2c_client *VAR_7, u16 VAR_8, u16 VAR_9)
{
 struct go7007 *VAR_10 = FUNC_2(VAR_7->adapter);
 struct go7007_usb *VAR_11;
 int VAR_12;
 u8 *VAR_13;
 struct s2250 *VAR_14 = FUNC_3(VAR_7);

 if (VAR_10 == ((void*)0))
  return -VAR_3;

 if (VAR_10->status == VAR_6)
  return -VAR_0;

 VAR_13 = FUNC_5(16, VAR_5);

 if (VAR_13 == ((void*)0))
  return -VAR_4;



 FUNC_6(VAR_13, 0xcd, 6);

 VAR_11 = VAR_10->hpi_context;
 if (FUNC_7(&VAR_11->i2c_lock) != 0) {
  FUNC_0(&VAR_7->dev, "i2c lock failed\n");
  FUNC_4(VAR_13);
  return -VAR_2;
 }
 VAR_12 = FUNC_1(VAR_10, 0x57, VAR_8, VAR_9, VAR_13, 16, 1);
 FUNC_8(&VAR_11->i2c_lock);
 if (VAR_12 < 0) {
  FUNC_4(VAR_13);
  return VAR_12;
 }

 if (VAR_13[0] == 0) {
  unsigned int VAR_15, VAR_16;

  VAR_15 = (VAR_13[4] << 8) + VAR_13[5];
  VAR_16 = (VAR_13[2] << 8) + VAR_13[3];
  FUNC_4(VAR_13);
  if (VAR_16 != VAR_9) {
   FUNC_0(&VAR_7->dev, "invalid fp write %x %x\n",
     VAR_16, VAR_9);
   return -VAR_1;
  }
  if (VAR_15 != VAR_8) {
   FUNC_0(&VAR_7->dev, "invalid fp write addr %x %x\n",
     VAR_15, VAR_8);
   return -VAR_1;
  }
 } else {
  FUNC_4(VAR_13);
  return -VAR_1;
 }


 if (VAR_8 == 0x12b)
  VAR_14->reg12b_val = VAR_9;

 return 0;
}
