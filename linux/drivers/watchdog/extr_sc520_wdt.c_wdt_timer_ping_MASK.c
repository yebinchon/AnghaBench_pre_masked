
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timer_list {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *,scalar_t__) ;
 int VAR_2 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (scalar_t__,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_5 (int,int ) ;

__attribute__((used)) static void FUNC_6(struct timer_list *VAR_6)
{



 if (FUNC_4(VAR_1, VAR_2)) {

  FUNC_2(&VAR_4);
  FUNC_5(0xAAAA, VAR_5);
  FUNC_5(0x5555, VAR_5);
  FUNC_3(&VAR_4);


  FUNC_0(&VAR_3, VAR_1 + VAR_0);
 } else
  FUNC_1("Heartbeat lost! Will not ping the watchdog\n");
}
