
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct extent_buffer {struct btrfs_fs_info* fs_info; } ;
struct btrfs_fs_info {struct btrfs_fs_devices* fs_devices; } ;
struct btrfs_fs_devices {struct btrfs_fs_devices* seed; int * fsid; int * metadata_uuid; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct btrfs_fs_info*,int ) ;
 int FUNC_1 () ;
 int FUNC_2 (int *,int *,int) ;
 int FUNC_3 (struct extent_buffer*,int *,int ,int) ;

__attribute__((used)) static int FUNC_4(struct extent_buffer *VAR_2)
{
 struct btrfs_fs_info *VAR_3 = VAR_2->fs_info;
 struct btrfs_fs_devices *VAR_4 = VAR_3->fs_devices;
 u8 VAR_5[VAR_0];
 int VAR_6 = 1;

 FUNC_3(VAR_2, VAR_5, FUNC_1(), VAR_0);
 while (VAR_4) {
  u8 *VAR_7;






  if (VAR_4 == VAR_3->fs_devices &&
      FUNC_0(VAR_3, VAR_1))
   VAR_7 = VAR_4->metadata_uuid;
  else
   VAR_7 = VAR_4->fsid;

  if (!FUNC_2(VAR_5, VAR_7, VAR_0)) {
   VAR_6 = 0;
   break;
  }
  VAR_4 = VAR_4->seed;
 }
 return VAR_6;
}
