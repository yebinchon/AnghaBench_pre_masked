
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int mutex; } ;
struct optee {TYPE_1__ call_queue; int supp; int wait_queue; scalar_t__ memremaped_shm; int pool; int teedev; int supp_teedev; } ;


 int FUNC_0 (struct optee*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct optee*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static void FUNC_8(struct optee *VAR_0)
{





 FUNC_3(VAR_0);





 FUNC_6(VAR_0->supp_teedev);
 FUNC_6(VAR_0->teedev);

 FUNC_7(VAR_0->pool);
 if (VAR_0->memremaped_shm)
  FUNC_1(VAR_0->memremaped_shm);
 FUNC_5(&VAR_0->wait_queue);
 FUNC_4(&VAR_0->supp);
 FUNC_2(&VAR_0->call_queue.mutex);

 FUNC_0(VAR_0);
}
