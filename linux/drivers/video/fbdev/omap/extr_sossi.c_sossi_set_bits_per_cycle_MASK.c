
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int bus_pick_width; int bus_pick_count; } ;


 int FUNC_0 () ;
 TYPE_1__ VAR_0 ;

__attribute__((used)) static void FUNC_1(int VAR_1)
{
 int VAR_2, VAR_3;






 switch (VAR_1) {
 case 8:
  VAR_2 = 4;
  VAR_3 = 8;
  break;
 case 16:
  VAR_2 = 2;
  VAR_3 = 16;
  break;
 default:
  FUNC_0();
  return;
 }
 VAR_0.bus_pick_width = VAR_3;
 VAR_0.bus_pick_count = VAR_2;
}
