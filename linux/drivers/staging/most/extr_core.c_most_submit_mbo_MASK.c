
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mbo {int context; } ;


 scalar_t__ FUNC_0 (int,char*) ;
 int FUNC_1 (struct mbo*) ;

void FUNC_2(struct mbo *VAR_0)
{
 if (FUNC_0(!VAR_0 || !VAR_0->context,
        "bad mbo or missing channel reference\n"))
  return;

 FUNC_1(VAR_0);
}
