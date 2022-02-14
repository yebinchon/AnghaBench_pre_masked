
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ dma; } ;
struct TYPE_4__ {TYPE_1__ scsi; } ;
struct powertec_info {TYPE_2__ info; } ;
struct expansion_card {int irq; int dev; } ;
struct Scsi_Host {scalar_t__ hostdata; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int *) ;
 struct Scsi_Host* FUNC_1 (struct expansion_card*) ;
 int FUNC_2 (struct expansion_card*) ;
 int FUNC_3 (struct expansion_card*,int *) ;
 int FUNC_4 (struct Scsi_Host*) ;
 int FUNC_5 (struct Scsi_Host*) ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (int ,struct powertec_info*) ;
 int FUNC_8 (struct Scsi_Host*) ;

__attribute__((used)) static void FUNC_9(struct expansion_card *VAR_2)
{
 struct Scsi_Host *VAR_3 = FUNC_1(VAR_2);
 struct powertec_info *VAR_4 = (struct powertec_info *)VAR_3->hostdata;

 FUNC_3(VAR_2, ((void*)0));
 FUNC_5(VAR_3);

 FUNC_0(&VAR_2->dev, &VAR_1);

 if (VAR_4->info.scsi.dma != VAR_0)
  FUNC_6(VAR_4->info.scsi.dma);
 FUNC_7(VAR_2->irq, VAR_4);

 FUNC_4(VAR_3);
 FUNC_8(VAR_3);
 FUNC_2(VAR_2);
}
