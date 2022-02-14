
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct watchdog_device {int max_hw_heartbeat_ms; int timeout; int parent; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,int ,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,int) ;

__attribute__((used)) static int FUNC_4(struct watchdog_device *VAR_0)
{
 int VAR_1 = FUNC_0(FUNC_3(VAR_0->timeout, VAR_0->max_hw_heartbeat_ms/1000));

 FUNC_1(VAR_0->parent, "ping  watchdog 0x%08x:0x%08x\n", VAR_0->timeout, VAR_1);
 FUNC_2(VAR_1);

 return 0;
}
