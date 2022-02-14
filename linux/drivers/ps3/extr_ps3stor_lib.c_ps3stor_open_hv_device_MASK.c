
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ps3_system_bus_device {scalar_t__ match_id; } ;
struct TYPE_2__ {int flash_open; int disk_open; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_1__ VAR_2 ;
 int FUNC_0 (struct ps3_system_bus_device*) ;

__attribute__((used)) static int FUNC_1(struct ps3_system_bus_device *VAR_3)
{
 int VAR_4 = FUNC_0(VAR_3);

 if (VAR_4)
  return VAR_4;

 if (VAR_3->match_id == VAR_1)
  VAR_2.flash_open = 1;

 if (VAR_3->match_id == VAR_0)
  VAR_2.disk_open = 1;

 return 0;
}
