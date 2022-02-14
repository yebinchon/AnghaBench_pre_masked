
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int mb_off_in; } ;
struct mlxsw_i2c {size_t block_size; TYPE_1__ cmd; } ;
struct i2c_msg {scalar_t__ len; int * buf; } ;
struct i2c_client {int dev; int adapter; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 struct i2c_msg FUNC_0 (struct i2c_client*,int *,int ) ;
 int FUNC_1 () ;
 int FUNC_2 (int *,char*,...) ;
 struct mlxsw_i2c* FUNC_3 (struct i2c_client*) ;
 int FUNC_4 (int ,struct i2c_msg*,int) ;
 unsigned long VAR_8 ;
 int FUNC_5 (int *) ;
 int * FUNC_6 (size_t,int ) ;
 int FUNC_7 (int *,int *,int) ;
 int FUNC_8 (int *,int) ;
 int FUNC_9 (struct i2c_client*,struct mlxsw_i2c*,int *) ;
 int FUNC_10 (struct i2c_client*,struct mlxsw_i2c*,int ) ;
 unsigned long FUNC_11 (int ) ;
 scalar_t__ FUNC_12 (unsigned long,unsigned long) ;
 struct i2c_client* FUNC_13 (struct device*) ;

__attribute__((used)) static int
FUNC_14(struct device *VAR_9, size_t VAR_10, u8 *VAR_11, int VAR_12,
  u8 *VAR_13)
{
 struct i2c_client *VAR_14 = FUNC_13(VAR_9);
 struct mlxsw_i2c *VAR_15 = FUNC_3(VAR_14);
 unsigned long VAR_16 = FUNC_11(VAR_7);
 int VAR_17 = VAR_15->cmd.mb_off_in, VAR_18, VAR_19, VAR_20;
 unsigned long VAR_21;
 u8 *VAR_22;
 struct i2c_msg VAR_23 =
  FUNC_0(VAR_14, ((void*)0), VAR_5);
 int VAR_24;

 VAR_22 = FUNC_6(VAR_15->block_size + VAR_3,
      VAR_2);
 if (!VAR_22)
  return -VAR_1;

 VAR_23.buf = VAR_22;
 for (VAR_19 = 0; VAR_19 < VAR_12; VAR_19++) {
  VAR_18 = (VAR_10 > VAR_15->block_size) ?
        VAR_15->block_size : VAR_10;
  VAR_23.len = VAR_4 + VAR_18;
  FUNC_8(VAR_22, VAR_17);
  FUNC_7(&VAR_22[VAR_3], VAR_11 +
         VAR_15->block_size * VAR_19, VAR_18);

  VAR_20 = 0;
  VAR_21 = VAR_8 + VAR_16;
  do {
   VAR_24 = FUNC_4(VAR_14->adapter, &VAR_23, 1);
   if (VAR_24 == 1)
    break;

   FUNC_1();
  } while ((FUNC_12(VAR_8, VAR_21)) ||
    (VAR_20++ < VAR_6));

  if (VAR_24 != 1) {
   if (!VAR_24) {
    VAR_24 = -VAR_0;
    goto mlxsw_i2c_write_exit;
   }
  }

  VAR_17 += VAR_18;
  VAR_10 -= VAR_18;
 }


 VAR_24 = FUNC_10(VAR_14, VAR_15, 0);
 if (VAR_24) {
  FUNC_2(&VAR_14->dev, "Could not start transaction");
  VAR_24 = -VAR_0;
  goto mlxsw_i2c_write_exit;
 }


 VAR_24 = FUNC_9(VAR_14, VAR_15, VAR_13);
 if (VAR_24) {
  FUNC_2(&VAR_14->dev, "HW semaphore is not released");
  goto mlxsw_i2c_write_exit;
 }


 if (*VAR_13) {
  FUNC_2(&VAR_14->dev, "Bad transaction completion status %x\n",
   *VAR_13);
  VAR_24 = -VAR_0;
 }

mlxsw_i2c_write_exit:
 FUNC_5(VAR_22);
 return VAR_24;
}
