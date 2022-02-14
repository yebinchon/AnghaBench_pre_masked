
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hw_xmit {scalar_t__ accnt; scalar_t__ txcmdcnt; int pending; int xmit_lock; } ;
typedef scalar_t__ sint ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct hw_xmit *VAR_0, sint VAR_1)
{
 sint VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_1; VAR_2++, VAR_0++) {
  FUNC_1(&VAR_0->xmit_lock);
  FUNC_0(&VAR_0->pending);
  VAR_0->txcmdcnt = 0;
  VAR_0->accnt = 0;
 }
}
