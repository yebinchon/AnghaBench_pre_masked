
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct channel {int upl; TYPE_1__* ppp; } ;
struct TYPE_2__ {int xmit_recursion; } ;


 int FUNC_0 (struct channel*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(struct channel *VAR_0)
{
 FUNC_1(&VAR_0->upl);
 if (VAR_0->ppp) {
  (*FUNC_3(VAR_0->ppp->xmit_recursion))++;
  FUNC_0(VAR_0);
  (*FUNC_3(VAR_0->ppp->xmit_recursion))--;
 } else {
  FUNC_0(VAR_0);
 }
 FUNC_2(&VAR_0->upl);
}
