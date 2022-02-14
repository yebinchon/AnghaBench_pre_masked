
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct scsi_disk {scalar_t__ capacity; int physical_block_size; int first_scan; TYPE_1__* device; } ;
typedef scalar_t__ sector_t ;
typedef int cap_str_2 ;
typedef int cap_str_10 ;
struct TYPE_2__ {int sector_size; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,struct scsi_disk*,char*,int,...) ;
 int FUNC_1 (struct scsi_disk*) ;
 int FUNC_2 (scalar_t__,int,int ,char*,int) ;

__attribute__((used)) static void
FUNC_3(struct scsi_disk *VAR_3,
    sector_t VAR_4)
{
 int VAR_5 = VAR_3->device->sector_size;
 char VAR_6[10], VAR_7[10];

 if (!VAR_3->first_scan && VAR_4 == VAR_3->capacity)
  return;

 FUNC_2(VAR_3->capacity, VAR_5,
   VAR_2, VAR_6, sizeof(VAR_6));
 FUNC_2(VAR_3->capacity, VAR_5,
   VAR_1, VAR_7, sizeof(VAR_7));

 FUNC_0(VAR_0, VAR_3,
    "%llu %d-byte logical blocks: (%s/%s)\n",
    (unsigned long long)VAR_3->capacity,
    VAR_5, VAR_7, VAR_6);

 if (VAR_3->physical_block_size != VAR_5)
  FUNC_0(VAR_0, VAR_3,
     "%u-byte physical blocks\n",
     VAR_3->physical_block_size);

 FUNC_1(VAR_3);
}
