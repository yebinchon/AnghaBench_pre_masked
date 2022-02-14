
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_7__ ;
typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef void* uint32_t ;
struct TYPE_12__ {void* ccsar; void* cccr; } ;
struct TYPE_13__ {TYPE_2__ basic_io; } ;
struct TYPE_11__ {int list; } ;
struct TYPE_15__ {int op_code; TYPE_3__ cmd; TYPE_1__ sg_list; void* sg_busaddr; void* scb_busaddr; int command_id; void* ccsar; } ;
typedef TYPE_5__ ips_scb_t ;
struct TYPE_16__ {TYPE_4__* adapt; TYPE_5__* dummy; } ;
typedef TYPE_6__ ips_ha_t ;
struct TYPE_17__ {int list; } ;
struct TYPE_14__ {void* hw_status_start; } ;
typedef TYPE_7__ IPS_SG_LIST ;
typedef int IPS_IO_CMD ;
typedef int IPS_ADAPTER ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int) ;
 void* FUNC_1 (void*) ;
 int FUNC_2 (TYPE_5__*,int ,int) ;

__attribute__((used)) static void
FUNC_3(ips_ha_t * VAR_2, ips_scb_t * VAR_3)
{
 IPS_SG_LIST VAR_4;
 uint32_t VAR_5, VAR_6;
 FUNC_0("ips_init_scb", 1);

 if (VAR_3 == ((void*)0))
  return;

 VAR_4.list = VAR_3->sg_list.list;
 VAR_5 = VAR_3->scb_busaddr;
 VAR_6 = VAR_3->sg_busaddr;

 FUNC_2(VAR_3, 0, sizeof (ips_scb_t));
 FUNC_2(VAR_2->dummy, 0, sizeof (IPS_IO_CMD));


 VAR_2->dummy->op_code = 0xFF;
 VAR_2->dummy->ccsar = FUNC_1(VAR_2->adapt->hw_status_start
           + sizeof (IPS_ADAPTER));
 VAR_2->dummy->command_id = VAR_1;


 VAR_3->scb_busaddr = VAR_5;
 VAR_3->sg_busaddr = VAR_6;
 VAR_3->sg_list.list = VAR_4.list;


 VAR_3->cmd.basic_io.cccr = FUNC_1((uint32_t) VAR_0);
 VAR_3->cmd.basic_io.ccsar = FUNC_1(VAR_2->adapt->hw_status_start
           + sizeof (IPS_ADAPTER));
}
