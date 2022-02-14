
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tape_request {int rc; int * callback; int * callback_data; } ;
struct tape_device {int wait_queue; int cdev; } ;


 int FUNC_0 (struct tape_device*,struct tape_request*) ;
 int * VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ) ;

int
FUNC_5(struct tape_device *VAR_1, struct tape_request *VAR_2)
{
 int VAR_3;

 FUNC_2(FUNC_1(VAR_1->cdev));

 VAR_2->callback = VAR_0;
 VAR_2->callback_data = &VAR_1->wait_queue;

 VAR_3 = FUNC_0(VAR_1, VAR_2);
 FUNC_3(FUNC_1(VAR_1->cdev));
 if (VAR_3)
  return VAR_3;

 FUNC_4(VAR_1->wait_queue, (VAR_2->callback == ((void*)0)));

 return VAR_2->rc;
}
