
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct smb2_file_all_info {int AlignmentRequirement; int Mode; scalar_t__ CurrentByteOffset; } ;
struct TYPE_4__ {scalar_t__ IndexNumber1; int AlignmentRequirement; int Mode; scalar_t__ CurrentByteOffset; } ;
typedef TYPE_1__ FILE_ALL_INFO ;


 int FUNC_0 (TYPE_1__*,struct smb2_file_all_info*,size_t) ;

void
FUNC_1(FILE_ALL_INFO *VAR_0, struct smb2_file_all_info *VAR_1)
{
 FUNC_0(VAR_0, VAR_1, (size_t)(&VAR_1->CurrentByteOffset) - (size_t)VAR_1);
 VAR_0->CurrentByteOffset = VAR_1->CurrentByteOffset;
 VAR_0->Mode = VAR_1->Mode;
 VAR_0->AlignmentRequirement = VAR_1->AlignmentRequirement;
 VAR_0->IndexNumber1 = 0;
}
