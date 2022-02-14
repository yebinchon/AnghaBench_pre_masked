
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int parent; } ;
struct scsi_target {scalar_t__ channel; int id; TYPE_1__ dev; } ;
struct _MPT_SCSI_HOST {int dummy; } ;
struct TYPE_4__ {scalar_t__ hostdata; } ;


 TYPE_2__* FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct _MPT_SCSI_HOST*,int ) ;

__attribute__((used)) static int
FUNC_2(struct scsi_target *VAR_0)
{
 struct _MPT_SCSI_HOST *VAR_1 =
  (struct _MPT_SCSI_HOST *)FUNC_0(VAR_0->dev.parent)->hostdata;
 return ((FUNC_1(VAR_1, VAR_0->id)) &&
  VAR_0->channel == 0) ? 1 : 0;
}
