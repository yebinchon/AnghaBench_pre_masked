
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct a3000_hostdata {TYPE_1__* regs; } ;
struct Scsi_Host {int host_lock; } ;
typedef int irqreturn_t ;
struct TYPE_2__ {unsigned int ISTR; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int FUNC_0 (char*,unsigned int) ;
 struct a3000_hostdata* FUNC_1 (struct Scsi_Host*) ;
 int FUNC_2 (int ,unsigned long) ;
 int FUNC_3 (int ,unsigned long) ;
 int FUNC_4 (struct Scsi_Host*) ;

__attribute__((used)) static irqreturn_t FUNC_5(int VAR_4, void *VAR_5)
{
 struct Scsi_Host *VAR_6 = VAR_5;
 struct a3000_hostdata *VAR_7 = FUNC_1(VAR_6);
 unsigned int VAR_8 = VAR_7->regs->ISTR;
 unsigned long VAR_9;

 if (!(VAR_8 & VAR_3))
  return VAR_1;
 if (VAR_8 & VAR_2) {
  FUNC_2(VAR_6->host_lock, VAR_9);
  FUNC_4(VAR_6);
  FUNC_3(VAR_6->host_lock, VAR_9);
  return VAR_0;
 }
 FUNC_0("Non-serviced A3000 SCSI-interrupt? ISTR = %02x\n", VAR_8);
 return VAR_1;
}
