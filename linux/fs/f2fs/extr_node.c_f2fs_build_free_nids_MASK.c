
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct f2fs_sb_info {int dummy; } ;
struct TYPE_2__ {int build_lock; } ;


 TYPE_1__* FUNC_0 (struct f2fs_sb_info*) ;
 int FUNC_1 (struct f2fs_sb_info*,int,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

int FUNC_4(struct f2fs_sb_info *VAR_0, bool VAR_1, bool VAR_2)
{
 int VAR_3;

 FUNC_2(&FUNC_0(VAR_0)->build_lock);
 VAR_3 = FUNC_1(VAR_0, VAR_1, VAR_2);
 FUNC_3(&FUNC_0(VAR_0)->build_lock);

 return VAR_3;
}
