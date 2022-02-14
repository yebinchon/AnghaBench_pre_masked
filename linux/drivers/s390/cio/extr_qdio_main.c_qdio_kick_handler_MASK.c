
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct qdio_q {int first_to_kick; scalar_t__ qdio_error; TYPE_1__* irq_ptr; int nr; int (* handler ) (int ,scalar_t__,int ,int,unsigned int,int ) ;scalar_t__ is_input_q; } ;
struct TYPE_2__ {scalar_t__ state; int int_parm; int cdev; } ;


 int FUNC_0 (int ,TYPE_1__*,char*,int,unsigned int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int,unsigned int) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (struct qdio_q*,int ) ;
 int FUNC_3 (int ,scalar_t__,int ,int,unsigned int,int ) ;
 scalar_t__ FUNC_4 (int) ;

__attribute__((used)) static void FUNC_5(struct qdio_q *VAR_4, unsigned int VAR_5)
{
 int VAR_6 = VAR_4->first_to_kick;

 if (FUNC_4(VAR_4->irq_ptr->state != VAR_1))
  return;

 if (VAR_4->is_input_q) {
  FUNC_2(VAR_4, VAR_2);
  FUNC_0(VAR_0, VAR_4->irq_ptr, "kih s:%02x c:%02x", VAR_6, VAR_5);
 } else {
  FUNC_2(VAR_4, VAR_3);
  FUNC_0(VAR_0, VAR_4->irq_ptr, "koh: s:%02x c:%02x",
         VAR_6, VAR_5);
 }

 VAR_4->handler(VAR_4->irq_ptr->cdev, VAR_4->qdio_error, VAR_4->nr, VAR_6, VAR_5,
     VAR_4->irq_ptr->int_parm);


 VAR_4->first_to_kick = FUNC_1(VAR_6, VAR_5);
 VAR_4->qdio_error = 0;
}
