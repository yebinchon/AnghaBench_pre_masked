
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mutex {int dummy; } ;
struct m41t80_data {TYPE_1__* rtc; } ;
struct i2c_client {int dummy; } ;
typedef int irqreturn_t ;
struct TYPE_2__ {struct mutex ops_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 unsigned long VAR_6 ;
 struct m41t80_data* FUNC_0 (struct i2c_client*) ;
 int FUNC_1 (struct i2c_client*,int ) ;
 int FUNC_2 (struct i2c_client*,int ,int) ;
 int FUNC_3 (struct mutex*) ;
 int FUNC_4 (struct mutex*) ;
 int FUNC_5 (TYPE_1__*,int,unsigned long) ;

__attribute__((used)) static irqreturn_t FUNC_6(int VAR_7, void *VAR_8)
{
 struct i2c_client *VAR_9 = VAR_8;
 struct m41t80_data *VAR_10 = FUNC_0(VAR_9);
 struct mutex *VAR_11 = &VAR_10->rtc->ops_lock;
 unsigned long VAR_12 = 0;
 int VAR_13, VAR_14;

 FUNC_3(VAR_11);

 VAR_14 = FUNC_1(VAR_9, VAR_4);
 if (VAR_14 < 0) {
  FUNC_4(VAR_11);
  return VAR_1;
 }

 VAR_13 = FUNC_1(VAR_9, VAR_5);
 if (VAR_13 <= 0) {
  FUNC_4(VAR_11);
  return VAR_1;
 }

 if (VAR_13 & VAR_3) {
  VAR_13 &= ~VAR_3;
  VAR_14 &= ~VAR_2;
  VAR_12 |= VAR_6;
 }

 if (VAR_12) {
  FUNC_5(VAR_10->rtc, 1, VAR_12);
  FUNC_2(VAR_9, VAR_5, VAR_13);
  FUNC_2(VAR_9, VAR_4,
       VAR_14);
 }

 FUNC_4(VAR_11);

 return VAR_0;
}
