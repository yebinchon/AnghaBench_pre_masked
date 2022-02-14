
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct scsi_qla_host {int flags; TYPE_1__* qla4_82xx_reg; TYPE_2__* qla4_83xx_reg; } ;
struct TYPE_4__ {int risc_intr; } ;
struct TYPE_3__ {int host_int; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct scsi_qla_host*) ;
 scalar_t__ FUNC_1 (struct scsi_qla_host*) ;
 scalar_t__ FUNC_2 (struct scsi_qla_host*) ;
 int FUNC_3 (struct scsi_qla_host*) ;
 int FUNC_4 (struct scsi_qla_host*) ;
 int FUNC_5 (struct scsi_qla_host*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ,int *) ;
 int FUNC_8 (int ,int *) ;

int FUNC_9(struct scsi_qla_host *VAR_2)
{
 int VAR_3;


 if (FUNC_1(VAR_2) || FUNC_2(VAR_2)) {
  FUNC_8(0, &VAR_2->qla4_83xx_reg->risc_intr);
  FUNC_6(&VAR_2->qla4_83xx_reg->risc_intr);
 } else if (FUNC_0(VAR_2)) {
  FUNC_8(0, &VAR_2->qla4_82xx_reg->host_int);
  FUNC_6(&VAR_2->qla4_82xx_reg->host_int);
 }

 VAR_3 = FUNC_3(VAR_2);


 if (VAR_3 == VAR_1)
  FUNC_4(VAR_2);

 if (VAR_3 == VAR_1 && !FUNC_7(VAR_0, &VAR_2->flags))
  VAR_3 = FUNC_5(VAR_2);

 return VAR_3;
}
