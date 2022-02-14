
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct uas_dev_info {int flags; } ;
struct TYPE_3__ {int parent; } ;
struct scsi_target {int no_report_luns; TYPE_1__ dev; } ;
struct TYPE_4__ {scalar_t__ hostdata; } ;


 int VAR_0 ;
 TYPE_2__* FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1(struct scsi_target *VAR_1)
{
 struct uas_dev_info *VAR_2 = (struct uas_dev_info *)
   FUNC_0(VAR_1->dev.parent)->hostdata;

 if (VAR_2->flags & VAR_0)
  VAR_1->no_report_luns = 1;

 return 0;
}
