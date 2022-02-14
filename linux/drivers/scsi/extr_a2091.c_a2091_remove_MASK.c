
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int start; } ;
struct zorro_dev {TYPE_2__ resource; } ;
struct a2091_hostdata {TYPE_1__* regs; } ;
struct Scsi_Host {int dummy; } ;
struct TYPE_3__ {scalar_t__ CNTR; } ;


 int VAR_0 ;
 int FUNC_0 (int ,struct Scsi_Host*) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (struct Scsi_Host*) ;
 int FUNC_3 (struct Scsi_Host*) ;
 struct a2091_hostdata* FUNC_4 (struct Scsi_Host*) ;
 struct Scsi_Host* FUNC_5 (struct zorro_dev*) ;

__attribute__((used)) static void FUNC_6(struct zorro_dev *VAR_1)
{
 struct Scsi_Host *VAR_2 = FUNC_5(VAR_1);
 struct a2091_hostdata *VAR_3 = FUNC_4(VAR_2);

 VAR_3->regs->CNTR = 0;
 FUNC_3(VAR_2);
 FUNC_0(VAR_0, VAR_2);
 FUNC_2(VAR_2);
 FUNC_1(VAR_1->resource.start, 256);
}
