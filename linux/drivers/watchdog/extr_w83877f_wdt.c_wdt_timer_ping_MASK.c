
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timer_list {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int *,scalar_t__) ;
 int VAR_3 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (scalar_t__,int ) ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static void FUNC_6(struct timer_list *VAR_6)
{



 if (FUNC_5(VAR_2, VAR_3)) {

  FUNC_3(&VAR_5);


  FUNC_0(VAR_1);


  FUNC_1(&VAR_4, VAR_2 + VAR_0);

  FUNC_4(&VAR_5);

 } else
  FUNC_2("Heartbeat lost! Will not ping the watchdog\n");
}
