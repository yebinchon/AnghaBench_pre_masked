
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct extent_buffer {int dummy; } ;
struct btrfs_fs_info {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct extent_buffer* FUNC_0 (struct btrfs_fs_info*,int,unsigned long) ;
 int FUNC_1 (unsigned long*,struct extent_buffer*,unsigned long) ;
 struct btrfs_fs_info* FUNC_2 (unsigned long,unsigned long) ;
 int FUNC_3 (struct btrfs_fs_info*) ;
 int FUNC_4 (struct extent_buffer*) ;
 int FUNC_5 (unsigned long*) ;
 unsigned long* FUNC_6 (unsigned long,int ) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (int ) ;

__attribute__((used)) static int FUNC_10(u32 VAR_5, u32 VAR_6)
{
 struct btrfs_fs_info *VAR_7;
 unsigned long VAR_8;
 unsigned long *VAR_9 = ((void*)0);
 struct extent_buffer *VAR_10 = ((void*)0);
 int VAR_11;

 FUNC_8("running extent buffer bitmap tests");





 VAR_8 = (VAR_5 < VAR_0)
  ? VAR_5 * 4 : VAR_5;

 VAR_7 = FUNC_2(VAR_8, VAR_8);
 if (!VAR_7) {
  FUNC_9(VAR_3);
  return -VAR_1;
 }

 VAR_9 = FUNC_6(VAR_8, VAR_2);
 if (!VAR_9) {
  FUNC_7("couldn't allocate test bitmap");
  VAR_11 = -VAR_1;
  goto out;
 }

 VAR_10 = FUNC_0(VAR_7, 0, VAR_8);
 if (!VAR_10) {
  FUNC_9(VAR_4);
  VAR_11 = -VAR_1;
  goto out;
 }

 VAR_11 = FUNC_1(VAR_9, VAR_10, VAR_8);
 if (VAR_11)
  goto out;


 FUNC_4(VAR_10);
 VAR_10 = FUNC_0(VAR_7, VAR_6 / 2, VAR_8);
 if (!VAR_10) {
  FUNC_9(VAR_4);
  VAR_11 = -VAR_1;
  goto out;
 }

 VAR_11 = FUNC_1(VAR_9, VAR_10, VAR_8);
out:
 FUNC_4(VAR_10);
 FUNC_5(VAR_9);
 FUNC_3(VAR_7);
 return VAR_11;
}
