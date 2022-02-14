
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u16 ;
struct ucsi_ccg {int dev; int lock; struct i2c_client* client; } ;
struct i2c_client {int dummy; } ;
struct ccg_cmd {int len; int delay; int reg; int data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct ucsi_ccg*,struct ccg_cmd*) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (struct i2c_client*,scalar_t__*,int) ;
 int FUNC_3 (scalar_t__*,void const*,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int,scalar_t__*) ;

__attribute__((used)) static int
FUNC_7(struct ucsi_ccg *VAR_7, u16 VAR_8,
   const void *VAR_9, u8 VAR_10)
{
 struct i2c_client *VAR_11 = VAR_7->client;
 struct ccg_cmd VAR_12;
 u8 VAR_13[VAR_0 + 2];
 u8 *VAR_14;
 int VAR_15;


 FUNC_6(VAR_6, VAR_13);

 FUNC_3(VAR_13 + 2, VAR_9, VAR_0);

 FUNC_4(&VAR_7->lock);

 VAR_15 = FUNC_2(VAR_11, VAR_13, VAR_0 + 2);
 if (VAR_15 != VAR_0 + 2) {
  FUNC_1(VAR_7->dev, "REG_FLASH_RW_MEM write fail %d\n", VAR_15);
  FUNC_5(&VAR_7->lock);
  return VAR_15 < 0 ? VAR_15 : -VAR_3;
 }



 VAR_14 = (u8 *)&VAR_12.data;
 VAR_12.reg = VAR_1;
 VAR_14[0] = VAR_5;
 VAR_14[1] = VAR_10;
 FUNC_6(VAR_8, &VAR_14[2]);
 VAR_12.len = 4;
 VAR_12.delay = 50;
 if (VAR_10 == VAR_4)
  VAR_12.delay += 400;
 if (VAR_8 == 510)
  VAR_12.delay += 220;
 VAR_15 = FUNC_0(VAR_7, &VAR_12);

 FUNC_5(&VAR_7->lock);

 if (VAR_15 != VAR_2) {
  FUNC_1(VAR_7->dev, "write flash row failed ret=%d\n", VAR_15);
  return VAR_15;
 }

 return 0;
}
