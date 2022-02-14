
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u16 ;
struct sas_task {TYPE_4__* dev; struct asd_ascb* lldd_task; } ;
struct asd_ha_struct {int dummy; } ;
struct asd_ascb {int tc_index; } ;
struct TYPE_6__ {void* index; void* conn_handle; int nexus; } ;
struct TYPE_10__ {TYPE_1__ clear_nexus; } ;
struct TYPE_9__ {scalar_t__ lldd_dev; scalar_t__ tproto; TYPE_3__* port; } ;
struct TYPE_8__ {TYPE_2__* ha; } ;
struct TYPE_7__ {struct asd_ha_struct* lldd_ha; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_0 (int ) ;
 TYPE_5__* VAR_3 ;

__attribute__((used)) static int FUNC_1(struct sas_task *VAR_4)
{
 struct asd_ha_struct *VAR_5 = VAR_4->dev->port->ha->lldd_ha;
 struct asd_ascb *VAR_6 = VAR_4->lldd_task;

 VAR_1;
 VAR_3->clear_nexus.nexus = VAR_2;
 if (VAR_4->dev->tproto)
  VAR_3->clear_nexus.conn_handle = FUNC_0((u16)(unsigned long)
         VAR_4->dev->lldd_dev);
 VAR_3->clear_nexus.index = FUNC_0(VAR_6->tc_index);
 VAR_0;
}
