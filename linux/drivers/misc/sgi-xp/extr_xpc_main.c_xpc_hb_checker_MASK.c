
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int (* process_activate_IRQ_rcvd ) () ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 int FUNC_2 (int ,char*,...) ;
 scalar_t__ VAR_3 ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 () ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 int FUNC_6 (int ,int) ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 TYPE_1__ VAR_6 ;
 int FUNC_7 () ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_8 () ;
 int FUNC_9 () ;

__attribute__((used)) static int
FUNC_10(void *VAR_12)
{
 int VAR_13 = 0;



 FUNC_3(VAR_2, FUNC_1(VAR_1));


 VAR_9 = VAR_3 + (VAR_8 * VAR_0);
 FUNC_8();

 while (!VAR_7) {

  FUNC_2(VAR_11, "woke up with %d ticks rem; %d IRQs have "
   "been received\n",
   (int)(VAR_9 - VAR_3),
   VAR_4);


  if (FUNC_5(VAR_9)) {
   VAR_9 = VAR_3 +
       (VAR_8 * VAR_0);

   FUNC_2(VAR_11, "checking remote heartbeats\n");
   FUNC_7();
  }


  if (VAR_4 > 0 || VAR_13 != 0) {
   VAR_13 = 0;
   FUNC_2(VAR_11, "processing activate IRQs "
    "received\n");
   VAR_6.process_activate_IRQ_rcvd();
  }


  (void)FUNC_6(VAR_5,
            (FUNC_5(
      VAR_9) ||
      VAR_4 > 0 ||
      VAR_7));
 }

 FUNC_9();

 FUNC_2(VAR_11, "heartbeat checker is exiting\n");


 FUNC_0(&VAR_10);
 return 0;
}
