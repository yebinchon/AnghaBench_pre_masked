
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct crq_server_adapter {int work_task; int dev; int reset_wait_queue; } ;
struct TYPE_2__ {scalar_t__ state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (int ,char*) ;
 TYPE_1__ VAR_3 ;
 int FUNC_3 (struct crq_server_adapter*) ;
 scalar_t__ FUNC_4 (struct crq_server_adapter*,int,int ) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_5 () ;
 int FUNC_6 (int ,int) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ,int) ;

__attribute__((used)) static int FUNC_12(void *VAR_7)
{
 struct crq_server_adapter *VAR_8 = VAR_7;
 int VAR_9;

 FUNC_6(VAR_2, -20);

 while (!FUNC_5()) {
  FUNC_11(VAR_8->reset_wait_queue,
   (VAR_3.state == VAR_6) ||
   FUNC_5());

  if (FUNC_5())
   break;

  FUNC_0(VAR_8->dev, "CRQ resetting in process context");
  FUNC_7(&VAR_8->work_task);

  VAR_9 = FUNC_3(VAR_8);

  if (VAR_9 != VAR_1 && VAR_9 != VAR_0) {
   FUNC_1(VAR_8->dev, "Error initializing CRQ.  rc = 0x%x\n",
    VAR_9);
   VAR_3.state = VAR_5;
  } else {
   VAR_3.state = VAR_4;

   if (FUNC_4(VAR_8, 0xC001000000000000LL, 0)
       != 0 && VAR_9 != VAR_0)
    FUNC_2(VAR_8->dev, "Failed to send initialize CRQ message\n");
  }

  FUNC_10(FUNC_9(VAR_8->dev));
  FUNC_8(&VAR_8->work_task);
 }

 return 0;
}
