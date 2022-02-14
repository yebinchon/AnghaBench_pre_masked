
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct btrfs_free_space_ctl {scalar_t__ total_bitmaps; } ;
struct btrfs_free_space {int offset_index; int bitmap; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct btrfs_free_space_ctl*,struct btrfs_free_space*,int) ;
 int FUNC_3 (struct btrfs_free_space_ctl*,struct btrfs_free_space*,int) ;
 int FUNC_4 (struct btrfs_free_space_ctl*,struct btrfs_free_space*,int) ;

__attribute__((used)) static void FUNC_5(struct btrfs_free_space_ctl *VAR_0,
         struct btrfs_free_space *VAR_1,
         bool VAR_2)
{




 FUNC_0(!VAR_1->bitmap);
 FUNC_0(FUNC_1(&VAR_1->offset_index));

 if (VAR_0->total_bitmaps > 0) {
  bool VAR_3;
  bool VAR_4 = 0;

  VAR_3 = FUNC_2(VAR_0, VAR_1, VAR_2);
  if (VAR_0->total_bitmaps > 0)
   VAR_4 = FUNC_3(VAR_0, VAR_1,
         VAR_2);

  if (VAR_3 || VAR_4)
   FUNC_4(VAR_0, VAR_1, VAR_2);
 }
}
