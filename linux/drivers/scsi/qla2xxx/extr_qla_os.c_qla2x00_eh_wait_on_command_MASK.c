
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct scsi_cmnd {TYPE_1__* device; } ;
struct TYPE_7__ {scalar_t__ eeh_busy; } ;
struct qla_hw_data {TYPE_2__ flags; int pdev; } ;
struct TYPE_8__ {struct qla_hw_data* hw; } ;
typedef TYPE_3__ scsi_qla_host_t ;
struct TYPE_6__ {int host; } ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 scalar_t__ FUNC_0 (struct scsi_cmnd*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,TYPE_3__*,int,char*) ;
 int VAR_4 ;
 TYPE_3__* FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;

__attribute__((used)) static int
FUNC_6(struct scsi_cmnd *VAR_5)
{


 unsigned long VAR_6 = ((2 * 1000) / (1000));
 scsi_qla_host_t *VAR_7 = FUNC_4(VAR_5->device->host);
 struct qla_hw_data *VAR_8 = VAR_7->hw;
 int VAR_9 = VAR_3;

 if (FUNC_5(FUNC_2(VAR_8->pdev)) || VAR_8->flags.eeh_busy) {
  FUNC_3(VAR_4, VAR_7, 0x8005,
      "Return:eh_wait.\n");
  return VAR_9;
 }

 while (FUNC_0(VAR_5) && VAR_6--) {
  FUNC_1(1000);
 }
 if (FUNC_0(VAR_5))
  VAR_9 = VAR_2;

 return VAR_9;
}
