
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct stp_task_context {int dummy; } ;
struct TYPE_14__ {int fis_type; } ;
struct TYPE_13__ {TYPE_7__ stp; } ;
struct scu_task_context {int transfer_length_bytes; TYPE_6__ type; } ;
struct TYPE_12__ {TYPE_7__ cmd; } ;
struct TYPE_11__ {TYPE_3__* io_task_ptr; } ;
struct isci_request {TYPE_5__ stp; struct scu_task_context* tc; TYPE_4__ ttype_ptr; TYPE_1__* target_device; } ;
struct host_to_dev_fis {int dummy; } ;
struct ata_device {int cdb_len; } ;
struct TYPE_9__ {void* atapi_packet; } ;
struct TYPE_10__ {TYPE_2__ ata_task; } ;
struct TYPE_8__ {int domain_dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,void*,int ) ;
 int FUNC_1 (TYPE_7__*,int ,int) ;
 struct ata_device* FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct isci_request *VAR_2)
{
 struct ata_device *VAR_3 = FUNC_2(VAR_2->target_device->domain_dev);
 void *VAR_4 = VAR_2->ttype_ptr.io_task_ptr->ata_task.atapi_packet;
 struct scu_task_context *VAR_5 = VAR_2->tc;





 FUNC_1(&VAR_2->stp.cmd, 0, sizeof(struct host_to_dev_fis));
 FUNC_0(((u8 *)&VAR_2->stp.cmd + sizeof(u32)), VAR_4, VAR_0);
 FUNC_1(&(VAR_5->type.stp), 0, sizeof(struct stp_task_context));
 VAR_5->type.stp.fis_type = VAR_1;
 VAR_5->transfer_length_bytes = VAR_3->cdb_len;
}
