
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct f2fs_sb_info {int s_ndevs; TYPE_1__* sb; } ;
typedef int nid_t ;
struct TYPE_4__ {int bdev; } ;
struct TYPE_3__ {int s_bdev; } ;


 TYPE_2__ FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (struct f2fs_sb_info*,int ) ;
 int FUNC_2 (struct f2fs_sb_info*,int ,int,int ) ;
 int FUNC_3 (struct f2fs_sb_info*) ;

__attribute__((used)) static int FUNC_4(struct f2fs_sb_info *VAR_1, nid_t VAR_2)
{
 int VAR_3 = 0;
 int VAR_4;

 if (!FUNC_3(VAR_1))
  return FUNC_1(VAR_1, VAR_1->sb->s_bdev);

 for (VAR_4 = 0; VAR_4 < VAR_1->s_ndevs; VAR_4++) {
  if (!FUNC_2(VAR_1, VAR_2, VAR_4, VAR_0))
   continue;
  VAR_3 = FUNC_1(VAR_1, FUNC_0(VAR_4).bdev);
  if (VAR_3)
   break;
 }
 return VAR_3;
}
