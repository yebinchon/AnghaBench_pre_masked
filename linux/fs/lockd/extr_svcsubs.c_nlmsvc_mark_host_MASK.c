
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nlm_host {int h_inuse; int * net; } ;



__attribute__((used)) static int
FUNC_0(void *VAR_0, struct nlm_host *VAR_1)
{
 struct nlm_host *VAR_2 = VAR_0;

 if ((VAR_1->net == ((void*)0)) ||
     (VAR_2->net == VAR_1->net))
  VAR_2->h_inuse = 1;
 return 0;
}
