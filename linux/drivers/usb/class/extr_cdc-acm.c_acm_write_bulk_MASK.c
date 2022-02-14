
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct urb {int status; scalar_t__ actual_length; scalar_t__ transfer_buffer_length; struct acm_wb* context; } ;
struct acm_wb {struct acm* instance; } ;
struct acm {int work; int flags; int write_lock; TYPE_1__* data; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (struct acm*,struct acm_wb*) ;
 int FUNC_1 (int *,char*,scalar_t__,scalar_t__,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_6(struct urb *VAR_1)
{
 struct acm_wb *VAR_2 = VAR_1->context;
 struct acm *VAR_3 = VAR_2->instance;
 unsigned long VAR_4;
 int VAR_5 = VAR_1->status;

 if (VAR_5 || (VAR_1->actual_length != VAR_1->transfer_buffer_length))
  FUNC_1(&VAR_3->data->dev, "wrote len %d/%d, status %d\n",
   VAR_1->actual_length,
   VAR_1->transfer_buffer_length,
   VAR_5);

 FUNC_4(&VAR_3->write_lock, VAR_4);
 FUNC_0(VAR_3, VAR_2);
 FUNC_5(&VAR_3->write_lock, VAR_4);
 FUNC_3(VAR_0, &VAR_3->flags);
 FUNC_2(&VAR_3->work);
}
