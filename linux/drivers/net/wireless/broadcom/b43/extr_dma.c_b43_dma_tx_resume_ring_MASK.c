
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct b43_dmaring {TYPE_1__* ops; int tx; } ;
struct TYPE_2__ {int (* tx_resume ) (struct b43_dmaring*) ;} ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct b43_dmaring*) ;

__attribute__((used)) static void FUNC_2(struct b43_dmaring *VAR_0)
{
 FUNC_0(!VAR_0->tx);
 VAR_0->ops->tx_resume(VAR_0);
}
