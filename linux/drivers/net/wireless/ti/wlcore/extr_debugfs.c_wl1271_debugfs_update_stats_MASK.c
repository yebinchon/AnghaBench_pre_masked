
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ fw_stats_update; int fw_stats; } ;
struct wl1271 {scalar_t__ state; int mutex; int dev; TYPE_1__ stats; int plt; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_8 (int) ;
 int FUNC_9 (struct wl1271*,int ) ;

void FUNC_10(struct wl1271 *VAR_3)
{
 int VAR_4;

 FUNC_1(&VAR_3->mutex);

 if (FUNC_8(VAR_3->state != VAR_1))
  goto out;

 VAR_4 = FUNC_3(VAR_3->dev);
 if (VAR_4 < 0) {
  FUNC_6(VAR_3->dev);
  goto out;
 }

 if (!VAR_3->plt &&
     FUNC_7(VAR_2, VAR_3->stats.fw_stats_update +
         FUNC_0(VAR_0))) {
  FUNC_9(VAR_3, VAR_3->stats.fw_stats);
  VAR_3->stats.fw_stats_update = VAR_2;
 }

 FUNC_4(VAR_3->dev);
 FUNC_5(VAR_3->dev);

out:
 FUNC_2(&VAR_3->mutex);
}
