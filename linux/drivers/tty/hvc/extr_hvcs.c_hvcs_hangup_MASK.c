
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct tty_struct {struct hvcs_struct* driver_data; } ;
struct TYPE_4__ {int count; int * tty; } ;
struct hvcs_struct {TYPE_2__ port; int lock; TYPE_1__* vdev; scalar_t__ chars_in_buffer; int * buffer; scalar_t__ todo_mask; } ;
struct TYPE_3__ {int irq; } ;


 int VAR_0 ;
 int FUNC_0 (int,struct hvcs_struct*) ;
 int FUNC_1 (int *,int,int ) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_6(struct tty_struct * VAR_1)
{
 struct hvcs_struct *VAR_2 = VAR_1->driver_data;
 unsigned long VAR_3;
 int VAR_4;
 int VAR_5;

 FUNC_2(&VAR_2->lock, VAR_3);

 VAR_4 = VAR_2->port.count;






 FUNC_5(VAR_2->vdev);

 VAR_2->todo_mask = 0;


 VAR_1->driver_data = ((void*)0);
 VAR_2->port.tty = ((void*)0);

 VAR_2->port.count = 0;



 FUNC_1(&VAR_2->buffer[0], 0x00, VAR_0);
 VAR_2->chars_in_buffer = 0;

 VAR_5 = VAR_2->vdev->irq;

 FUNC_3(&VAR_2->lock, VAR_3);

 FUNC_0(VAR_5, VAR_2);






 while(VAR_4) {
  --VAR_4;





  FUNC_4(&VAR_2->port);
 }
}
