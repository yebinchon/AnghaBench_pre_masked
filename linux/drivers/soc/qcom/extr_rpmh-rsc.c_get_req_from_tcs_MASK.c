
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcs_request {int dummy; } ;
struct tcs_group {int mask; int offset; struct tcs_request const** req; } ;
struct rsc_drv {struct tcs_group* tcs; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;

__attribute__((used)) static const struct tcs_request *FUNC_1(struct rsc_drv *VAR_1,
        int VAR_2)
{
 struct tcs_group *VAR_3;
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
  VAR_3 = &VAR_1->tcs[VAR_4];
  if (VAR_3->mask & FUNC_0(VAR_2))
   return VAR_3->req[VAR_2 - VAR_3->offset];
 }

 return ((void*)0);
}
