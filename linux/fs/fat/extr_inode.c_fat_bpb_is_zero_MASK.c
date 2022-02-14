
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fat_boot_sector {scalar_t__ heads; scalar_t__ secs_track; scalar_t__ fat_length; scalar_t__ media; int sectors; int dir_entries; scalar_t__ fats; scalar_t__ reserved; scalar_t__ sec_per_clus; int sector_size; } ;


 scalar_t__ FUNC_0 (int *) ;

__attribute__((used)) static bool FUNC_1(struct fat_boot_sector *VAR_0)
{
 if (FUNC_0(&VAR_0->sector_size))
  return 0;
 if (VAR_0->sec_per_clus)
  return 0;
 if (VAR_0->reserved)
  return 0;
 if (VAR_0->fats)
  return 0;
 if (FUNC_0(&VAR_0->dir_entries))
  return 0;
 if (FUNC_0(&VAR_0->sectors))
  return 0;
 if (VAR_0->media)
  return 0;
 if (VAR_0->fat_length)
  return 0;
 if (VAR_0->secs_track)
  return 0;
 if (VAR_0->heads)
  return 0;
 return 1;
}
