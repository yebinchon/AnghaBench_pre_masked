
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nlm_lockowner {int list; int host; int pid; int count; } ;
struct nlm_host {int h_lock; int h_lockowners; } ;
typedef int pid_t ;


 int VAR_0 ;
 struct nlm_lockowner* FUNC_0 (struct nlm_host*,int ) ;
 int FUNC_1 (struct nlm_lockowner*) ;
 struct nlm_lockowner* FUNC_2 (int,int ) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (struct nlm_host*) ;
 int FUNC_5 (int *,int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static struct nlm_lockowner *FUNC_8(struct nlm_host *VAR_1, pid_t VAR_2)
{
 struct nlm_lockowner *VAR_3, *VAR_4 = ((void*)0);

 FUNC_6(&VAR_1->h_lock);
 VAR_3 = FUNC_0(VAR_1, VAR_2);

 if (VAR_3 == ((void*)0)) {
  FUNC_7(&VAR_1->h_lock);
  VAR_4 = FUNC_2(sizeof(*VAR_3), VAR_0);
  FUNC_6(&VAR_1->h_lock);
  VAR_3 = FUNC_0(VAR_1, VAR_2);
  if (VAR_3 == ((void*)0) && VAR_4 != ((void*)0)) {
   VAR_3 = VAR_4;

   FUNC_5(&VAR_4->count, 1);
   VAR_4->pid = VAR_2;
   VAR_4->host = FUNC_4(VAR_1);
   FUNC_3(&VAR_4->list, &VAR_1->h_lockowners);
   VAR_4 = ((void*)0);
  }
 }

 FUNC_7(&VAR_1->h_lock);
 FUNC_1(VAR_4);
 return VAR_3;
}
