
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct ipr_sata_port {struct ipr_ioa_cfg* ioa_cfg; struct ipr_resource_entry* res; } ;
struct ipr_resource_entry {void* ata_class; } ;
struct ipr_ioa_cfg {TYPE_4__* host; TYPE_1__* hrrq; scalar_t__ in_reset_reload; int reset_wait_q; } ;
struct TYPE_7__ {TYPE_2__* device; } ;
struct ata_port {TYPE_3__ link; struct ipr_sata_port* private_data; } ;
struct TYPE_8__ {int host_lock; } ;
struct TYPE_6__ {void* class; } ;
struct TYPE_5__ {int allow_cmds; } ;


 void* VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct ipr_ioa_cfg*,struct ipr_resource_entry*) ;
 int FUNC_1 (int ,unsigned long) ;
 int FUNC_2 (int ,unsigned long) ;
 int FUNC_3 (int ,int) ;

__attribute__((used)) static void FUNC_4(struct ata_port *VAR_5)
{
 unsigned long VAR_6;
 struct ipr_sata_port *VAR_7 = VAR_5->private_data;
 struct ipr_resource_entry *VAR_8 = VAR_7->res;
 struct ipr_ioa_cfg *VAR_9 = VAR_7->ioa_cfg;
 int VAR_10;

 VAR_2;
 FUNC_1(VAR_9->host->host_lock, VAR_6);
 while (VAR_9->in_reset_reload) {
  FUNC_2(VAR_9->host->host_lock, VAR_6);
  FUNC_3(VAR_9->reset_wait_q, !VAR_9->in_reset_reload);
  FUNC_1(VAR_9->host->host_lock, VAR_6);
 }

 if (!VAR_9->hrrq[VAR_3].allow_cmds)
  goto out_unlock;

 VAR_10 = FUNC_0(VAR_9, VAR_8);

 if (VAR_10) {
  VAR_5->link.device[0].class = VAR_0;
  goto out_unlock;
 }

 VAR_5->link.device[0].class = VAR_8->ata_class;
 if (VAR_5->link.device[0].class == VAR_1)
  VAR_5->link.device[0].class = VAR_0;

out_unlock:
 FUNC_2(VAR_9->host->host_lock, VAR_6);
 VAR_4;
}
