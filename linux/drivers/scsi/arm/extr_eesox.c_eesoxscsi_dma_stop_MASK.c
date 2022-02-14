
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct scsi_pointer {int dummy; } ;
struct TYPE_3__ {scalar_t__ dma; } ;
struct TYPE_4__ {TYPE_1__ scsi; } ;
struct eesoxscsi_info {TYPE_2__ info; } ;
struct Scsi_Host {scalar_t__ hostdata; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__) ;

__attribute__((used)) static void
FUNC_1(struct Scsi_Host *VAR_1, struct scsi_pointer *VAR_2)
{
 struct eesoxscsi_info *VAR_3 = (struct eesoxscsi_info *)VAR_1->hostdata;
 if (VAR_3->info.scsi.dma != VAR_0)
  FUNC_0(VAR_3->info.scsi.dma);
}
