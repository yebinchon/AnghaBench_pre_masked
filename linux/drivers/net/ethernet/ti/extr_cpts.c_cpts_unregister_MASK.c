
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cpts {int refclk; int txq; int * clock; } ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (struct cpts*,int ,int ) ;
 int VAR_1 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

void FUNC_5(struct cpts *VAR_2)
{
 if (FUNC_0(!VAR_2->clock))
  return;

 FUNC_3(VAR_2->clock);
 VAR_2->clock = ((void*)0);

 FUNC_2(VAR_2, 0, VAR_1);
 FUNC_2(VAR_2, 0, VAR_0);


 FUNC_4(&VAR_2->txq);

 FUNC_1(VAR_2->refclk);
}
