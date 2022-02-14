
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sbsm_data {int last_state; int last_state_cont; int supported_bats; TYPE_2__* muxc; int psy; int client; } ;
struct i2c_client {int dummy; } ;
typedef enum i2c_alert_protocol { ____Placeholder_i2c_alert_protocol } i2c_alert_protocol ;
struct TYPE_4__ {TYPE_1__** adapter; } ;
struct TYPE_3__ {int dev; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *,int *,int ) ;
 struct sbsm_data* FUNC_2 (struct i2c_client*) ;
 int FUNC_3 (int ) ;
 int VAR_4 ;
 int FUNC_4 (int ,int ) ;

__attribute__((used)) static void FUNC_5(struct i2c_client *VAR_5, enum i2c_alert_protocol VAR_6,
         unsigned int VAR_7)
{
 struct sbsm_data *VAR_8 = FUNC_2(VAR_5);

 int VAR_9, VAR_10, VAR_11 = 0, VAR_12 = 0;

 VAR_9 = FUNC_4(VAR_8->client, VAR_1);
 if (VAR_9 >= 0) {
  VAR_11 = VAR_9 ^ VAR_8->last_state;
  VAR_8->last_state = VAR_9;
  VAR_12 = VAR_9;
 }

 VAR_9 = FUNC_4(VAR_8->client, VAR_2);
 if ((VAR_9 >= 0) &&
     ((VAR_9 ^ VAR_8->last_state_cont) & VAR_0)) {
  VAR_11 |= VAR_8->supported_bats & VAR_12;
  FUNC_3(VAR_8->psy);
 }
 VAR_8->last_state_cont = VAR_9;

 for (VAR_10 = 0; VAR_10 < VAR_3; VAR_10++) {
  if (VAR_11 & FUNC_0(VAR_10)) {
   FUNC_1(&VAR_8->muxc->adapter[VAR_10]->dev,
           ((void*)0), VAR_4);
  }
 }
}
