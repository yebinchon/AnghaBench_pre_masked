
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rx8010_data {TYPE_1__* rtc; } ;
struct i2c_client {int dev; } ;
typedef int irqreturn_t ;
struct TYPE_2__ {int ops_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (int *,char*) ;
 struct rx8010_data* FUNC_1 (struct i2c_client*) ;
 int FUNC_2 (struct i2c_client*,int ) ;
 int FUNC_3 (struct i2c_client*,int ,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (TYPE_1__*,int,int) ;

__attribute__((used)) static irqreturn_t FUNC_7(int VAR_11, void *VAR_12)
{
 struct i2c_client *VAR_13 = VAR_12;
 struct rx8010_data *VAR_14 = FUNC_1(VAR_13);
 int VAR_15;

 FUNC_4(&VAR_14->rtc->ops_lock);

 VAR_15 = FUNC_2(VAR_13, VAR_6);

 if (VAR_15 <= 0) {
  FUNC_5(&VAR_14->rtc->ops_lock);
  return VAR_1;
 }

 if (VAR_15 & VAR_10)
  FUNC_0(&VAR_13->dev, "Frequency stop detected\n");

 if (VAR_15 & VAR_8) {
  VAR_15 &= ~VAR_8;
  FUNC_6(VAR_14->rtc, 1, VAR_4 | VAR_3);
 }

 if (VAR_15 & VAR_7) {
  VAR_15 &= ~VAR_7;
  FUNC_6(VAR_14->rtc, 1, VAR_2 | VAR_3);
 }

 if (VAR_15 & VAR_9) {
  VAR_15 &= ~VAR_9;
  FUNC_6(VAR_14->rtc, 1, VAR_5 | VAR_3);
 }

 FUNC_3(VAR_13, VAR_6, VAR_15);

 FUNC_5(&VAR_14->rtc->ops_lock);
 return VAR_0;
}
