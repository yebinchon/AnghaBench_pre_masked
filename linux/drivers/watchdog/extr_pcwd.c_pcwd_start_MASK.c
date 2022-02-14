
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ revision; int io_lock; scalar_t__ io_addr; int timer; scalar_t__ next_heartbeat; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_9 ;
 int FUNC_1 (int *,scalar_t__) ;
 int FUNC_2 (int,scalar_t__) ;
 TYPE_1__ VAR_10 ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static int FUNC_8(void)
{
 int VAR_11;

 VAR_10.next_heartbeat = VAR_9 + (VAR_8 * VAR_1);


 FUNC_1(&VAR_10.timer, VAR_9 + VAR_5);


 if (VAR_10.revision == VAR_3) {
  FUNC_5(&VAR_10.io_lock);
  FUNC_2(0x00, VAR_10.io_addr + 3);
  FUNC_7(VAR_2);
  VAR_11 = FUNC_0(VAR_10.io_addr + 2);
  FUNC_6(&VAR_10.io_lock);
  if (VAR_11 & VAR_6) {
   FUNC_4("Could not start watchdog\n");
   return -VAR_0;
  }
 }

 if (VAR_7 >= VAR_4)
  FUNC_3("Watchdog started\n");

 return 0;
}
