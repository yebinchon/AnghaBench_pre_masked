
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct f2fs_sb_info {int dummy; } ;
struct curseg_info {scalar_t__ alloc_type; } ;


 int VAR_0 ;
 struct curseg_info* FUNC_0 (struct f2fs_sb_info*,int) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct f2fs_sb_info*,int) ;
 scalar_t__ FUNC_2 (struct f2fs_sb_info*) ;
 scalar_t__ FUNC_3 (struct f2fs_sb_info*,int) ;
 scalar_t__ FUNC_4 (struct f2fs_sb_info*,int) ;
 int FUNC_5 (struct f2fs_sb_info*,int ) ;
 int FUNC_6 (struct f2fs_sb_info*,int ) ;
 scalar_t__ FUNC_7 (int) ;
 int FUNC_8 (struct f2fs_sb_info*,int,int) ;
 int FUNC_9 (struct f2fs_sb_info*,struct curseg_info*) ;

__attribute__((used)) static void FUNC_10(struct f2fs_sb_info *VAR_4,
      int VAR_5, bool VAR_6)
{
 struct curseg_info *VAR_7 = FUNC_0(VAR_4, VAR_5);

 if (VAR_6)
  FUNC_8(VAR_4, VAR_5, 1);
 else if (!FUNC_6(VAR_4, VAR_0) &&
     VAR_5 == VAR_1)
  FUNC_8(VAR_4, VAR_5, 0);
 else if (VAR_7->alloc_type == VAR_2 && FUNC_4(VAR_4, VAR_5) &&
   FUNC_7(!FUNC_5(VAR_4, VAR_3)))
  FUNC_8(VAR_4, VAR_5, 0);
 else if (FUNC_2(VAR_4) && FUNC_3(VAR_4, VAR_5))
  FUNC_1(VAR_4, VAR_5);
 else
  FUNC_8(VAR_4, VAR_5, 0);

 FUNC_9(VAR_4, VAR_7);
}
