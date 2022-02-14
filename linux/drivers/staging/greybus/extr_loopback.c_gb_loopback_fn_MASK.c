
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct gb_loopback {int type; scalar_t__ send_count; scalar_t__ iteration_max; scalar_t__ iteration_count; int us_wait; int mutex; int error; scalar_t__ async; int ts; int size; TYPE_2__* dev; int wq; TYPE_1__* connection; } ;
struct gb_bundle {int dev; } ;
struct TYPE_4__ {int kobj; } ;
struct TYPE_3__ {struct gb_bundle* bundle; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (struct gb_loopback*) ;
 int FUNC_2 (struct gb_loopback*,int ) ;
 int FUNC_3 (struct gb_loopback*,int ) ;
 int FUNC_4 (struct gb_loopback*) ;
 int FUNC_5 (struct gb_loopback*) ;
 int FUNC_6 (struct gb_loopback*,int) ;
 int FUNC_7 (struct gb_loopback*) ;
 int FUNC_8 (struct gb_loopback*,int ) ;
 int FUNC_9 (struct gb_loopback*,int ) ;
 int FUNC_10 (struct gb_bundle*) ;
 int FUNC_11 (struct gb_bundle*) ;
 scalar_t__ FUNC_12 () ;
 int FUNC_13 () ;
 scalar_t__ FUNC_14 (int ) ;
 int FUNC_15 (int) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (int *) ;
 int FUNC_18 (int *,int *,char*) ;
 int FUNC_19 (int,int) ;
 int FUNC_20 (int ,int) ;

__attribute__((used)) static int FUNC_21(void *VAR_3)
{
 int VAR_4 = 0;
 int VAR_5 = 0;
 int VAR_6;
 int VAR_7;
 u32 VAR_8;

 struct gb_loopback *VAR_9 = VAR_3;
 struct gb_bundle *VAR_10 = VAR_9->connection->bundle;

 VAR_7 = FUNC_10(VAR_10);
 if (VAR_7)
  return VAR_7;

 while (1) {
  if (!VAR_9->type) {
   FUNC_11(VAR_10);
   FUNC_20(VAR_9->wq, VAR_9->type ||
       FUNC_12());
   VAR_7 = FUNC_10(VAR_10);
   if (VAR_7)
    return VAR_7;
  }

  if (FUNC_12())
   break;


  FUNC_5(VAR_9);
  if (FUNC_12())
   break;

  FUNC_16(&VAR_9->mutex);


  if (VAR_9->send_count == VAR_9->iteration_max) {
   FUNC_17(&VAR_9->mutex);


   FUNC_4(VAR_9);


   FUNC_16(&VAR_9->mutex);
   if (VAR_9->iteration_count == VAR_9->iteration_max) {
    VAR_9->type = 0;
    VAR_9->send_count = 0;
    FUNC_18(&VAR_9->dev->kobj, ((void*)0),
          "iteration_count");
    FUNC_0(&VAR_10->dev, "load test complete\n");
   } else {
    FUNC_0(&VAR_10->dev,
     "continuing on with new test set\n");
   }
   FUNC_17(&VAR_9->mutex);
   continue;
  }
  VAR_8 = VAR_9->size;
  VAR_5 = VAR_9->us_wait;
  VAR_6 = VAR_9->type;
  if (FUNC_14(VAR_9->ts) == 0)
   VAR_9->ts = FUNC_13();


  if (VAR_9->async) {
   if (VAR_6 == VAR_0)
    VAR_4 = FUNC_1(VAR_9);
   else if (VAR_6 == VAR_2)
    VAR_4 = FUNC_3(VAR_9, VAR_8);
   else if (VAR_6 == VAR_1)
    VAR_4 = FUNC_2(VAR_9, VAR_8);

   if (VAR_4) {
    VAR_9->error++;
    VAR_9->iteration_count++;
   }
  } else {

   if (VAR_6 == VAR_0)
    VAR_4 = FUNC_7(VAR_9);
   else if (VAR_6 == VAR_2)
    VAR_4 = FUNC_9(VAR_9, VAR_8);
   else if (VAR_6 == VAR_1)
    VAR_4 = FUNC_8(VAR_9, VAR_8);

   if (VAR_4)
    VAR_9->error++;
   VAR_9->iteration_count++;
   FUNC_6(VAR_9, !!VAR_4);
  }
  VAR_9->send_count++;
  FUNC_17(&VAR_9->mutex);

  if (VAR_5) {
   if (VAR_5 < 20000)
    FUNC_19(VAR_5, VAR_5 + 100);
   else
    FUNC_15(VAR_5 / 1000);
  }
 }

 FUNC_11(VAR_10);

 return 0;
}
