
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cgroup_file {unsigned long notified_at; scalar_t__ kn; int notify_timer; } ;


 unsigned long VAR_0 ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 scalar_t__ FUNC_3 (unsigned long,unsigned long,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

void FUNC_5(struct cgroup_file *VAR_3)
{
 unsigned long VAR_4;

 FUNC_1(&VAR_1, VAR_4);
 if (VAR_3->kn) {
  unsigned long VAR_5 = VAR_3->notified_at;
  unsigned long VAR_6 = VAR_5 + VAR_0;

  if (FUNC_3(VAR_2, VAR_5, VAR_6)) {
   FUNC_4(&VAR_3->notify_timer, VAR_6);
  } else {
   FUNC_0(VAR_3->kn);
   VAR_3->notified_at = VAR_2;
  }
 }
 FUNC_2(&VAR_1, VAR_4);
}
