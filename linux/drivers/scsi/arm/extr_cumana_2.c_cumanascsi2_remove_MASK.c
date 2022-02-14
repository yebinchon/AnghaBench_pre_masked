
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct expansion_card {int irq; } ;
struct TYPE_3__ {scalar_t__ dma; } ;
struct TYPE_4__ {TYPE_1__ scsi; } ;
struct cumanascsi2_info {TYPE_2__ info; } ;
struct Scsi_Host {scalar_t__ hostdata; } ;


 scalar_t__ VAR_0 ;
 struct Scsi_Host* FUNC_0 (struct expansion_card*) ;
 int FUNC_1 (struct expansion_card*) ;
 int FUNC_2 (struct expansion_card*,int *) ;
 int FUNC_3 (struct Scsi_Host*) ;
 int FUNC_4 (struct Scsi_Host*) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (int ,struct cumanascsi2_info*) ;
 int FUNC_7 (struct Scsi_Host*) ;

__attribute__((used)) static void FUNC_8(struct expansion_card *VAR_1)
{
 struct Scsi_Host *VAR_2 = FUNC_0(VAR_1);
 struct cumanascsi2_info *VAR_3 = (struct cumanascsi2_info *)VAR_2->hostdata;

 FUNC_2(VAR_1, ((void*)0));
 FUNC_4(VAR_2);

 if (VAR_3->info.scsi.dma != VAR_0)
  FUNC_5(VAR_3->info.scsi.dma);
 FUNC_6(VAR_1->irq, VAR_3);

 FUNC_3(VAR_2);
 FUNC_7(VAR_2);
 FUNC_1(VAR_1);
}
