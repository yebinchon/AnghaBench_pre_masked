
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct watchdog_device {int max_hw_heartbeat_ms; int timeout; int parent; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,int ,int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int,int ) ;
 int FUNC_3 (int,int ) ;
 int FUNC_4 (int ,int) ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static int FUNC_5(struct watchdog_device *VAR_3)
{
 int VAR_4 = 0x81 | (VAR_2 ? 0x4 : 0);
 int VAR_5 = FUNC_0(FUNC_4(VAR_3->timeout, VAR_3->max_hw_heartbeat_ms/1000));

 FUNC_1(VAR_3->parent, "start watchdog 0x%08x:0x%08x:0x%02x\n", VAR_3->timeout, VAR_5, VAR_4);
 FUNC_2(VAR_5, VAR_1);
 FUNC_3(VAR_4, VAR_0);

 return 0;
}
