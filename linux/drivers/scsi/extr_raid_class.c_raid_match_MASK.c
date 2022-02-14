
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct scsi_device {TYPE_1__* host; } ;
struct raid_internal {TYPE_2__* f; } ;
struct device {int dummy; } ;
struct attribute_container {int dummy; } ;
struct TYPE_4__ {scalar_t__ cookie; int (* is_raid ) (struct device*) ;} ;
struct TYPE_3__ {scalar_t__ hostt; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 struct raid_internal* FUNC_1 (struct attribute_container*) ;
 scalar_t__ FUNC_2 (struct device*) ;
 int FUNC_3 (struct device*) ;
 struct scsi_device* FUNC_4 (struct device*) ;

__attribute__((used)) static int FUNC_5(struct attribute_container *VAR_1, struct device *VAR_2)
{


 struct raid_internal *VAR_3 = FUNC_1(VAR_1);

 if (FUNC_0(VAR_0) && FUNC_2(VAR_2)) {
  struct scsi_device *VAR_4 = FUNC_4(VAR_2);

  if (VAR_3->f->cookie != VAR_4->host->hostt)
   return 0;

  return VAR_3->f->is_raid(VAR_2);
 }

 return 0;
}
