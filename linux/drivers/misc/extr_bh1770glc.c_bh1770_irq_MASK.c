
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct bh1770_chip {int lux_wait_result; int int_mode_prox; size_t prox_rate_threshold; int int_mode_lux; int prox_work; int mutex; TYPE_2__* client; int lux_threshold_lo; int lux_threshold_hi; int wait; } ;
typedef int irqreturn_t ;
struct TYPE_4__ {int kobj; } ;
struct TYPE_5__ {TYPE_1__ dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct bh1770_chip*) ;
 int FUNC_1 (struct bh1770_chip*,int ,int ) ;
 int FUNC_2 (struct bh1770_chip*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (TYPE_2__*,int ) ;
 int FUNC_5 (TYPE_2__*,int ,int) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int* VAR_6 ;
 int FUNC_9 (int *,int ) ;
 int FUNC_10 (int *,int *,char*) ;
 scalar_t__ FUNC_11 (int) ;
 int FUNC_12 (int *) ;

__attribute__((used)) static irqreturn_t FUNC_13(int VAR_7, void *VAR_8)
{
 struct bh1770_chip *VAR_9 = VAR_8;
 int VAR_10;
 int VAR_11 = 0;

 FUNC_7(&VAR_9->mutex);
 VAR_10 = FUNC_4(VAR_9->client, VAR_0);


 FUNC_4(VAR_9->client, VAR_1);





 if (VAR_10 & VAR_2) {
  FUNC_0(VAR_9);
  if (FUNC_11(VAR_9->lux_wait_result)) {
   VAR_9->lux_wait_result = 0;
   FUNC_12(&VAR_9->wait);
   FUNC_1(VAR_9,
      VAR_9->lux_threshold_hi,
      VAR_9->lux_threshold_lo);
  }
 }


 FUNC_5(VAR_9->client, VAR_1,
      (0 << 1) | (0 << 0));

 if ((VAR_10 & VAR_3))
  FUNC_10(&VAR_9->client->dev.kobj, ((void*)0), "lux0_input");

 if (VAR_9->int_mode_prox && (VAR_10 & VAR_4)) {
  VAR_11 = VAR_6[VAR_9->prox_rate_threshold];
  FUNC_2(VAR_9);
 }


 FUNC_5(VAR_9->client, VAR_1,
      (VAR_9->int_mode_lux << 1) |
      (VAR_9->int_mode_prox << 0));
 FUNC_8(&VAR_9->mutex);





 if (VAR_11) {




  FUNC_3(&VAR_9->prox_work);
  FUNC_9(&VAR_9->prox_work,
    FUNC_6(VAR_11 + 50));
 }
 return VAR_5;
}
