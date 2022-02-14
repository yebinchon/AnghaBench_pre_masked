
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct gvp11_hostdata {TYPE_1__* regs; } ;
struct Scsi_Host {int host_lock; } ;
typedef int irqreturn_t ;
struct TYPE_2__ {unsigned int CNTR; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct gvp11_hostdata* FUNC_0 (struct Scsi_Host*) ;
 int FUNC_1 (int ,unsigned long) ;
 int FUNC_2 (int ,unsigned long) ;
 int FUNC_3 (struct Scsi_Host*) ;

__attribute__((used)) static irqreturn_t FUNC_4(int VAR_3, void *VAR_4)
{
 struct Scsi_Host *VAR_5 = VAR_4;
 struct gvp11_hostdata *VAR_6 = FUNC_0(VAR_5);
 unsigned int VAR_7 = VAR_6->regs->CNTR;
 unsigned long VAR_8;

 if (!(VAR_7 & VAR_0))
  return VAR_2;

 FUNC_1(VAR_5->host_lock, VAR_8);
 FUNC_3(VAR_5);
 FUNC_2(VAR_5->host_lock, VAR_8);
 return VAR_1;
}
