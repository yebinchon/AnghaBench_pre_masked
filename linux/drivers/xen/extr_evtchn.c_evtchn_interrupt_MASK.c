
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct user_evtchn {int enabled; int port; struct per_user_data* user; } ;
struct per_user_data {scalar_t__ ring_prod; scalar_t__ ring_cons; scalar_t__ ring_size; int ring_overflow; int ring_prod_lock; int evtchn_async_queue; int evtchn_wait; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,char*,int ,struct per_user_data*) ;
 int FUNC_1 (int) ;
 int * FUNC_2 (struct per_user_data*,scalar_t__) ;
 int FUNC_3 (int *,int ,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 () ;

__attribute__((used)) static irqreturn_t FUNC_8(int VAR_3, void *VAR_4)
{
 struct user_evtchn *VAR_5 = VAR_4;
 struct per_user_data *VAR_6 = VAR_5->user;

 FUNC_0(!VAR_5->enabled,
      "Interrupt for port %d, but apparently not enabled; per-user %p\n",
      VAR_5->port, VAR_6);

 FUNC_1(VAR_3);
 VAR_5->enabled = 0;

 FUNC_4(&VAR_6->ring_prod_lock);

 if ((VAR_6->ring_prod - VAR_6->ring_cons) < VAR_6->ring_size) {
  *FUNC_2(VAR_6, VAR_6->ring_prod) = VAR_5->port;
  FUNC_7();
  if (VAR_6->ring_cons == VAR_6->ring_prod++) {
   FUNC_6(&VAR_6->evtchn_wait);
   FUNC_3(&VAR_6->evtchn_async_queue,
        VAR_2, VAR_1);
  }
 } else
  VAR_6->ring_overflow = 1;

 FUNC_5(&VAR_6->ring_prod_lock);

 return VAR_0;
}
