
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smb2_fs_full_size_info {int CallerAvailableAllocationUnits; int TotalAllocationUnits; int SectorsPerAllocationUnit; int BytesPerSector; } ;
struct kstatfs {int f_bsize; void* f_bavail; void* f_bfree; void* f_blocks; } ;


 int FUNC_0 (int ) ;
 void* FUNC_1 (int ) ;

void
FUNC_2(struct smb2_fs_full_size_info *VAR_0,
        struct kstatfs *VAR_1)
{
 VAR_1->f_bsize = FUNC_0(VAR_0->BytesPerSector) *
     FUNC_0(VAR_0->SectorsPerAllocationUnit);
 VAR_1->f_blocks = FUNC_1(VAR_0->TotalAllocationUnits);
 VAR_1->f_bfree = VAR_1->f_bavail =
   FUNC_1(VAR_0->CallerAvailableAllocationUnits);
 return;
}
