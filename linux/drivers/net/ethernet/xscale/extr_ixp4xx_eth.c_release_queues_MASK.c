
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct port {TYPE_1__* plat; int id; } ;
struct TYPE_2__ {int txreadyq; int rxq; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct port *VAR_2)
{
 FUNC_2(FUNC_0(VAR_2->id));
 FUNC_2(VAR_2->plat->rxq);
 FUNC_2(FUNC_1(VAR_2->id));
 FUNC_2(VAR_2->plat->txreadyq);

 if (!VAR_1)
  FUNC_2(VAR_0);
}
