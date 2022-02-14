
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct extent_buffer {int bflags; } ;
struct btrfs_fs_info {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct extent_buffer*) ;
 int VAR_3 ;
 struct extent_buffer* FUNC_1 (struct btrfs_fs_info*,int ) ;
 scalar_t__ FUNC_2 (struct extent_buffer*) ;
 int FUNC_3 (struct extent_buffer*) ;
 int FUNC_4 (struct extent_buffer*) ;
 int FUNC_5 (struct extent_buffer*,int ,int) ;
 int FUNC_6 (int ,int *) ;
 scalar_t__ FUNC_7 (int ,int *) ;

__attribute__((used)) static int FUNC_8(struct btrfs_fs_info *VAR_4, u64 VAR_5,
        int VAR_6, struct extent_buffer **VAR_7)
{
 struct extent_buffer *VAR_8 = ((void*)0);
 int VAR_9;

 VAR_8 = FUNC_1(VAR_4, VAR_5);
 if (FUNC_0(VAR_8))
  return 0;

 FUNC_6(VAR_2, &VAR_8->bflags);

 VAR_9 = FUNC_5(VAR_8, VAR_3, VAR_6);
 if (VAR_9) {
  FUNC_4(VAR_8);
  return VAR_9;
 }

 if (FUNC_7(VAR_1, &VAR_8->bflags)) {
  FUNC_4(VAR_8);
  return -VAR_0;
 } else if (FUNC_2(VAR_8)) {
  *VAR_7 = VAR_8;
 } else {
  FUNC_3(VAR_8);
 }
 return 0;
}
