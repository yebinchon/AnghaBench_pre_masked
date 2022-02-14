
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct scsi_cmnd {TYPE_2__* device; } ;
struct device {int dummy; } ;
struct chain {int dummy; } ;
struct aha1542_cmd {int * chain; int chain_handle; } ;
struct TYPE_4__ {TYPE_1__* host; } ;
struct TYPE_3__ {struct device* dma_dev; } ;


 int VAR_0 ;
 int FUNC_0 (struct device*,int ,size_t,int ) ;
 int FUNC_1 (int *) ;
 struct aha1542_cmd* FUNC_2 (struct scsi_cmnd*) ;
 int FUNC_3 (struct scsi_cmnd*) ;
 int FUNC_4 (struct scsi_cmnd*) ;

__attribute__((used)) static void FUNC_5(struct scsi_cmnd *VAR_1)
{
 struct aha1542_cmd *VAR_2 = FUNC_2(VAR_1);
 struct device *VAR_3 = VAR_1->device->host->dma_dev;
 size_t VAR_4 = FUNC_4(VAR_1) * sizeof(struct chain);

 if (VAR_2->chain) {
  FUNC_0(VAR_3, VAR_2->chain_handle, VAR_4, VAR_0);
  FUNC_1(VAR_2->chain);
 }

 VAR_2->chain = ((void*)0);
 FUNC_3(VAR_1);
}
