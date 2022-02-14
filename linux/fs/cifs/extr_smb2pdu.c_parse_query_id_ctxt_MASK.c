
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smb2_file_all_info {int IndexNumber; } ;
struct create_on_disk_id {int DiskFileId; int VolumeId; } ;
struct create_context {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int ,int ) ;

__attribute__((used)) static void
FUNC_1(struct create_context *VAR_1, struct smb2_file_all_info *VAR_2)
{
 struct create_on_disk_id *VAR_3 = (struct create_on_disk_id *)VAR_1;

 FUNC_0(VAR_0, "parse query id context 0x%llx 0x%llx\n",
  VAR_3->DiskFileId, VAR_3->VolumeId);
 VAR_2->IndexNumber = VAR_3->DiskFileId;
}
