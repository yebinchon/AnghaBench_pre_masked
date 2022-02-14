
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uwb_rc_neh {int timer; scalar_t__ context; } ;
struct uwb_rc {int neh_lock; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *,scalar_t__) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

void FUNC_4(struct uwb_rc *VAR_2, struct uwb_rc_neh *VAR_3)
{
 unsigned long VAR_4;

 FUNC_2(&VAR_2->neh_lock, VAR_4);
 if (VAR_3->context)
  FUNC_0(&VAR_3->timer,
     VAR_1 + FUNC_1(VAR_0));
 FUNC_3(&VAR_2->neh_lock, VAR_4);
}
