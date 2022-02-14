
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct watchdog_device {int parent; } ;
struct ihex_binrec {int len; int * data; int addr; } ;
struct i2c_client {int dev; } ;
struct firmware {scalar_t__ data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,char*,...) ;
 int FUNC_3 (struct i2c_client*,int ) ;
 int FUNC_4 (struct i2c_client*,int ,int ) ;
 struct ihex_binrec* FUNC_5 (struct ihex_binrec const*) ;
 int FUNC_6 (int) ;
 struct i2c_client* FUNC_7 (int ) ;
 int FUNC_8 (struct watchdog_device*) ;
 int FUNC_9 (struct watchdog_device*,struct firmware const*) ;
 int FUNC_10 (struct watchdog_device*,int ,int *,int ) ;

__attribute__((used)) static int FUNC_11(struct watchdog_device *VAR_6,
          const struct firmware *VAR_7)
{
 struct i2c_client *VAR_8 = FUNC_7(VAR_6->parent);
 const struct ihex_binrec *VAR_9;
 int VAR_10;

 VAR_10 = FUNC_4(VAR_8,
     VAR_2,
     VAR_3);
 if (VAR_10) {
  FUNC_2(&VAR_8->dev, "Failed to jump to bootloader\n");
  return VAR_10;
 }

 FUNC_6(500);

 VAR_10 = FUNC_3(VAR_8, VAR_1);
 if (VAR_10) {
  FUNC_2(&VAR_8->dev, "Failed to start download\n");
  return VAR_10;
 }

 VAR_10 = FUNC_8(VAR_6);
 if (VAR_10) {
  FUNC_2(&VAR_8->dev, "No ACK for start download\n");
  return VAR_10;
 }

 FUNC_6(500);

 for (VAR_9 = (void *)VAR_7->data; VAR_9; VAR_9 = FUNC_5(VAR_9)) {
  VAR_10 = FUNC_10(VAR_6, FUNC_1(VAR_9->addr),
          VAR_9->data, FUNC_0(VAR_9->len));
  if (VAR_10)
   return VAR_10;
 }





 VAR_10 = FUNC_10(VAR_6, 0, ((void*)0), 0);
 if (VAR_10) {
  FUNC_2(&VAR_8->dev, "Failed to send EMPTY packet: %d\n", VAR_10);
  return VAR_10;
 }


 FUNC_6(20);


 VAR_10 = FUNC_9(VAR_6, VAR_7);
 if (VAR_10) {
  FUNC_2(&VAR_8->dev,
   "Failed to verify firmware: %d\n", VAR_10);
  return VAR_10;
 }


 VAR_10 = FUNC_3(VAR_8, VAR_0);
 if (VAR_10) {
  FUNC_2(&VAR_8->dev,
   "Failed to end firmware download: %d\n", VAR_10);
  return VAR_10;
 }


 VAR_10 = FUNC_4(VAR_8,
     VAR_4,
     VAR_5);
 if (VAR_10) {
  FUNC_2(&VAR_8->dev,
   "Failed to reset the watchdog: %d\n", VAR_10);
  return VAR_10;
 }

 FUNC_6(500);

 return 0;
}
