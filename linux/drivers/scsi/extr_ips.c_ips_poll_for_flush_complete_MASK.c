
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int (* statupd ) (TYPE_3__*) ;} ;
struct TYPE_9__ {TYPE_1__ func; } ;
typedef TYPE_3__ ips_ha_t ;
struct TYPE_8__ {scalar_t__ command_id; } ;
struct TYPE_10__ {int value; TYPE_2__ fields; } ;
typedef TYPE_4__ IPS_STATUS ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (TYPE_3__*) ;

__attribute__((used)) static int
FUNC_1(ips_ha_t * VAR_2)
{
 IPS_STATUS VAR_3;

 while (VAR_1) {
     VAR_3.value = (*VAR_2->func.statupd) (VAR_2);

     if (VAR_3.value == 0xffffffff)
   break;


     if (VAR_3.fields.command_id == VAR_0)
         return 1;
  }

 return 0;
}
