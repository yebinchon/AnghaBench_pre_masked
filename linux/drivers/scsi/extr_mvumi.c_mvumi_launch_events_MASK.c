
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mvumi_hba {int dm_thread; int pnp_count; } ;
struct mvumi_events_wq {int work_q; int * param; int event; struct mvumi_hba* mhba; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *) ;
 struct mvumi_events_wq* FUNC_2 (int,int ) ;
 int VAR_4 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(struct mvumi_hba *VAR_5, u32 VAR_6)
{
 struct mvumi_events_wq *VAR_7;

 while (VAR_6 & (VAR_1 | VAR_2)) {
  if (VAR_6 & VAR_1) {
   FUNC_1(&VAR_5->pnp_count);
   FUNC_4(VAR_5->dm_thread);
   VAR_6 &= ~(VAR_1);
   continue;
  }

  VAR_7 = FUNC_2(sizeof(*VAR_7), VAR_3);
  if (VAR_7) {
   FUNC_0(&VAR_7->work_q, VAR_4);
   VAR_7->mhba = VAR_5;
   VAR_7->event = VAR_0;
   VAR_6 &= ~(VAR_2);
   VAR_7->param = ((void*)0);
   FUNC_3(&VAR_7->work_q);
  }
 }
}
