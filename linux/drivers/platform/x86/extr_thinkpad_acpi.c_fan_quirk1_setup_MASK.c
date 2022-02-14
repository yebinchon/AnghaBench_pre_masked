
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int fan_ctrl_status_undef; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 TYPE_1__ VAR_1 ;

__attribute__((used)) static void FUNC_1(void)
{
 if (VAR_0 == 0x07) {
  FUNC_0("fan_init: initial fan status is unknown, assuming it is in auto mode\n");
  VAR_1.fan_ctrl_status_undef = 1;
 }
}
