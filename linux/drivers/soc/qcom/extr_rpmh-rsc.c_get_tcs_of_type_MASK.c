
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcs_group {int dummy; } ;
struct rsc_drv {struct tcs_group* tcs; } ;



__attribute__((used)) static struct tcs_group *FUNC_0(struct rsc_drv *VAR_0, int VAR_1)
{
 return &VAR_0->tcs[VAR_1];
}
