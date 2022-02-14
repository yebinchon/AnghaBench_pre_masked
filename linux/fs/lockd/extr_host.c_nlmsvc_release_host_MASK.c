
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nlm_host {int h_count; int h_server; int h_name; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (int *) ;

void FUNC_3(struct nlm_host *VAR_0)
{
 if (VAR_0 == ((void*)0))
  return;

 FUNC_1("lockd: release server host %s\n", VAR_0->h_name);

 FUNC_0(!VAR_0->h_server);
 FUNC_2(&VAR_0->h_count);
}
