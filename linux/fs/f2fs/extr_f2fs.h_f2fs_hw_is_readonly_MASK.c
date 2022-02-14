
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct f2fs_sb_info {int s_ndevs; TYPE_1__* sb; } ;
struct TYPE_4__ {int bdev; } ;
struct TYPE_3__ {int s_bdev; } ;


 TYPE_2__ FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct f2fs_sb_info*) ;

__attribute__((used)) static inline bool FUNC_3(struct f2fs_sb_info *VAR_0)
{
 int VAR_1;

 if (!FUNC_2(VAR_0))
  return FUNC_1(VAR_0->sb->s_bdev);

 for (VAR_1 = 0; VAR_1 < VAR_0->s_ndevs; VAR_1++)
  if (FUNC_1(FUNC_0(VAR_1).bdev))
   return 1;
 return 0;
}
