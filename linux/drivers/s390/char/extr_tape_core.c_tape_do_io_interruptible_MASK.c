
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tape_request {int rc; int * callback; int * callback_data; } ;
struct tape_device {int cdev_id; int wait_queue; int cdev; } ;


 int FUNC_0 (int,char*,int ) ;
 int VAR_0 ;
 int FUNC_1 (struct tape_device*,struct tape_request*) ;
 int FUNC_2 (struct tape_device*,struct tape_request*) ;
 int * VAR_1 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int ) ;

int
FUNC_7(struct tape_device *VAR_2,
    struct tape_request *VAR_3)
{
 int VAR_4;

 FUNC_4(FUNC_3(VAR_2->cdev));

 VAR_3->callback = VAR_1;
 VAR_3->callback_data = &VAR_2->wait_queue;
 VAR_4 = FUNC_2(VAR_2, VAR_3);
 FUNC_5(FUNC_3(VAR_2->cdev));
 if (VAR_4)
  return VAR_4;

 VAR_4 = FUNC_6(VAR_2->wait_queue,
          (VAR_3->callback == ((void*)0)));
 if (VAR_4 != -VAR_0)

  return VAR_3->rc;


 FUNC_4(FUNC_3(VAR_2->cdev));
 VAR_4 = FUNC_1(VAR_2, VAR_3);
 FUNC_5(FUNC_3(VAR_2->cdev));
 if (VAR_4 == 0) {

  do {
   VAR_4 = FUNC_6(
    VAR_2->wait_queue,
    (VAR_3->callback == ((void*)0))
   );
  } while (VAR_4 == -VAR_0);

  FUNC_0(3, "IO stopped on %08x\n", VAR_2->cdev_id);
  VAR_4 = -VAR_0;
 }
 return VAR_4;
}
