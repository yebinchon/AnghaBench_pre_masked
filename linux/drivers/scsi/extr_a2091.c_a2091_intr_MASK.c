
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct a2091_hostdata {TYPE_1__* regs; } ;
struct Scsi_Host {int host_lock; } ;
typedef int irqreturn_t ;
struct TYPE_2__ {unsigned int ISTR; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 struct a2091_hostdata* FUNC_0 (struct Scsi_Host*) ;
 int FUNC_1 (int ,unsigned long) ;
 int FUNC_2 (int ,unsigned long) ;
 int FUNC_3 (struct Scsi_Host*) ;

__attribute__((used)) static irqreturn_t FUNC_4(int VAR_5, void *VAR_6)
{
 struct Scsi_Host *VAR_7 = VAR_6;
 struct a2091_hostdata *VAR_8 = FUNC_0(VAR_7);
 unsigned int VAR_9 = VAR_8->regs->ISTR;
 unsigned long VAR_10;

 if (!(VAR_9 & (VAR_3 | VAR_4)) || !(VAR_9 & VAR_2))
  return VAR_1;

 FUNC_1(VAR_7->host_lock, VAR_10);
 FUNC_3(VAR_7);
 FUNC_2(VAR_7->host_lock, VAR_10);
 return VAR_0;
}
