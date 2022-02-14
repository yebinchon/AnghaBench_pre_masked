
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct go7007 {scalar_t__ status; scalar_t__ board_id; int hw_lock; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (int ,char*,int,int,...) ;
 int FUNC_1 (int ,char*) ;
 scalar_t__ FUNC_2 (struct go7007*,int,int*) ;
 int FUNC_3 (struct go7007*,int,int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7(struct go7007 *VAR_12, u16 VAR_13, int VAR_14,
  u16 VAR_15, int VAR_16, u8 *VAR_17)
{
 int VAR_18, VAR_19 = -VAR_0;
 u16 VAR_20;

 if (VAR_12->status == VAR_10)
  return -VAR_1;
 FUNC_5(&VAR_12->hw_lock);

 if (VAR_12->board_id == VAR_2) {

  FUNC_5(&VAR_11);
  FUNC_3(VAR_12, 0x3c82, 0x0020);
 }


 for (VAR_18 = 0; VAR_18 < 10; ++VAR_18) {
  if (FUNC_2(VAR_12, VAR_9, &VAR_20) < 0)
   goto i2c_done;
  if (!(VAR_20 & VAR_8))
   break;
  FUNC_4(100);
 }
 if (VAR_18 == 10) {
  FUNC_1(VAR_12->dev, "go7007-i2c: I2C adapter is hung\n");
  goto i2c_done;
 }


 FUNC_3(VAR_12, VAR_3, VAR_16);
 FUNC_3(VAR_12, VAR_6, VAR_15);


 if (!VAR_14) {
  FUNC_3(VAR_12, VAR_4, *VAR_17);
  FUNC_3(VAR_12, VAR_5,
     (VAR_13 << 9) | (VAR_15 >> 8));
  VAR_19 = 0;
  goto i2c_done;
 }


 if (FUNC_2(VAR_12, VAR_4, &VAR_20) < 0)
  goto i2c_done;


 FUNC_3(VAR_12, VAR_5,
   (VAR_13 << 9) | 0x0100 | (VAR_15 >> 8));


 for (VAR_18 = 0; VAR_18 < 10; ++VAR_18) {
  if (FUNC_2(VAR_12, VAR_9, &VAR_20) < 0)
   goto i2c_done;
  if (VAR_20 & VAR_7)
   break;
  FUNC_4(100);
 }
 if (VAR_18 == 10) {
  FUNC_1(VAR_12->dev, "go7007-i2c: I2C adapter is hung\n");
  goto i2c_done;
 }


 if (FUNC_2(VAR_12, VAR_4, &VAR_20) < 0)
  goto i2c_done;
 *VAR_17 = VAR_20;
 VAR_19 = 0;

i2c_done:
 if (VAR_12->board_id == VAR_2) {

  FUNC_3(VAR_12, 0x3c82, 0x0000);
  FUNC_6(&VAR_11);
 }
 FUNC_6(&VAR_12->hw_lock);
 return VAR_19;
}
