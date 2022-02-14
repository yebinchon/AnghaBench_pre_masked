
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct domain_device {scalar_t__ lldd_dev; TYPE_3__* port; } ;
struct asd_ha_struct {int dummy; } ;
struct TYPE_6__ {int lun; } ;
struct TYPE_9__ {int flags; int conn_handle; TYPE_1__ ssp_task; int nexus; } ;
struct TYPE_10__ {TYPE_4__ clear_nexus; } ;
struct TYPE_8__ {TYPE_2__* ha; } ;
struct TYPE_7__ {struct asd_ha_struct* lldd_ha; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int *,int) ;
 TYPE_5__* VAR_6 ;

__attribute__((used)) static int FUNC_2(struct domain_device *VAR_7, u8 *VAR_8)
{
 struct asd_ha_struct *VAR_9 = VAR_7->port->ha->lldd_ha;

 VAR_1;
 VAR_6->clear_nexus.nexus = VAR_3;
 VAR_6->clear_nexus.flags = VAR_5 | VAR_2 | VAR_4;
 FUNC_1(VAR_6->clear_nexus.ssp_task.lun, VAR_8, 8);
 VAR_6->clear_nexus.conn_handle = FUNC_0((u16)(unsigned long)
         VAR_7->lldd_dev);
 VAR_0;
}
