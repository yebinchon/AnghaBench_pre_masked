
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct adu_device {int buflock; int interrupt_out_urb; int out_urb_finished; int write_wait; int interrupt_in_urb; int read_urb_finished; scalar_t__ disconnected; } ;


 int VAR_0 ;
 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,int ) ;

__attribute__((used)) static void FUNC_4(struct adu_device *VAR_1)
{
 unsigned long VAR_2;

 if (VAR_1->disconnected)
  return;




 FUNC_0(&VAR_1->buflock, VAR_2);
 if (!VAR_1->read_urb_finished) {
  FUNC_1(&VAR_1->buflock, VAR_2);
  FUNC_2(VAR_1->interrupt_in_urb);
 } else
  FUNC_1(&VAR_1->buflock, VAR_2);

 FUNC_0(&VAR_1->buflock, VAR_2);
 if (!VAR_1->out_urb_finished) {
  FUNC_1(&VAR_1->buflock, VAR_2);
  FUNC_3(VAR_1->write_wait, VAR_1->out_urb_finished,
   VAR_0);
  FUNC_2(VAR_1->interrupt_out_urb);
 } else
  FUNC_1(&VAR_1->buflock, VAR_2);
}
