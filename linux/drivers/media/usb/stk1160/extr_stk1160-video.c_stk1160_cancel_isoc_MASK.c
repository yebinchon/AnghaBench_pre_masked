
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int num_bufs; int * urb; } ;
struct stk1160 {TYPE_1__ isoc_ctl; } ;


 int FUNC_0 (char*,...) ;
 int FUNC_1 (int ) ;

void FUNC_2(struct stk1160 *VAR_0)
{
 int VAR_1, VAR_2 = VAR_0->isoc_ctl.num_bufs;





 if (!VAR_2)
  return;

 FUNC_0("killing %d urbs...\n", VAR_2);

 for (VAR_1 = 0; VAR_1 < VAR_2; VAR_1++) {






  FUNC_1(VAR_0->isoc_ctl.urb[VAR_1]);
 }

 FUNC_0("all urbs killed\n");
}
