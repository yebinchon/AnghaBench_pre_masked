
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nlm_host {int h_server; int h_reclaim; int h_granted; int h_lockowners; int h_count; int h_name; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct nlm_host*) ;
 int VAR_0 ;
 scalar_t__ FUNC_5 (int *,int *) ;

void FUNC_6(struct nlm_host *VAR_1)
{
 if (VAR_1 == ((void*)0))
  return;

 FUNC_1("lockd: release client host %s\n", VAR_1->h_name);

 FUNC_0(VAR_1->h_server);

 if (FUNC_5(&VAR_1->h_count, &VAR_0)) {
  FUNC_0(!FUNC_2(&VAR_1->h_lockowners));
  FUNC_0(!FUNC_2(&VAR_1->h_granted));
  FUNC_0(!FUNC_2(&VAR_1->h_reclaim));

  FUNC_4(VAR_1);
  FUNC_3(&VAR_0);
 }
}
