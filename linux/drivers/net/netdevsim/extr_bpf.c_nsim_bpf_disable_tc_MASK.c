
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct netdevsim {scalar_t__ bpf_offloaded; } ;


 int VAR_0 ;
 int FUNC_0 (struct netdevsim*) ;

int FUNC_1(struct netdevsim *VAR_1)
{
 if (VAR_1->bpf_offloaded && !FUNC_0(VAR_1))
  return -VAR_0;
 return 0;
}
