
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct afs_volume_status {scalar_t__ vol_backup_date; scalar_t__ vol_copy_date; void* part_max_blocks; void* part_blocks_avail; void* blocks_in_use; void* max_quota; void* min_quota; void* type; void* needs_salvage; void* blessed; void* in_service; void* online; void* parent_id; void* vid; } ;
typedef int __be32 ;


 void* FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(const __be32 **VAR_0,
         struct afs_volume_status *VAR_1)
{
 const __be32 *VAR_2 = *VAR_0;

 VAR_1->vid = FUNC_0(*VAR_2++);
 VAR_1->parent_id = FUNC_0(*VAR_2++);
 VAR_1->online = FUNC_0(*VAR_2++);
 VAR_1->in_service = FUNC_0(*VAR_2++);
 VAR_1->blessed = FUNC_0(*VAR_2++);
 VAR_1->needs_salvage = FUNC_0(*VAR_2++);
 VAR_1->type = FUNC_0(*VAR_2++);
 VAR_1->min_quota = FUNC_0(*VAR_2++);
 VAR_1->max_quota = FUNC_0(*VAR_2++);
 VAR_1->blocks_in_use = FUNC_0(*VAR_2++);
 VAR_1->part_blocks_avail = FUNC_0(*VAR_2++);
 VAR_1->part_max_blocks = FUNC_0(*VAR_2++);
 VAR_1->vol_copy_date = 0;
 VAR_1->vol_backup_date = 0;
 *VAR_0 = VAR_2;
}
