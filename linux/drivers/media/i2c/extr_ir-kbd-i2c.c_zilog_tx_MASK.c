
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct rc_dev {struct IR_i2c* priv; } ;
struct code_block {int length; } ;
struct IR_i2c {int lock; TYPE_1__* rc; int tx_c; } ;
typedef int code_block ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *,char*,...) ;
 int FUNC_1 (int *,char*,int) ;
 int FUNC_2 (int ,int*,int) ;
 int FUNC_3 (int ,int*,int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (struct IR_i2c*,int ,struct code_block*) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (struct rc_dev*,unsigned int*,unsigned int,struct code_block*) ;

__attribute__((used)) static int FUNC_11(struct rc_dev *VAR_6, unsigned int *VAR_7,
      unsigned int VAR_8)
{
 struct IR_i2c *VAR_9 = VAR_6->priv;
 struct code_block VAR_10 = { .length = sizeof(VAR_10) };
 u8 VAR_11[2];
 int VAR_12, VAR_13;

 VAR_12 = FUNC_10(VAR_6, VAR_7, VAR_8, &VAR_10);
 if (VAR_12)
  return VAR_12;

 VAR_12 = FUNC_5(&VAR_9->lock);
 if (VAR_12)
  return VAR_12;

 VAR_12 = FUNC_8(VAR_9, VAR_5, &VAR_10);
 if (VAR_12)
  goto out_unlock;

 VAR_12 = FUNC_2(VAR_9->tx_c, VAR_11, 1);
 if (VAR_12 != 1) {
  FUNC_1(&VAR_9->rc->dev, "i2c_master_recv failed with %d\n", VAR_12);
  goto out_unlock;
 }

 FUNC_0(&VAR_9->rc->dev, "code set status: %02x\n", VAR_11[0]);

 if (VAR_11[0] != (VAR_3 | VAR_4)) {
  FUNC_1(&VAR_9->rc->dev, "unexpected IR TX response %02x\n",
   VAR_11[0]);
  VAR_12 = -VAR_0;
  goto out_unlock;
 }

 VAR_11[0] = 0x00;
 VAR_11[1] = VAR_2;

 VAR_12 = FUNC_3(VAR_9->tx_c, VAR_11, 2);
 if (VAR_12 != 2) {
  FUNC_1(&VAR_9->rc->dev, "i2c_master_send failed with %d\n", VAR_12);
  if (VAR_12 >= 0)
   VAR_12 = -VAR_0;
  goto out_unlock;
 }

 FUNC_0(&VAR_9->rc->dev, "send command sent\n");







 for (VAR_13 = 0; VAR_13 < 20; ++VAR_13) {
  FUNC_9(VAR_1);
  FUNC_7(FUNC_4(50));
  VAR_12 = FUNC_3(VAR_9->tx_c, VAR_11, 1);
  if (VAR_12 == 1)
   break;
  FUNC_0(&VAR_9->rc->dev,
   "NAK expected: i2c_master_send failed with %d (try %d)\n",
   VAR_12, VAR_13 + 1);
 }

 if (VAR_12 != 1) {
  FUNC_1(&VAR_9->rc->dev,
   "IR TX chip never got ready: last i2c_master_send failed with %d\n",
   VAR_12);
  if (VAR_12 >= 0)
   VAR_12 = -VAR_0;
  goto out_unlock;
 }

 VAR_13 = FUNC_2(VAR_9->tx_c, VAR_11, 1);
 if (VAR_13 != 1) {
  FUNC_1(&VAR_9->rc->dev, "i2c_master_recv failed with %d\n", VAR_12);
  VAR_12 = -VAR_0;
  goto out_unlock;
 } else if (VAR_11[0] != VAR_3) {
  FUNC_1(&VAR_9->rc->dev, "unexpected IR TX response #2: %02x\n",
   VAR_11[0]);
  VAR_12 = -VAR_0;
  goto out_unlock;
 }
 FUNC_0(&VAR_9->rc->dev, "transmit complete\n");


 VAR_12 = VAR_8;
out_unlock:
 FUNC_6(&VAR_9->lock);

 return VAR_12;
}
