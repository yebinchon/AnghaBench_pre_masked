
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct io_queue {int intf; struct io_queue* pallocated_free_ioreqs_buf; } ;
struct _adapter {struct io_queue* pio_queue; } ;


 int FUNC_0 (struct io_queue*) ;
 int FUNC_1 (int *) ;

void FUNC_2(struct _adapter *VAR_0)
{
 struct io_queue *VAR_1 = VAR_0->pio_queue;

 if (VAR_1) {
  FUNC_0(VAR_1->pallocated_free_ioreqs_buf);
  VAR_0->pio_queue = ((void*)0);
  FUNC_1(&VAR_1->intf);
  FUNC_0(VAR_1);
 }
}
