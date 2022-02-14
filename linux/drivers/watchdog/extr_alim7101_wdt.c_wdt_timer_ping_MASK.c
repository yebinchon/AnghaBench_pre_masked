
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timer_list {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 char VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (int *,scalar_t__) ;
 int VAR_6 ;
 int FUNC_1 (int ,int,char*) ;
 int FUNC_2 (int ,int,char) ;
 int FUNC_3 (char*) ;
 scalar_t__ FUNC_4 (scalar_t__,int ) ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;

__attribute__((used)) static void FUNC_5(struct timer_list *VAR_9)
{



 char VAR_10;

 if (FUNC_4(VAR_5, VAR_6)) {

  FUNC_1(VAR_4, 0x92, &VAR_10);
  FUNC_2(VAR_4,
     VAR_1, (VAR_10 & ~VAR_2));
  FUNC_2(VAR_4,
     VAR_1, (VAR_10 | VAR_2));
  if (VAR_8) {
   FUNC_1(VAR_4,
     VAR_0, &VAR_10);
   FUNC_2(VAR_4,
     VAR_0, VAR_10 | 0x20);
   FUNC_2(VAR_4,
     VAR_0, VAR_10 & ~0x20);
  }
 } else {
  FUNC_3("Heartbeat lost! Will not ping the watchdog\n");
 }

 FUNC_0(&VAR_7, VAR_5 + VAR_3);
}
