
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct Scsi_Host {int dummy; } ;
typedef int irqreturn_t ;
struct TYPE_2__ {unsigned short csr; } ;


 unsigned short VAR_0 ;
 unsigned short VAR_1 ;
 unsigned short VAR_2 ;
 unsigned short VAR_3 ;
 unsigned short VAR_4 ;
 unsigned short VAR_5 ;
 int FUNC_0 (int) ;
 int VAR_6 ;
 int FUNC_1 (int,void*) ;
 TYPE_1__* VAR_7 ;
 int FUNC_2 (int ,struct Scsi_Host*,char*) ;

__attribute__((used)) static irqreturn_t FUNC_3(int VAR_8, void *VAR_9)
{
 struct Scsi_Host *VAR_10 = VAR_9;
 unsigned short VAR_11 = VAR_7->csr;
 int VAR_12 = 0;





 if(VAR_11 & ~VAR_4) {
  if (VAR_11 & VAR_0)
   FUNC_2(VAR_6, VAR_10, "bus error in DMA\n");
  if (VAR_11 & VAR_1)
   FUNC_2(VAR_6, VAR_10, "DMA conflict\n");
  VAR_12 = 1;
 }

 if(VAR_11 & (VAR_5 | VAR_3)) {
  FUNC_1(VAR_8, VAR_9);
  VAR_12 = 1;
 }

 return FUNC_0(VAR_12);
}
