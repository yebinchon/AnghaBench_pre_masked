
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct gb_operation {TYPE_3__* response; TYPE_1__* request; } ;
struct gb_loopback {int elapsed_nsecs; TYPE_4__* connection; } ;
typedef int ktime_t ;
struct TYPE_8__ {TYPE_2__* bundle; } ;
struct TYPE_7__ {int payload_size; void* payload; } ;
struct TYPE_6__ {int dev; } ;
struct TYPE_5__ {void* payload; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,char*,int,...) ;
 int FUNC_1 (int ,int ) ;
 struct gb_operation* FUNC_2 (TYPE_4__*,int,int,int,int ) ;
 int FUNC_3 (struct gb_operation*) ;
 int FUNC_4 (struct gb_operation*) ;
 int FUNC_5 () ;
 int FUNC_6 (void*,void*,int) ;

__attribute__((used)) static int FUNC_7(struct gb_loopback *VAR_3, int VAR_4,
          void *VAR_5, int VAR_6,
          void *VAR_7, int VAR_8)
{
 struct gb_operation *VAR_9;
 ktime_t VAR_10, VAR_11;
 int VAR_12;

 VAR_10 = FUNC_5();
 VAR_9 = FUNC_2(VAR_3->connection, VAR_4, VAR_6,
     VAR_8, VAR_2);
 if (!VAR_9)
  return -VAR_1;

 if (VAR_6)
  FUNC_6(VAR_9->request->payload, VAR_5, VAR_6);

 VAR_12 = FUNC_4(VAR_9);
 if (VAR_12) {
  FUNC_0(&VAR_3->connection->bundle->dev,
   "synchronous operation failed: %d\n", VAR_12);
  goto out_put_operation;
 } else {
  if (VAR_8 == VAR_9->response->payload_size) {
   FUNC_6(VAR_7, VAR_9->response->payload,
          VAR_8);
  } else {
   FUNC_0(&VAR_3->connection->bundle->dev,
    "response size %zu expected %d\n",
    VAR_9->response->payload_size,
    VAR_8);
   VAR_12 = -VAR_0;
   goto out_put_operation;
  }
 }

 VAR_11 = FUNC_5();


 VAR_3->elapsed_nsecs = FUNC_1(VAR_10, VAR_11);

out_put_operation:
 FUNC_3(VAR_9);

 return VAR_12;
}
