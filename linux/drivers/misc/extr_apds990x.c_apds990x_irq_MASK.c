
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u16 ;
struct apds990x_chip {scalar_t__ lux_clear; scalar_t__ lux_ir; scalar_t__ again_meas; scalar_t__ again_next; int lux_wait_fresh_res; scalar_t__ a_max_result; scalar_t__ prox_data; scalar_t__ prox_thres; int mutex; TYPE_1__* client; int prox_continuous_mode; scalar_t__ prox_en; int wait; int lux_raw; int lux; } ;
typedef int irqreturn_t ;
struct TYPE_4__ {int kobj; } ;
struct TYPE_3__ {TYPE_2__ dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct apds990x_chip*,int) ;
 scalar_t__ FUNC_1 (struct apds990x_chip*) ;
 int FUNC_2 (struct apds990x_chip*,scalar_t__,scalar_t__) ;
 int FUNC_3 (struct apds990x_chip*,int ,int*) ;
 int FUNC_4 (struct apds990x_chip*,int ,scalar_t__*) ;
 int FUNC_5 (struct apds990x_chip*,scalar_t__) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (TYPE_2__*) ;
 int FUNC_9 (int *,int *,char*) ;
 int FUNC_10 (int *) ;

__attribute__((used)) static irqreturn_t FUNC_11(int VAR_8, void *VAR_9)
{
 struct apds990x_chip *VAR_10 = VAR_9;
 u8 VAR_11;

 FUNC_3(VAR_10, VAR_3, &VAR_11);
 FUNC_0(VAR_10, VAR_11);

 FUNC_6(&VAR_10->mutex);
 if (!FUNC_8(&VAR_10->client->dev)) {
  if (VAR_11 & VAR_4) {
   FUNC_4(VAR_10, VAR_0,
     &VAR_10->lux_clear);
   FUNC_4(VAR_10, VAR_1,
     &VAR_10->lux_ir);

   VAR_10->again_meas = VAR_10->again_next;

   VAR_10->lux_raw = FUNC_2(VAR_10,
       VAR_10->lux_clear,
       VAR_10->lux_ir);

   if (FUNC_1(VAR_10) == 0) {

    VAR_10->lux = VAR_10->lux_raw;
    VAR_10->lux_wait_fresh_res = 0;
    FUNC_10(&VAR_10->wait);
    FUNC_9(&VAR_10->client->dev.kobj,
     ((void*)0), "lux0_input");
   }
  }

  if ((VAR_11 & VAR_5) && VAR_10->prox_en) {
   u16 VAR_12;

   FUNC_4(VAR_10, VAR_0, &VAR_12);





   if (VAR_10->again_meas == 0 &&
    VAR_12 == VAR_10->a_max_result)
    VAR_10->prox_data = 0;
   else
    FUNC_4(VAR_10,
      VAR_2,
      &VAR_10->prox_data);

   FUNC_5(VAR_10, VAR_10->prox_data);
   if (VAR_10->prox_data < VAR_10->prox_thres)
    VAR_10->prox_data = 0;
   else if (!VAR_10->prox_continuous_mode)
    VAR_10->prox_data = VAR_6;
   FUNC_9(&VAR_10->client->dev.kobj,
    ((void*)0), "prox0_raw");
  }
 }
 FUNC_7(&VAR_10->mutex);
 return VAR_7;
}
