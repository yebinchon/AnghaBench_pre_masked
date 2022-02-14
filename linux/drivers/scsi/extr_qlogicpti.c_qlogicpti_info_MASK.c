
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct qlogicpti {TYPE_1__* qhost; int qregs; } ;
struct Scsi_Host {scalar_t__ hostdata; } ;
struct TYPE_2__ {int irq; } ;


 int FUNC_0 (char*,char*,int,int ) ;

const char *FUNC_1(struct Scsi_Host *VAR_0)
{
 static char VAR_1[80];
 struct qlogicpti *VAR_2 = (struct qlogicpti *) VAR_0->hostdata;

 FUNC_0(VAR_1, "PTI Qlogic,ISP SBUS SCSI irq %d regs at %p",
  VAR_2->qhost->irq, VAR_2->qregs);
 return VAR_1;
}
