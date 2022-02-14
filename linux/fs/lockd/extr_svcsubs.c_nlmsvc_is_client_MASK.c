
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nlm_host {TYPE_1__* h_nsmhandle; scalar_t__ h_server; } ;
struct TYPE_2__ {int sm_sticky; } ;



__attribute__((used)) static int
FUNC_0(void *VAR_0, struct nlm_host *VAR_1)
{
 struct nlm_host *VAR_2 = VAR_0;

 if (VAR_2->h_server) {




  if (VAR_2->h_nsmhandle)
   VAR_2->h_nsmhandle->sm_sticky = 1;
  return 1;
 } else
  return 0;
}
