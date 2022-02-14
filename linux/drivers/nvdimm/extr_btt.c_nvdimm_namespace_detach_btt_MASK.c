
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nd_btt {struct btt* btt; } ;
struct btt {int dummy; } ;


 int FUNC_0 (struct btt*) ;

int FUNC_1(struct nd_btt *VAR_0)
{
 struct btt *VAR_1 = VAR_0->btt;

 FUNC_0(VAR_1);
 VAR_0->btt = ((void*)0);

 return 0;
}
