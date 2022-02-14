
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fc_seq {int dummy; } ;
struct fc_exch {int esb_stat; int arg; int ex_lock; struct fc_seq seq; int ex_refcnt; int state; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct fc_exch*) ;
 int FUNC_3 (struct fc_exch*) ;
 int FUNC_4 (struct fc_exch*) ;
 int FUNC_5 (struct fc_exch*) ;
 int FUNC_6 (struct fc_exch*) ;
 int FUNC_7 (struct fc_exch*,struct fc_seq*,int ) ;
 int FUNC_8 (struct fc_seq*,int *,int ) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;

__attribute__((used)) static void FUNC_11(struct fc_exch *VAR_3)
{
 struct fc_seq *VAR_4;
 int VAR_5 = 1;

 FUNC_9(&VAR_3->ex_lock);
 VAR_3->state |= VAR_2;
 FUNC_6(VAR_3);
 if (VAR_3->esb_stat & VAR_0)
  FUNC_1(&VAR_3->ex_refcnt);
 VAR_3->esb_stat &= ~VAR_0;
 VAR_4 = &VAR_3->seq;
 VAR_5 = FUNC_3(VAR_3);
 FUNC_10(&VAR_3->ex_lock);

 FUNC_4(VAR_3);

 if (!VAR_5)
  FUNC_2(VAR_3);

 FUNC_7(VAR_3, VAR_4, FUNC_0(-VAR_1));
 FUNC_8(VAR_4, ((void*)0), VAR_3->arg);
 FUNC_5(VAR_3);
}
