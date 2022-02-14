
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct walk_control {scalar_t__ wait; scalar_t__ write; scalar_t__ pin; } ;
struct extent_buffer {int len; int start; } ;
struct btrfs_root {struct btrfs_fs_info* fs_info; } ;
struct btrfs_fs_info {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct extent_buffer*,int ,int ) ;
 int FUNC_1 (struct extent_buffer*) ;
 scalar_t__ FUNC_2 (struct btrfs_fs_info*,int ) ;
 scalar_t__ FUNC_3 (struct extent_buffer*) ;
 int FUNC_4 (struct btrfs_fs_info*,int ,int ) ;
 int FUNC_5 (struct extent_buffer*,int ,int,int *) ;
 int FUNC_6 (struct extent_buffer*) ;
 int FUNC_7 (struct extent_buffer*) ;

__attribute__((used)) static int FUNC_8(struct btrfs_root *VAR_1,
         struct extent_buffer *VAR_2,
         struct walk_control *VAR_3, u64 VAR_4, int VAR_5)
{
 struct btrfs_fs_info *VAR_6 = VAR_1->fs_info;
 int VAR_7 = 0;





 if (FUNC_2(VAR_6, VAR_0)) {
  VAR_7 = FUNC_5(VAR_2, VAR_4, VAR_5, ((void*)0));
  if (VAR_7)
   return VAR_7;
 }

 if (VAR_3->pin)
  VAR_7 = FUNC_4(VAR_6, VAR_2->start,
            VAR_2->len);

 if (!VAR_7 && FUNC_0(VAR_2, VAR_4, 0)) {
  if (VAR_3->pin && FUNC_3(VAR_2) == 0)
   VAR_7 = FUNC_1(VAR_2);
  if (VAR_3->write)
   FUNC_7(VAR_2);
  if (VAR_3->wait)
   FUNC_6(VAR_2);
 }
 return VAR_7;
}
