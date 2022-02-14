
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct async {int mem_usage; TYPE_1__* urb; TYPE_2__* usbm; scalar_t__ cred; int pid; } ;
struct TYPE_4__ {int urb_use_count; } ;
struct TYPE_3__ {int num_sgs; struct async* setup_packet; struct async* transfer_buffer; struct async* sg; } ;


 int FUNC_0 (TYPE_2__*,int *) ;
 int FUNC_1 (struct async*) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (struct async*) ;
 struct async* FUNC_5 (struct async*) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static void FUNC_8(struct async *VAR_0)
{
 int VAR_1;

 FUNC_3(VAR_0->pid);
 if (VAR_0->cred)
  FUNC_2(VAR_0->cred);
 for (VAR_1 = 0; VAR_1 < VAR_0->urb->num_sgs; VAR_1++) {
  if (FUNC_4(&VAR_0->urb->sg[VAR_1]))
   FUNC_1(FUNC_5(&VAR_0->urb->sg[VAR_1]));
 }

 FUNC_1(VAR_0->urb->sg);
 if (VAR_0->usbm == ((void*)0))
  FUNC_1(VAR_0->urb->transfer_buffer);
 else
  FUNC_0(VAR_0->usbm, &VAR_0->usbm->urb_use_count);

 FUNC_1(VAR_0->urb->setup_packet);
 FUNC_6(VAR_0->urb);
 FUNC_7(VAR_0->mem_usage);
 FUNC_1(VAR_0);
}
