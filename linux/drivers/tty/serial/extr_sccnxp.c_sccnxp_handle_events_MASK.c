
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int nr; } ;
struct sccnxp_port {int imr; int * port; scalar_t__* opened; TYPE_1__ uart; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int ) ;

__attribute__((used)) static void FUNC_5(struct sccnxp_port *VAR_1)
{
 int VAR_2;
 u8 VAR_3;

 do {
  VAR_3 = FUNC_4(&VAR_1->port[0], VAR_0);
  VAR_3 &= VAR_1->imr;
  if (!VAR_3)
   break;

  for (VAR_2 = 0; VAR_2 < VAR_1->uart.nr; VAR_2++) {
   if (VAR_1->opened[VAR_2] && (VAR_3 & FUNC_0(VAR_2)))
    FUNC_2(&VAR_1->port[VAR_2]);
   if (VAR_1->opened[VAR_2] && (VAR_3 & FUNC_1(VAR_2)))
    FUNC_3(&VAR_1->port[VAR_2]);
  }
 } while (1);
}
