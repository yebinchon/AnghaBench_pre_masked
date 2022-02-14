
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rv8803_data {int ctrl; int flags_lock; struct i2c_client* client; int rtc; } ;
struct i2c_client {int dev; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_0 (int *,char*) ;
 struct rv8803_data* FUNC_1 (struct i2c_client*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,int,unsigned long) ;
 int FUNC_5 (struct i2c_client*,int ) ;
 int FUNC_6 (struct i2c_client*,int ,int) ;

__attribute__((used)) static irqreturn_t FUNC_7(int VAR_15, void *VAR_16)
{
 struct i2c_client *VAR_17 = VAR_16;
 struct rv8803_data *VAR_18 = FUNC_1(VAR_17);
 unsigned long VAR_19 = 0;
 int VAR_20;

 FUNC_2(&VAR_18->flags_lock);

 VAR_20 = FUNC_5(VAR_17, VAR_9);
 if (VAR_20 <= 0) {
  FUNC_3(&VAR_18->flags_lock);
  return VAR_1;
 }

 if (VAR_20 & VAR_13)
  FUNC_0(&VAR_17->dev, "Voltage low, temperature compensation stopped.\n");

 if (VAR_20 & VAR_14)
  FUNC_0(&VAR_17->dev, "Voltage low, data loss detected.\n");

 if (VAR_20 & VAR_11) {
  VAR_20 &= ~VAR_11;
  VAR_18->ctrl &= ~VAR_7;
  VAR_19 |= VAR_3;
 }

 if (VAR_20 & VAR_10) {
  VAR_20 &= ~VAR_10;
  VAR_18->ctrl &= ~VAR_6;
  VAR_19 |= VAR_2;
 }

 if (VAR_20 & VAR_12) {
  VAR_20 &= ~VAR_12;
  VAR_18->ctrl &= ~VAR_8;
  VAR_19 |= VAR_4;
 }

 if (VAR_19) {
  FUNC_4(VAR_18->rtc, 1, VAR_19);
  FUNC_6(VAR_17, VAR_9, VAR_20);
  FUNC_6(VAR_18->client, VAR_5, VAR_18->ctrl);
 }

 FUNC_3(&VAR_18->flags_lock);

 return VAR_0;
}
