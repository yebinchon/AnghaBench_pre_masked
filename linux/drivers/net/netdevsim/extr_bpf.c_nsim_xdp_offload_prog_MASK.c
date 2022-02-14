
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct netdevsim {scalar_t__ bpf_offloaded; } ;
struct netdev_bpf {scalar_t__ prog; int extack; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct netdevsim*,scalar_t__,int ) ;
 int FUNC_2 (struct netdevsim*) ;

__attribute__((used)) static int FUNC_3(struct netdevsim *VAR_1, struct netdev_bpf *VAR_2)
{
 if (!FUNC_2(VAR_1) && !VAR_2->prog)
  return 0;
 if (!FUNC_2(VAR_1) && VAR_2->prog && VAR_1->bpf_offloaded) {
  FUNC_0(VAR_2->extack, "TC program is already loaded");
  return -VAR_0;
 }

 return FUNC_1(VAR_1, VAR_2->prog, FUNC_2(VAR_1));
}
