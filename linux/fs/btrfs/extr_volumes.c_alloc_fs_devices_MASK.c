
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct btrfs_fs_devices {int metadata_uuid; int fsid; int fs_list; int alloc_list; int devices; int device_list_mutex; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct btrfs_fs_devices* FUNC_0 (int ) ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 struct btrfs_fs_devices* FUNC_2 (int,int ) ;
 int FUNC_3 (int ,int const*,int ) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static struct btrfs_fs_devices *FUNC_5(const u8 *VAR_3,
       const u8 *VAR_4)
{
 struct btrfs_fs_devices *VAR_5;

 VAR_5 = FUNC_2(sizeof(*VAR_5), VAR_2);
 if (!VAR_5)
  return FUNC_0(-VAR_1);

 FUNC_4(&VAR_5->device_list_mutex);

 FUNC_1(&VAR_5->devices);
 FUNC_1(&VAR_5->alloc_list);
 FUNC_1(&VAR_5->fs_list);
 if (VAR_3)
  FUNC_3(VAR_5->fsid, VAR_3, VAR_0);

 if (VAR_4)
  FUNC_3(VAR_5->metadata_uuid, VAR_4, VAR_0);
 else if (VAR_3)
  FUNC_3(VAR_5->metadata_uuid, VAR_3, VAR_0);

 return VAR_5;
}
