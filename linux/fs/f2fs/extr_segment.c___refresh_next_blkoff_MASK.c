
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct f2fs_sb_info {int dummy; } ;
struct curseg_info {scalar_t__ alloc_type; scalar_t__ next_blkoff; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct f2fs_sb_info*,struct curseg_info*,scalar_t__) ;

__attribute__((used)) static void FUNC_1(struct f2fs_sb_info *VAR_1,
    struct curseg_info *VAR_2)
{
 if (VAR_2->alloc_type == VAR_0)
  FUNC_0(VAR_1, VAR_2, VAR_2->next_blkoff + 1);
 else
  VAR_2->next_blkoff++;
}
