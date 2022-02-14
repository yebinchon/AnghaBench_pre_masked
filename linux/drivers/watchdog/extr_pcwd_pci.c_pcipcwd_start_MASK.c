
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int io_lock; scalar_t__ io_addr; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int,scalar_t__) ;
 TYPE_1__ VAR_3 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int) ;

__attribute__((used)) static int FUNC_7(void)
{
 int VAR_4;

 FUNC_4(&VAR_3.io_lock);
 FUNC_1(0x00, VAR_3.io_addr + 3);
 FUNC_6(1000);

 VAR_4 = FUNC_0(VAR_3.io_addr + 2);
 FUNC_5(&VAR_3.io_lock);

 if (VAR_4 & VAR_1) {
  FUNC_3("Card timer not enabled\n");
  return -1;
 }

 if (VAR_2 >= VAR_0)
  FUNC_2("Watchdog started\n");

 return 0;
}
