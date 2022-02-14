
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct scsi_cd {int cdi; TYPE_1__* device; } ;
struct gendisk {int dummy; } ;
struct TYPE_2__ {int disk_events_disable_depth; } ;


 int FUNC_0 (int *) ;
 unsigned int FUNC_1 (int *,unsigned int) ;
 struct scsi_cd* FUNC_2 (struct gendisk*) ;
 int FUNC_3 (struct scsi_cd*) ;

__attribute__((used)) static unsigned int FUNC_4(struct gendisk *VAR_0,
       unsigned int VAR_1)
{
 unsigned int VAR_2 = 0;
 struct scsi_cd *VAR_3;

 VAR_3 = FUNC_2(VAR_0);
 if (!VAR_3)
  return 0;

 if (!FUNC_0(&VAR_3->device->disk_events_disable_depth))
  VAR_2 = FUNC_1(&VAR_3->cdi, VAR_1);

 FUNC_3(VAR_3);
 return VAR_2;
}
