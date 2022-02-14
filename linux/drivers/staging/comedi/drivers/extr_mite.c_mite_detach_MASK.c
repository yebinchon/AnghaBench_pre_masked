
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mite {scalar_t__ mmio; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct mite*) ;

void FUNC_2(struct mite *VAR_0)
{
 if (!VAR_0)
  return;

 if (VAR_0->mmio)
  FUNC_0(VAR_0->mmio);

 FUNC_1(VAR_0);
}
