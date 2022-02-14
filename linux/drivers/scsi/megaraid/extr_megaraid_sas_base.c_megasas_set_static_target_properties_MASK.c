
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct scsi_device {int request_queue; TYPE_1__* host; } ;
struct megasas_instance {scalar_t__ nvme_page_size; TYPE_2__* tgt_prop; } ;
struct TYPE_4__ {int max_io_size_kb; } ;
struct TYPE_3__ {int host_no; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ) ;
 struct megasas_instance* FUNC_2 (int ) ;
 int FUNC_3 (struct scsi_device*,int) ;
 int FUNC_4 (struct scsi_device*,int) ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_5(struct scsi_device *VAR_3,
       bool VAR_4)
{
 u32 VAR_5 = VAR_1;
 struct megasas_instance *VAR_6;

 VAR_6 = FUNC_2(VAR_3->host->host_no);




 FUNC_0(VAR_3->request_queue, VAR_2 * VAR_0);




 if (VAR_4)
  VAR_5 = FUNC_1(VAR_6->tgt_prop->max_io_size_kb);

 if (VAR_6->nvme_page_size && VAR_5)
  FUNC_4(VAR_3, (VAR_5 << 10));

 FUNC_3(VAR_3, VAR_4);
}
