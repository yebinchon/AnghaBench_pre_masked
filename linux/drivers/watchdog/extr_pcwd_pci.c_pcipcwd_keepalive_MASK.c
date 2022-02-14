
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int io_lock; int io_addr; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int,int ) ;
 TYPE_1__ VAR_2 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(void)
{

 FUNC_2(&VAR_2.io_lock);
 FUNC_0(0x42, VAR_2.io_addr);
 FUNC_3(&VAR_2.io_lock);

 if (VAR_1 >= VAR_0)
  FUNC_1("Watchdog keepalive signal send\n");

 return 0;
}
