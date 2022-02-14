
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wl1271 {int flags; int wl_lock; int * tx_queue_count; int dummy_packet; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 scalar_t__ FUNC_4 (int ,int *) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct wl1271*) ;

int FUNC_7(struct wl1271 *VAR_2)
{
 unsigned long VAR_3;
 int VAR_4;


 if (FUNC_4(VAR_0, &VAR_2->flags))
  return 0;

 VAR_4 = FUNC_5(FUNC_1(VAR_2->dummy_packet));

 FUNC_2(&VAR_2->wl_lock, VAR_3);
 FUNC_0(VAR_0, &VAR_2->flags);
 VAR_2->tx_queue_count[VAR_4]++;
 FUNC_3(&VAR_2->wl_lock, VAR_3);


 if (!FUNC_4(VAR_1, &VAR_2->flags))
  return FUNC_6(VAR_2);





 return 0;
}
