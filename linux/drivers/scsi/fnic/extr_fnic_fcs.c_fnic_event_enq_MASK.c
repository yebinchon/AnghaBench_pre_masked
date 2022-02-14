
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fnic_event {int event; int list; struct fnic* fnic; } ;
struct fnic {int event_work; int fnic_lock; int evlist; } ;
typedef enum fnic_evt { ____Placeholder_fnic_evt } fnic_evt ;


 int VAR_0 ;
 struct fnic_event* FUNC_0 (int,int ) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_5(struct fnic *VAR_1, enum fnic_evt VAR_2)
{
 struct fnic_event *VAR_3;
 unsigned long VAR_4;

 VAR_3 = FUNC_0(sizeof(*VAR_3), VAR_0);
 if (!VAR_3)
  return;

 VAR_3->fnic = VAR_1;
 VAR_3->event = VAR_2;

 FUNC_3(&VAR_1->fnic_lock, VAR_4);
 FUNC_1(&VAR_3->list, &VAR_1->evlist);
 FUNC_4(&VAR_1->fnic_lock, VAR_4);

 FUNC_2(&VAR_1->event_work);
}
