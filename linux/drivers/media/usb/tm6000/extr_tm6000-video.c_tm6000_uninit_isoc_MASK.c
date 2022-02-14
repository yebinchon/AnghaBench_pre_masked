
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct urb {int dummy; } ;
struct TYPE_2__ {int num_bufs; struct urb** transfer_buffer; struct urb** urb; int * buf; } ;
struct tm6000_core {TYPE_1__ isoc_ctl; } ;


 int VAR_0 ;
 int FUNC_0 (struct urb**) ;
 int FUNC_1 (struct tm6000_core*) ;
 int FUNC_2 (struct urb*) ;
 int FUNC_3 (struct urb*) ;
 int FUNC_4 (struct urb*) ;

__attribute__((used)) static void FUNC_5(struct tm6000_core *VAR_1)
{
 struct urb *VAR_2;
 int VAR_3;

 VAR_1->isoc_ctl.buf = ((void*)0);
 for (VAR_3 = 0; VAR_3 < VAR_1->isoc_ctl.num_bufs; VAR_3++) {
  VAR_2 = VAR_1->isoc_ctl.urb[VAR_3];
  if (VAR_2) {
   FUNC_3(VAR_2);
   FUNC_4(VAR_2);
   FUNC_2(VAR_2);
   VAR_1->isoc_ctl.urb[VAR_3] = ((void*)0);
  }
  VAR_1->isoc_ctl.transfer_buffer[VAR_3] = ((void*)0);
 }

 if (!VAR_0)
  FUNC_1(VAR_1);

 FUNC_0(VAR_1->isoc_ctl.urb);
 FUNC_0(VAR_1->isoc_ctl.transfer_buffer);

 VAR_1->isoc_ctl.urb = ((void*)0);
 VAR_1->isoc_ctl.transfer_buffer = ((void*)0);
 VAR_1->isoc_ctl.num_bufs = 0;
}
