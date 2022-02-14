
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_disk {int capacity; int zone_blocks; scalar_t__ nr_zones; } ;


 int VAR_0 ;
 int FUNC_0 (struct scsi_disk*) ;
 int FUNC_1 (int ,struct scsi_disk*,char*,scalar_t__,int) ;

void FUNC_2(struct scsi_disk *VAR_1)
{
 if (!FUNC_0(VAR_1) || !VAR_1->capacity)
  return;

 if (VAR_1->capacity & (VAR_1->zone_blocks - 1))
  FUNC_1(VAR_0, VAR_1,
     "%u zones of %u logical blocks + 1 runt zone\n",
     VAR_1->nr_zones - 1,
     VAR_1->zone_blocks);
 else
  FUNC_1(VAR_0, VAR_1,
     "%u zones of %u logical blocks\n",
     VAR_1->nr_zones,
     VAR_1->zone_blocks);
}
