
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct Scsi_Host {int dummy; } ;
typedef int irqreturn_t ;
struct TYPE_2__ {int dma_intr; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;
 int FUNC_0 (struct Scsi_Host*) ;

__attribute__((used)) static irqreturn_t FUNC_1(int VAR_3, void *VAR_4)
{
 struct Scsi_Host *VAR_5 = VAR_4;

 if (VAR_3 == VAR_1)
  FUNC_0(VAR_5);
 else
  VAR_2->dma_intr = 0x89;
 return VAR_0;
}
