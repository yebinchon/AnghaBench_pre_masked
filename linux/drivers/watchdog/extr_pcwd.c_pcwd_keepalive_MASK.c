
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ next_heartbeat; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 TYPE_1__ VAR_5 ;
 int FUNC_0 (char*) ;

__attribute__((used)) static int FUNC_1(void)
{

 VAR_5.next_heartbeat = VAR_4 + (VAR_3 * VAR_1);

 if (VAR_2 >= VAR_0)
  FUNC_0("Watchdog keepalive signal send\n");

 return 0;
}
