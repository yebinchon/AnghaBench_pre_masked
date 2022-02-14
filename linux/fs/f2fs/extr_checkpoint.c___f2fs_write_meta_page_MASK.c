
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct writeback_control {scalar_t__ for_reclaim; } ;
struct page {scalar_t__ index; } ;
struct f2fs_sb_info {int dummy; } ;
typedef enum iostat_type { ____Placeholder_iostat_type } iostat_type ;


 int VAR_0 ;
 int VAR_1 ;
 struct f2fs_sb_info* FUNC_0 (struct page*) ;
 scalar_t__ FUNC_1 (struct f2fs_sb_info*,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (struct f2fs_sb_info*,int ) ;
 int FUNC_3 (struct f2fs_sb_info*) ;
 int FUNC_4 (struct f2fs_sb_info*,struct page*,int) ;
 int FUNC_5 (struct f2fs_sb_info*,int ) ;
 int FUNC_6 (struct f2fs_sb_info*,int *,struct page*,int ,int ) ;
 int FUNC_7 (struct f2fs_sb_info*,int ) ;
 int FUNC_8 (struct writeback_control*,struct page*) ;
 int FUNC_9 (struct page*,int ) ;
 scalar_t__ FUNC_10 (int ) ;
 int FUNC_11 (struct page*) ;

__attribute__((used)) static int FUNC_12(struct page *VAR_4,
    struct writeback_control *VAR_5,
    enum iostat_type VAR_6)
{
 struct f2fs_sb_info *VAR_7 = FUNC_0(VAR_4);

 FUNC_9(VAR_4, VAR_2);

 if (FUNC_10(FUNC_3(VAR_7)))
  goto redirty_out;
 if (FUNC_10(FUNC_7(VAR_7, VAR_3)))
  goto redirty_out;
 if (VAR_5->for_reclaim && VAR_4->index < FUNC_1(VAR_7, 0))
  goto redirty_out;

 FUNC_4(VAR_7, VAR_4, VAR_6);
 FUNC_2(VAR_7, VAR_1);

 if (VAR_5->for_reclaim)
  FUNC_6(VAR_7, ((void*)0), VAR_4, 0, VAR_2);

 FUNC_11(VAR_4);

 if (FUNC_10(FUNC_3(VAR_7)))
  FUNC_5(VAR_7, VAR_2);

 return 0;

redirty_out:
 FUNC_8(VAR_5, VAR_4);
 return VAR_0;
}
