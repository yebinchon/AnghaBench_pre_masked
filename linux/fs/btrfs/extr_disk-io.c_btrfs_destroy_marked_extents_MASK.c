
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct extent_io_tree {int dummy; } ;
struct extent_buffer {int bflags; } ;
struct btrfs_fs_info {scalar_t__ nodesize; } ;


 int VAR_0 ;
 int FUNC_0 (struct extent_io_tree*,scalar_t__,scalar_t__,int) ;
 int FUNC_1 (struct extent_buffer*) ;
 struct extent_buffer* FUNC_2 (struct btrfs_fs_info*,scalar_t__) ;
 int FUNC_3 (struct extent_io_tree*,scalar_t__,scalar_t__*,scalar_t__*,int,int *) ;
 int FUNC_4 (struct extent_buffer*) ;
 scalar_t__ FUNC_5 (int ,int *) ;
 int FUNC_6 (struct extent_buffer*) ;

__attribute__((used)) static int FUNC_7(struct btrfs_fs_info *VAR_1,
     struct extent_io_tree *VAR_2,
     int VAR_3)
{
 int VAR_4;
 struct extent_buffer *VAR_5;
 u64 VAR_6 = 0;
 u64 VAR_7;

 while (1) {
  VAR_4 = FUNC_3(VAR_2, VAR_6, &VAR_6, &VAR_7,
         VAR_3, ((void*)0));
  if (VAR_4)
   break;

  FUNC_0(VAR_2, VAR_6, VAR_7, VAR_3);
  while (VAR_6 <= VAR_7) {
   VAR_5 = FUNC_2(VAR_1, VAR_6);
   VAR_6 += VAR_1->nodesize;
   if (!VAR_5)
    continue;
   FUNC_6(VAR_5);

   if (FUNC_5(VAR_0,
            &VAR_5->bflags))
    FUNC_1(VAR_5);
   FUNC_4(VAR_5);
  }
 }

 return VAR_4;
}
