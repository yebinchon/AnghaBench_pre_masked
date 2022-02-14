
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ftmac100_rxdes {int dummy; } ;
struct ftmac100 {int dummy; } ;


 struct ftmac100_rxdes* FUNC_0 (struct ftmac100*) ;
 int FUNC_1 (struct ftmac100*) ;
 scalar_t__ FUNC_2 (struct ftmac100_rxdes*) ;
 int FUNC_3 (struct ftmac100_rxdes*) ;
 int FUNC_4 (struct ftmac100_rxdes*) ;

__attribute__((used)) static struct ftmac100_rxdes *
FUNC_5(struct ftmac100 *VAR_0)
{
 struct ftmac100_rxdes *VAR_1 = FUNC_0(VAR_0);

 while (!FUNC_3(VAR_1)) {
  if (FUNC_2(VAR_1))
   return VAR_1;

  FUNC_4(VAR_1);
  FUNC_1(VAR_0);
  VAR_1 = FUNC_0(VAR_0);
 }

 return ((void*)0);
}
