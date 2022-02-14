
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * data; int * notify_link_chg; } ;
struct lmac {int event_cb_lock; TYPE_1__ event_cb; } ;
struct cgx {int dummy; } ;


 int VAR_0 ;
 struct lmac* FUNC_0 (int,struct cgx*) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

int FUNC_3(void *VAR_1, int VAR_2)
{
 struct lmac *VAR_3;
 unsigned long VAR_4;
 struct cgx *VAR_5 = VAR_1;

 VAR_3 = FUNC_0(VAR_2, VAR_5);
 if (!VAR_3)
  return -VAR_0;

 FUNC_1(&VAR_3->event_cb_lock, VAR_4);
 VAR_3->event_cb.notify_link_chg = ((void*)0);
 VAR_3->event_cb.data = ((void*)0);
 FUNC_2(&VAR_3->event_cb_lock, VAR_4);

 return 0;
}
