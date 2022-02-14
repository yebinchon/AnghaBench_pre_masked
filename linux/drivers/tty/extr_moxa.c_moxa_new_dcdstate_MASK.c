
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int lock; } ;
struct moxa_port {int DCDState; TYPE_1__ port; } ;


 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (TYPE_1__*,int) ;

__attribute__((used)) static void FUNC_3(struct moxa_port *VAR_0, u8 VAR_1)
{
 unsigned long VAR_2;
 VAR_1 = !!VAR_1;

 FUNC_0(&VAR_0->port.lock, VAR_2);
 if (VAR_1 != VAR_0->DCDState) {
         VAR_0->DCDState = VAR_1;
         FUNC_1(&VAR_0->port.lock, VAR_2);
  if (!VAR_1)
   FUNC_2(&VAR_0->port, 1);
 }
 else
  FUNC_1(&VAR_0->port.lock, VAR_2);
}
