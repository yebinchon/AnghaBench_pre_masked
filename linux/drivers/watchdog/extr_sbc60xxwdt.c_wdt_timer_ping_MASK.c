
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timer_list {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int *,scalar_t__) ;
 int VAR_2 ;
 int FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (scalar_t__,int ) ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static void FUNC_4(struct timer_list *VAR_5)
{



 if (FUNC_3(VAR_1, VAR_2)) {

  FUNC_0(VAR_4);

  FUNC_1(&VAR_3, VAR_1 + VAR_0);
 } else
  FUNC_2("Heartbeat lost! Will not ping the watchdog\n");
}
