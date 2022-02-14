
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uwb_rc_neh {scalar_t__ context; scalar_t__ completed; struct uwb_rc* rc; } ;
struct uwb_rc {int neh_lock; } ;
struct timer_list {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct uwb_rc*,struct uwb_rc_neh*) ;
 struct uwb_rc_neh* FUNC_1 (int ,struct timer_list*,int ) ;
 struct uwb_rc_neh* VAR_1 ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 int VAR_2 ;
 int FUNC_4 (struct uwb_rc_neh*,int *,int ) ;

__attribute__((used)) static void FUNC_5(struct timer_list *VAR_3)
{
 struct uwb_rc_neh *VAR_4 = FUNC_1(VAR_4, VAR_3, VAR_2);
 struct uwb_rc *VAR_5 = VAR_4->rc;
 unsigned long VAR_6;

 FUNC_2(&VAR_5->neh_lock, VAR_6);
 if (VAR_4->completed) {
  FUNC_3(&VAR_5->neh_lock, VAR_6);
  return;
 }
 if (VAR_4->context)
  FUNC_0(VAR_5, VAR_4);
 else
  VAR_4 = ((void*)0);
 FUNC_3(&VAR_5->neh_lock, VAR_6);

 if (VAR_4)
  FUNC_4(VAR_4, ((void*)0), -VAR_0);
}
