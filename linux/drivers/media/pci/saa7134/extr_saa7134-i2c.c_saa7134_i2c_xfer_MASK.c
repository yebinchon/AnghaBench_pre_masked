
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct saa7134_dev {int dummy; } ;
struct i2c_msg {int flags; int addr; int len; int* buf; } ;
struct i2c_adapter {struct saa7134_dev* algo_data; } ;
typedef enum i2c_status { ____Placeholder_i2c_status } i2c_status ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int,char*,...) ;
 int FUNC_1 (int,char*) ;
 int VAR_6 ;
 int FUNC_2 (struct saa7134_dev*) ;
 int FUNC_3 (struct saa7134_dev*) ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (struct saa7134_dev*) ;
 int FUNC_7 (struct saa7134_dev*) ;
 int FUNC_8 (struct saa7134_dev*,int ,unsigned char) ;
 int FUNC_9 (struct saa7134_dev*,int ) ;
 int FUNC_10 (int) ;
 unsigned char* VAR_7 ;

__attribute__((used)) static int FUNC_11(struct i2c_adapter *VAR_8,
       struct i2c_msg *VAR_9, int VAR_10)
{
 struct saa7134_dev *VAR_11 = VAR_8->algo_data;
 enum i2c_status VAR_12;
 unsigned char VAR_13;
 int VAR_14,VAR_15,VAR_16,VAR_17;

 VAR_12 = FUNC_2(VAR_11);
 if (!FUNC_5(VAR_12))
  if (!FUNC_7(VAR_11))
   return -VAR_1;

 FUNC_1(2, "start xfer\n");
 FUNC_1(1, "i2c xfer:");
 for (VAR_16 = 0; VAR_16 < VAR_10; VAR_16++) {
  if (!(VAR_9[VAR_16].flags & VAR_2) || 0 == VAR_16) {

   FUNC_1(2, "send address\n");
   VAR_14 = VAR_9[VAR_16].addr << 1;
   if (VAR_9[VAR_16].flags & VAR_3)
    VAR_14 |= 1;
   if (VAR_16 > 0 && VAR_9[VAR_16].flags &
       VAR_3 && VAR_9[VAR_16].addr != 0x40 &&
       VAR_9[VAR_16].addr != 0x41 &&
       VAR_9[VAR_16].addr != 0x19) {



    int VAR_18 = 0xfe;
    FUNC_0(1, " [%02x quirk]", VAR_18);
    FUNC_8(VAR_11,VAR_4,VAR_18);
    FUNC_6(VAR_11);
   }
   FUNC_0(1, " < %02x", VAR_14);
   VAR_15 = FUNC_8(VAR_11,VAR_4,VAR_14);
   if (VAR_15 < 0)
     goto err;
  }
  if (VAR_9[VAR_16].flags & VAR_3) {

   FUNC_1(2, "read bytes\n");
   for (VAR_17 = 0; VAR_17 < VAR_9[VAR_16].len; VAR_17++) {
    FUNC_0(1, " =");
    VAR_15 = FUNC_6(VAR_11);
    if (VAR_15 < 0)
     goto err;
    FUNC_0(1, "%02x", VAR_15);
    VAR_9[VAR_16].buf[VAR_17] = VAR_15;
   }



   if (0x19 == VAR_9[VAR_16].addr) {
    FUNC_0(1, " ?");
    VAR_15 = FUNC_6(VAR_11);
    if (VAR_15 < 0)
     goto err;
    FUNC_0(1, "%02x", VAR_15);
   }
  } else {

   FUNC_1(2, "write bytes\n");
   for (VAR_17 = 0; VAR_17 < VAR_9[VAR_16].len; VAR_17++) {
    VAR_13 = VAR_9[VAR_16].buf[VAR_17];
    FUNC_0(1, " %02x", VAR_13);
    VAR_15 = FUNC_8(VAR_11,VAR_0,VAR_13);
    if (VAR_15 < 0)
     goto err;
   }
  }
 }
 FUNC_1(2, "xfer done\n");
 FUNC_0(1, " >");
 FUNC_9(VAR_11,VAR_5);
 VAR_15 = -VAR_1;
 if (!FUNC_3(VAR_11))
  goto err;
 VAR_12 = FUNC_2(VAR_11);
 if (FUNC_4(VAR_12))
  goto err;

 FUNC_10(1);

 FUNC_0(1, "\n");
 return VAR_10;
 err:
 if (1 == VAR_6) {
  VAR_12 = FUNC_2(VAR_11);
  FUNC_0(1, " ERROR: %s\n", VAR_7[VAR_12]);
 }
 return VAR_15;
}
