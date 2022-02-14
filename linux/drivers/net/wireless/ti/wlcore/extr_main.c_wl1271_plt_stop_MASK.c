
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wl1271 {int plt; int mutex; scalar_t__ rx_counter; int plt_mode; int state; int sleep_auth; scalar_t__ flags; int tx_watchdog_work; int recovery_work; int netstack_work; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (char*,int ) ;
 int FUNC_5 (struct wl1271*) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (struct wl1271*) ;
 int FUNC_8 (struct wl1271*) ;
 int FUNC_9 (struct wl1271*) ;

int FUNC_10(struct wl1271 *VAR_4)
{
 int VAR_5 = 0;

 FUNC_6("power down");






 FUNC_8(VAR_4);
 FUNC_2(&VAR_4->mutex);
 if (!VAR_4->plt) {
  FUNC_3(&VAR_4->mutex);






  FUNC_9(VAR_4);

  FUNC_4("cannot power down because not in PLT "
        "state: %d", VAR_4->state);
  VAR_5 = -VAR_0;
  goto out;
 }

 FUNC_3(&VAR_4->mutex);

 FUNC_5(VAR_4);
 FUNC_1(&VAR_4->netstack_work);
 FUNC_1(&VAR_4->recovery_work);
 FUNC_0(&VAR_4->tx_watchdog_work);

 FUNC_2(&VAR_4->mutex);
 FUNC_7(VAR_4);
 VAR_4->flags = 0;
 VAR_4->sleep_auth = VAR_2;
 VAR_4->state = VAR_3;
 VAR_4->plt = 0;
 VAR_4->plt_mode = VAR_1;
 VAR_4->rx_counter = 0;
 FUNC_3(&VAR_4->mutex);

out:
 return VAR_5;
}
