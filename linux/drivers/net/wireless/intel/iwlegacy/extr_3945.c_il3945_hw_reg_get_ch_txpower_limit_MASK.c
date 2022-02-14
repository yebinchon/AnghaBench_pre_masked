
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int max_power_avg; } ;
struct TYPE_3__ {scalar_t__ max_power; } ;
struct il_channel_info {int max_power_avg; TYPE_2__ eeprom; TYPE_1__ tgd_data; } ;
typedef int s8 ;


 int FUNC_0 (int,int) ;

__attribute__((used)) static int
FUNC_1(struct il_channel_info *VAR_0)
{
 s8 VAR_1;
  VAR_1 = VAR_0->eeprom.max_power_avg;

 return FUNC_0(VAR_1, VAR_0->max_power_avg);
}
