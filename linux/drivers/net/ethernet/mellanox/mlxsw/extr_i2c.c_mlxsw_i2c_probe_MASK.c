
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct TYPE_6__ {int low_frequency; int * dev; int device_name; int device_kind; } ;
struct TYPE_5__ {int mb_off_out; int mb_size_out; int mb_off_in; int mb_size_in; int lock; } ;
struct mlxsw_i2c {TYPE_3__ bus_info; int * dev; TYPE_2__ cmd; scalar_t__ block_size; } ;
struct i2c_device_id {int name; } ;
struct i2c_client {int dev; int name; TYPE_1__* adapter; } ;
struct i2c_adapter_quirks {scalar_t__ max_read_len; scalar_t__ max_write_len; } ;
struct TYPE_4__ {struct i2c_adapter_quirks* quirks; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int *,char*,...) ;
 int FUNC_1 (int *,char*,int ,int ,int ,int ,int ) ;
 struct mlxsw_i2c* FUNC_2 (int *,int,int ) ;
 int FUNC_3 (struct i2c_client*,struct mlxsw_i2c*) ;
 scalar_t__ FUNC_4 (int ,scalar_t__,int ) ;
 int FUNC_5 (int ,scalar_t__,scalar_t__) ;
 int FUNC_6 (TYPE_3__*,int *,struct mlxsw_i2c*,int,int *) ;
 int VAR_5 ;
 int FUNC_7 (struct i2c_client*,struct mlxsw_i2c*) ;
 int FUNC_8 (struct i2c_client*,struct mlxsw_i2c*,scalar_t__*) ;
 int FUNC_9 (struct i2c_client*,struct mlxsw_i2c*,int) ;
 int FUNC_10 (int *) ;
 int VAR_6 ;

__attribute__((used)) static int FUNC_11(struct i2c_client *VAR_7,
      const struct i2c_device_id *VAR_8)
{
 const struct i2c_adapter_quirks *VAR_9 = VAR_7->adapter->quirks;
 struct mlxsw_i2c *VAR_10;
 u8 VAR_11;
 int VAR_12;

 VAR_10 = FUNC_2(&VAR_7->dev, sizeof(*VAR_10), VAR_3);
 if (!VAR_10)
  return -VAR_1;

 if (VAR_9) {
  if ((VAR_9->max_read_len &&
       VAR_9->max_read_len < VAR_4) ||
      (VAR_9->max_write_len &&
       VAR_9->max_write_len < VAR_4)) {
   FUNC_0(&VAR_7->dev, "Insufficient transaction buffer length\n");
   return -VAR_2;
  }

  VAR_10->block_size = FUNC_4(VAR_6, VAR_4,
           FUNC_5(VAR_6, VAR_9->max_read_len,
          VAR_9->max_write_len));
 } else {
  VAR_10->block_size = VAR_4;
 }

 FUNC_3(VAR_7, VAR_10);
 FUNC_10(&VAR_10->cmd.lock);
 VAR_12 = FUNC_9(VAR_7, VAR_10, 1);
 if (VAR_12) {
  FUNC_0(&VAR_7->dev, "Could not start transaction");
  goto errout;
 }


 VAR_12 = FUNC_8(VAR_7, VAR_10, &VAR_11);
 if (VAR_12) {
  FUNC_0(&VAR_7->dev, "HW semaphore is not released");
  goto errout;
 }


 if (VAR_11) {
  FUNC_0(&VAR_7->dev, "Bad transaction completion status %x\n",
   VAR_11);
  VAR_12 = -VAR_0;
  goto errout;
 }


 VAR_12 = FUNC_7(VAR_7, VAR_10);
 if (VAR_12 < 0) {
  FUNC_0(&VAR_7->dev, "Fail to get mailboxes\n");
  goto errout;
 }

 FUNC_1(&VAR_7->dev, "%s mb size=%x off=0x%08x out mb size=%x off=0x%08x\n",
   VAR_8->name, VAR_10->cmd.mb_size_in,
   VAR_10->cmd.mb_off_in, VAR_10->cmd.mb_size_out,
   VAR_10->cmd.mb_off_out);


 VAR_10->bus_info.device_kind = VAR_8->name;
 VAR_10->bus_info.device_name = VAR_7->name;
 VAR_10->bus_info.dev = &VAR_7->dev;
 VAR_10->bus_info.low_frequency = 1;
 VAR_10->dev = &VAR_7->dev;

 VAR_12 = FUNC_6(&VAR_10->bus_info,
          &VAR_5, VAR_10, 0,
          ((void*)0));
 if (VAR_12) {
  FUNC_0(&VAR_7->dev, "Fail to register core bus\n");
  return VAR_12;
 }

 return 0;

errout:
 FUNC_3(VAR_7, ((void*)0));

 return VAR_12;
}
