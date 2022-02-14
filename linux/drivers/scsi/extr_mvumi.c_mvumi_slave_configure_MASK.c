
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct scsi_device {unsigned char id; TYPE_1__* host; } ;
struct mvumi_hba {unsigned char max_target_id; int* target_map; } ;
struct TYPE_2__ {scalar_t__ hostdata; } ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(struct scsi_device *VAR_1)
{
 struct mvumi_hba *VAR_2;
 unsigned char VAR_3 = sizeof(unsigned char) * 8;

 VAR_2 = (struct mvumi_hba *) VAR_1->host->hostdata;
 if (VAR_1->id >= VAR_2->max_target_id)
  return -VAR_0;

 VAR_2->target_map[VAR_1->id / VAR_3] |= (1 << (VAR_1->id % VAR_3));
 return 0;
}
