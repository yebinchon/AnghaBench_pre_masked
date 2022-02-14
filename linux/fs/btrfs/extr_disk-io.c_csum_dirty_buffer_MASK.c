
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u64 ;
typedef int u16 ;
struct page {scalar_t__ private; } ;
struct extent_buffer {int start; struct page** pages; } ;
struct btrfs_fs_info {TYPE_1__* fs_devices; int super_copy; } ;
struct TYPE_2__ {int metadata_uuid; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct page*) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (struct extent_buffer*) ;
 int FUNC_4 (struct extent_buffer*) ;
 int FUNC_5 (struct btrfs_fs_info*,char*,int ) ;
 scalar_t__ FUNC_6 (struct extent_buffer*) ;
 int FUNC_7 () ;
 scalar_t__ FUNC_8 (struct extent_buffer*) ;
 int FUNC_9 (int ) ;
 scalar_t__ FUNC_10 (struct extent_buffer*,int *) ;
 scalar_t__ FUNC_11 (struct extent_buffer*,int ,int ,int ) ;
 scalar_t__ FUNC_12 (struct page*) ;
 int FUNC_13 (struct extent_buffer*,int *,int ,int ) ;

__attribute__((used)) static int FUNC_14(struct btrfs_fs_info *VAR_4, struct page *VAR_5)
{
 u64 VAR_6 = FUNC_12(VAR_5);
 u64 VAR_7;
 u8 VAR_8[VAR_0];
 u16 VAR_9 = FUNC_9(VAR_4->super_copy);
 struct extent_buffer *VAR_10;
 int VAR_11;

 VAR_10 = (struct extent_buffer *)VAR_5->private;
 if (VAR_5 != VAR_10->pages[0])
  return 0;

 VAR_7 = FUNC_6(VAR_10);




 if (FUNC_2(VAR_7 != VAR_6))
  return -VAR_3;
 if (FUNC_2(!FUNC_1(VAR_5)))
  return -VAR_3;

 FUNC_0(FUNC_11(VAR_10, VAR_4->fs_devices->metadata_uuid,
   FUNC_7(), VAR_1) == 0);

 if (FUNC_10(VAR_10, VAR_8))
  return -VAR_2;

 if (FUNC_8(VAR_10))
  VAR_11 = FUNC_4(VAR_10);
 else
  VAR_11 = FUNC_3(VAR_10);

 if (VAR_11 < 0) {
  FUNC_5(VAR_4,
  "block=%llu write time tree block corruption detected",
     VAR_10->start);
  return VAR_11;
 }
 FUNC_13(VAR_10, VAR_8, 0, VAR_9);

 return 0;
}
