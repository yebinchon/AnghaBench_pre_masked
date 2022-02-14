
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uwb_rc_neh {int timer; } ;
struct uwb_rc {int neh_lock; } ;


 int FUNC_0 (struct uwb_rc*,struct uwb_rc_neh*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (struct uwb_rc_neh*) ;

void FUNC_5(struct uwb_rc *VAR_0, struct uwb_rc_neh *VAR_1)
{
 unsigned long VAR_2;

 FUNC_2(&VAR_0->neh_lock, VAR_2);
 FUNC_0(VAR_0, VAR_1);
 FUNC_3(&VAR_0->neh_lock, VAR_2);

 FUNC_1(&VAR_1->timer);
 FUNC_4(VAR_1);
}
