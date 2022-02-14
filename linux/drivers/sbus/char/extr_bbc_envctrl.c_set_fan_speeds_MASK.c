
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bbc_fan_control {scalar_t__ cpu_fan_speed; scalar_t__ system_fan_speed; scalar_t__ psupply_fan_on; int client; int index; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,scalar_t__,int ) ;
 int FUNC_1 (char*,int ,scalar_t__,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct bbc_fan_control *VAR_7)
{



 if (VAR_7->cpu_fan_speed < VAR_2)
  VAR_7->cpu_fan_speed = VAR_2;
 if (VAR_7->cpu_fan_speed > VAR_1)
  VAR_7->cpu_fan_speed = VAR_1;
 if (VAR_7->system_fan_speed < VAR_2)
  VAR_7->system_fan_speed = VAR_2;
 if (VAR_7->system_fan_speed > VAR_1)
  VAR_7->system_fan_speed = VAR_1;






 FUNC_0(VAR_7->client, VAR_7->cpu_fan_speed, VAR_0);
 FUNC_0(VAR_7->client, VAR_7->system_fan_speed, VAR_6);
 FUNC_0(VAR_7->client,
         (VAR_7->psupply_fan_on ?
   VAR_4 : VAR_3),
         VAR_5);
}
