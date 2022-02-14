
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct extent_buffer {int * pages; int bflags; } ;
struct btrfs_fs_info {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct extent_buffer* FUNC_0 (struct btrfs_fs_info*,int ,unsigned long) ;
 int FUNC_1 (struct extent_buffer*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct extent_buffer*,int ) ;
 int FUNC_5 (struct extent_buffer*) ;
 int FUNC_6 (int ,int *) ;
 int FUNC_7 (struct extent_buffer*) ;

struct extent_buffer *FUNC_8(struct btrfs_fs_info *VAR_2,
        u64 VAR_3, unsigned long VAR_4)
{
 struct extent_buffer *VAR_5;
 int VAR_6;
 int VAR_7;

 VAR_5 = FUNC_0(VAR_2, VAR_3, VAR_4);
 if (!VAR_5)
  return ((void*)0);

 VAR_6 = FUNC_5(VAR_5);
 for (VAR_7 = 0; VAR_7 < VAR_6; VAR_7++) {
  VAR_5->pages[VAR_7] = FUNC_3(VAR_1);
  if (!VAR_5->pages[VAR_7])
   goto err;
 }
 FUNC_7(VAR_5);
 FUNC_4(VAR_5, 0);
 FUNC_6(VAR_0, &VAR_5->bflags);

 return VAR_5;
err:
 for (; VAR_7 > 0; VAR_7--)
  FUNC_2(VAR_5->pages[VAR_7 - 1]);
 FUNC_1(VAR_5);
 return ((void*)0);
}
