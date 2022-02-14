
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int dev; } ;
struct i2c_device {TYPE_1__ adapter; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct i2c_device*) ;
 int VAR_4 ;
 int FUNC_1 (struct i2c_device*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (int *,char*) ;
 int FUNC_4 (int *,char*,int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int,int ) ;
 int FUNC_7 (int,int) ;

__attribute__((used)) static int FUNC_8(struct i2c_device *VAR_10, int VAR_11, int VAR_12)
{
 int VAR_13 = 0;


 if (VAR_12) {
  FUNC_3(&VAR_10->adapter.dev, "Transaction timeout\n");

  FUNC_2(&VAR_10->adapter.dev, "Terminating the current operation\n");
  FUNC_6(FUNC_5(FUNC_0(VAR_10)) | VAR_4, FUNC_0(VAR_10));
  FUNC_7(1000, 2000);
  FUNC_6(FUNC_5(FUNC_0(VAR_10)) & (~VAR_4), FUNC_0(VAR_10));


  VAR_11 = FUNC_5(FUNC_1(VAR_10));
  if ((VAR_11 & VAR_8) || !(VAR_11 & VAR_7))
   FUNC_3(&VAR_10->adapter.dev, "Failed terminating the transaction\n");
  FUNC_6(VAR_9, FUNC_1(VAR_10));
  return -VAR_3;
 }

 if (VAR_11 & VAR_7) {
  VAR_13 = -VAR_1;
  FUNC_3(&VAR_10->adapter.dev, "Transaction failed\n");
 }
 if (VAR_11 & VAR_6) {
  VAR_13 = -VAR_2;
  FUNC_2(&VAR_10->adapter.dev, "No response\n");
 }
 if (VAR_11 & VAR_5) {
  VAR_13 = -VAR_0;
  FUNC_2(&VAR_10->adapter.dev, "Lost arbitration\n");
 }

 if (VAR_13) {

  FUNC_6(VAR_11 & VAR_9, FUNC_1(VAR_10));
  VAR_11 = FUNC_5(FUNC_1(VAR_10)) & VAR_9;
  if (VAR_11)
   FUNC_4(&VAR_10->adapter.dev, "Failed clearing status flags at end of transaction (%02x)\n", VAR_11);
 }

 return VAR_13;
}
