
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct timer_list {int dummy; } ;
struct TYPE_2__ {scalar_t__ revision; int io_lock; int timer; scalar_t__ io_addr; int next_heartbeat; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (int *,scalar_t__) ;
 int FUNC_2 (int,scalar_t__) ;
 TYPE_1__ VAR_4 ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (scalar_t__,int ) ;

__attribute__((used)) static void FUNC_7(struct timer_list *VAR_5)
{
 int VAR_6;



 if (FUNC_6(VAR_3, VAR_4.next_heartbeat)) {

  FUNC_4(&VAR_4.io_lock);
  if (VAR_4.revision == VAR_0) {


   VAR_6 = FUNC_0(VAR_4.io_addr);
   VAR_6 &= 0x0F;
   VAR_6 |= VAR_2;

   FUNC_2(VAR_6, VAR_4.io_addr + 1);
  } else {

   FUNC_2(0x00, VAR_4.io_addr);
  }


  FUNC_1(&VAR_4.timer, VAR_3 + VAR_1);

  FUNC_5(&VAR_4.io_lock);
 } else {
  FUNC_3("Heartbeat lost! Will not ping the watchdog\n");
 }
}
