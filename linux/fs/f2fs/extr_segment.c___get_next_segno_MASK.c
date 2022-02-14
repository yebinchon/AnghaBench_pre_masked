
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct f2fs_sb_info {int dummy; } ;
struct TYPE_6__ {unsigned int segno; } ;
struct TYPE_5__ {scalar_t__ alloc_mode; } ;
struct TYPE_4__ {unsigned int* last_victim; } ;


 scalar_t__ VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 TYPE_3__* FUNC_0 (struct f2fs_sb_info*,int) ;
 TYPE_2__ FUNC_1 (struct f2fs_sb_info*) ;
 scalar_t__ FUNC_2 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_1__* FUNC_3 (struct f2fs_sb_info*) ;
 scalar_t__ FUNC_4 (struct f2fs_sb_info*) ;
 int FUNC_5 (struct f2fs_sb_info*,int ) ;
 scalar_t__ FUNC_6 (struct f2fs_sb_info*,int ) ;
 scalar_t__ FUNC_7 (int ) ;

__attribute__((used)) static unsigned int FUNC_8(struct f2fs_sb_info *VAR_5, int VAR_6)
{

 if (FUNC_4(VAR_5))
  return FUNC_0(VAR_5, VAR_6)->segno;

 if (FUNC_7(FUNC_5(VAR_5, VAR_4)))
  return 0;

 if (FUNC_6(VAR_5, VAR_3) &&
  (VAR_6 == VAR_2 || FUNC_2(VAR_6)))
  return 0;

 if (FUNC_3(VAR_5)->last_victim[VAR_1])
  return FUNC_3(VAR_5)->last_victim[VAR_1];


 if (FUNC_1(VAR_5).alloc_mode == VAR_0)
  return 0;

 return FUNC_0(VAR_5, VAR_6)->segno;
}
