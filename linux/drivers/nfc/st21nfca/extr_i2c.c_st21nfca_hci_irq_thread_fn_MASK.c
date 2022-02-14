
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct st21nfca_i2c_phy {int hard_fault; size_t crc_trials; int hdev; int * pending_skb; scalar_t__ current_read_len; struct i2c_client* i2c_dev; } ;
struct i2c_client {int irq; int dev; } ;
typedef int irqreturn_t ;


 size_t FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (int) ;
 int * FUNC_2 (int,int ) ;
 int FUNC_3 (int *,char*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int *) ;
 int FUNC_7 (struct st21nfca_i2c_phy*,int *) ;
 int * VAR_9 ;

__attribute__((used)) static irqreturn_t FUNC_8(int VAR_10, void *VAR_11)
{
 struct st21nfca_i2c_phy *VAR_12 = VAR_11;
 struct i2c_client *VAR_13;

 int VAR_14;

 if (!VAR_12 || VAR_10 != VAR_12->i2c_dev->irq) {
  FUNC_1(1);
  return VAR_7;
 }

 VAR_13 = VAR_12->i2c_dev;
 FUNC_3(&VAR_13->dev, "IRQ\n");

 if (VAR_12->hard_fault != 0)
  return VAR_6;

 VAR_14 = FUNC_7(VAR_12, VAR_12->pending_skb);
 if (VAR_14 == -VAR_4) {
  VAR_12->hard_fault = VAR_14;

  FUNC_6(VAR_12->hdev, ((void*)0));

  return VAR_6;
 } else if (VAR_14 == -VAR_0 || VAR_14 == -VAR_2) {
  return VAR_6;
 } else if (VAR_14 == -VAR_1 && VAR_12->crc_trials < FUNC_0(VAR_9)) {
  FUNC_5(VAR_9[VAR_12->crc_trials]);
  VAR_12->crc_trials++;
  VAR_12->current_read_len = 0;
  FUNC_4(VAR_12->pending_skb);
 } else if (VAR_14 > 0) {





  FUNC_6(VAR_12->hdev, VAR_12->pending_skb);
  VAR_12->crc_trials = 0;
 } else {
  FUNC_4(VAR_12->pending_skb);
 }

 VAR_12->pending_skb = FUNC_2(VAR_8 * 2, VAR_5);
 if (VAR_12->pending_skb == ((void*)0)) {
  VAR_12->hard_fault = -VAR_3;
  FUNC_6(VAR_12->hdev, ((void*)0));
 }

 return VAR_6;
}
