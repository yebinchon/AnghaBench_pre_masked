
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ipr_sata_port {struct ipr_resource_entry* res; struct ipr_ioa_cfg* ioa_cfg; } ;
struct ipr_resource_entry {unsigned int ata_class; } ;
struct ipr_ioa_cfg {TYPE_2__* host; scalar_t__ in_reset_reload; int reset_wait_q; } ;
struct ata_link {TYPE_1__* ap; } ;
struct TYPE_4__ {int host_lock; } ;
struct TYPE_3__ {struct ipr_sata_port* private_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct ipr_ioa_cfg*,struct ipr_resource_entry*) ;
 int FUNC_1 (struct ipr_ioa_cfg*,int ) ;
 int VAR_5 ;
 int FUNC_2 (struct ipr_ioa_cfg*,struct ipr_resource_entry*,int ) ;
 int FUNC_3 (int ,unsigned long) ;
 int FUNC_4 (int ,unsigned long) ;
 int FUNC_5 (int ,int) ;

__attribute__((used)) static int FUNC_6(struct ata_link *VAR_6, unsigned int *VAR_7,
    unsigned long VAR_8)
{
 struct ipr_sata_port *VAR_9 = VAR_6->ap->private_data;
 struct ipr_ioa_cfg *VAR_10 = VAR_9->ioa_cfg;
 struct ipr_resource_entry *VAR_11;
 unsigned long VAR_12 = 0;
 int VAR_13 = -VAR_1, VAR_14;

 VAR_0;
 FUNC_3(VAR_10->host->host_lock, VAR_12);
 while (VAR_10->in_reset_reload) {
  FUNC_4(VAR_10->host->host_lock, VAR_12);
  FUNC_5(VAR_10->reset_wait_q, !VAR_10->in_reset_reload);
  FUNC_3(VAR_10->host->host_lock, VAR_12);
 }

 VAR_11 = VAR_9->res;
 if (VAR_11) {
  VAR_13 = FUNC_0(VAR_10, VAR_11);
  *VAR_7 = VAR_11->ata_class;
  FUNC_4(VAR_10->host->host_lock, VAR_12);

  VAR_14 = FUNC_2(VAR_10, VAR_11, VAR_5);
  if (VAR_14 != VAR_4) {
   FUNC_3(VAR_10->host->host_lock, VAR_12);
   FUNC_1(VAR_10, VAR_2);
   FUNC_4(VAR_10->host->host_lock, VAR_12);

   FUNC_5(VAR_10->reset_wait_q, !VAR_10->in_reset_reload);
  }
 } else
  FUNC_4(VAR_10->host->host_lock, VAR_12);

 VAR_3;
 return VAR_13;
}
