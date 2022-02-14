
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_6__ ;
typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


struct TYPE_17__ {scalar_t__ scb_addr; } ;
typedef TYPE_3__ ips_stat_t ;
struct TYPE_18__ {int (* callback ) (TYPE_5__*,TYPE_4__*) ;} ;
typedef TYPE_4__ ips_scb_t ;
struct TYPE_15__ {int (* isintr ) (TYPE_5__*) ;int (* statupd ) (TYPE_5__*) ;} ;
struct TYPE_19__ {TYPE_1__ func; TYPE_3__ sp; int active; } ;
typedef TYPE_5__ ips_ha_t ;
struct TYPE_16__ {int command_id; } ;
struct TYPE_20__ {TYPE_2__ fields; int value; } ;
typedef TYPE_6__ IPS_STATUS ;


 int VAR_0 ;
 int FUNC_0 (char*,int) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (TYPE_5__*,TYPE_6__*) ;
 int FUNC_2 (TYPE_5__*) ;
 int FUNC_3 (TYPE_5__*) ;
 int FUNC_4 (TYPE_5__*) ;
 int FUNC_5 (TYPE_5__*,TYPE_4__*) ;

int
FUNC_6(ips_ha_t * VAR_2)
{
 ips_stat_t *VAR_3;
 ips_scb_t *VAR_4;
 IPS_STATUS VAR_5;
 int VAR_6;

 FUNC_0("ips_intr", 2);

 if (!VAR_2)
  return 0;

 if (!VAR_2->active)
  return 0;

 VAR_6 = (*VAR_2->func.isintr) (VAR_2);

 if (!VAR_6) {




  return 0;
 }

 while (VAR_1) {
  VAR_3 = &VAR_2->sp;

  VAR_6 = (*VAR_2->func.isintr) (VAR_2);

  if (!VAR_6)
   break;
  else
   VAR_5.value = (*VAR_2->func.statupd) (VAR_2);

  if (VAR_5.fields.command_id > (VAR_0 - 1)) {

   continue;
  }

  FUNC_1(VAR_2, &VAR_5);
  VAR_4 = (ips_scb_t *) VAR_3->scb_addr;





  (*VAR_4->callback) (VAR_2, VAR_4);
 }
 return 1;
}
