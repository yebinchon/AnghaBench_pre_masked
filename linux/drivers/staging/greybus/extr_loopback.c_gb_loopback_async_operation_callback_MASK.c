
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct gb_operation {int id; } ;
struct gb_loopback_async_operation {int (* completion ) (struct gb_loopback_async_operation*) ;struct gb_loopback* gb; int ts; } ;
struct gb_loopback {int wq_completion; int outstanding_operations; TYPE_2__* connection; int mutex; int iteration_count; int requests_timedout; int error; int elapsed_nsecs; } ;
typedef int ktime_t ;
struct TYPE_4__ {TYPE_1__* bundle; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,char*,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (struct gb_loopback*,int) ;
 struct gb_loopback_async_operation* FUNC_4 (struct gb_operation*) ;
 int FUNC_5 (struct gb_operation*) ;
 int FUNC_6 (struct gb_operation*) ;
 int FUNC_7 (struct gb_loopback_async_operation*) ;
 int FUNC_8 () ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (struct gb_loopback_async_operation*) ;
 int FUNC_12 (int *) ;

__attribute__((used)) static void FUNC_13(struct gb_operation *VAR_1)
{
 struct gb_loopback_async_operation *VAR_2;
 struct gb_loopback *VAR_3;
 ktime_t VAR_4;
 int VAR_5;

 VAR_4 = FUNC_8();
 VAR_5 = FUNC_6(VAR_1);
 VAR_2 = FUNC_4(VAR_1);
 VAR_3 = VAR_2->gb;

 FUNC_9(&VAR_3->mutex);

 if (!VAR_5 && VAR_2->completion)
  VAR_5 = VAR_2->completion(VAR_2);

 if (!VAR_5) {
  VAR_3->elapsed_nsecs = FUNC_2(VAR_2->ts, VAR_4);
 } else {
  VAR_3->error++;
  if (VAR_5 == -VAR_0)
   VAR_3->requests_timedout++;
 }

 VAR_3->iteration_count++;
 FUNC_3(VAR_3, VAR_5);

 FUNC_10(&VAR_3->mutex);

 FUNC_1(&VAR_3->connection->bundle->dev, "complete operation %d\n",
  VAR_1->id);


 FUNC_0(&VAR_2->gb->outstanding_operations);
 FUNC_12(&VAR_3->wq_completion);


 FUNC_5(VAR_1);
 FUNC_7(VAR_2);
}
