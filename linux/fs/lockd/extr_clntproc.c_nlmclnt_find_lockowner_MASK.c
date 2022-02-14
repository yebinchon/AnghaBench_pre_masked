
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nlm_lockowner {int list; int host; int pid; int owner; int count; } ;
struct nlm_host {int h_lock; int h_lockowners; } ;
typedef int fl_owner_t ;


 int VAR_0 ;
 int FUNC_0 (struct nlm_host*) ;
 struct nlm_lockowner* FUNC_1 (struct nlm_host*,int ) ;
 int FUNC_2 (struct nlm_lockowner*) ;
 struct nlm_lockowner* FUNC_3 (int,int ) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (struct nlm_host*) ;
 int FUNC_6 (int *,int) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static struct nlm_lockowner *FUNC_9(struct nlm_host *VAR_1, fl_owner_t VAR_2)
{
 struct nlm_lockowner *VAR_3, *VAR_4 = ((void*)0);

 FUNC_7(&VAR_1->h_lock);
 VAR_3 = FUNC_1(VAR_1, VAR_2);
 if (VAR_3 == ((void*)0)) {
  FUNC_8(&VAR_1->h_lock);
  VAR_4 = FUNC_3(sizeof(*VAR_4), VAR_0);
  FUNC_7(&VAR_1->h_lock);
  VAR_3 = FUNC_1(VAR_1, VAR_2);
  if (VAR_3 == ((void*)0) && VAR_4 != ((void*)0)) {
   VAR_3 = VAR_4;
   FUNC_6(&VAR_4->count, 1);
   VAR_4->owner = VAR_2;
   VAR_4->pid = FUNC_0(VAR_1);
   VAR_4->host = FUNC_5(VAR_1);
   FUNC_4(&VAR_4->list, &VAR_1->h_lockowners);
   VAR_4 = ((void*)0);
  }
 }
 FUNC_8(&VAR_1->h_lock);
 FUNC_2(VAR_4);
 return VAR_3;
}
