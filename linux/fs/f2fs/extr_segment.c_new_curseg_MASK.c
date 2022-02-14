
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct f2fs_sb_info {int dummy; } ;
struct curseg_info {unsigned int segno; unsigned int next_segno; int alloc_type; int sum_blk; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct curseg_info* FUNC_0 (struct f2fs_sb_info*,int) ;
 int VAR_3 ;
 int FUNC_1 (struct f2fs_sb_info*,unsigned int) ;
 int VAR_4 ;
 int VAR_5 ;
 unsigned int FUNC_2 (struct f2fs_sb_info*,int) ;
 int FUNC_3 (struct f2fs_sb_info*,unsigned int*,int,int) ;
 int FUNC_4 (struct f2fs_sb_info*,int,int) ;
 scalar_t__ FUNC_5 (struct f2fs_sb_info*,int ) ;
 int FUNC_6 (struct f2fs_sb_info*,int ,int ) ;

__attribute__((used)) static void FUNC_7(struct f2fs_sb_info *VAR_6, int VAR_7, bool VAR_8)
{
 struct curseg_info *VAR_9 = FUNC_0(VAR_6, VAR_7);
 unsigned int VAR_10 = VAR_9->segno;
 int VAR_11 = VAR_0;

 FUNC_6(VAR_6, VAR_9->sum_blk,
    FUNC_1(VAR_6, VAR_10));
 if (VAR_7 == VAR_3 || VAR_7 == VAR_2)
  VAR_11 = VAR_1;

 if (FUNC_5(VAR_6, VAR_5))
  VAR_11 = VAR_1;

 VAR_10 = FUNC_2(VAR_6, VAR_7);
 FUNC_3(VAR_6, &VAR_10, VAR_8, VAR_11);
 VAR_9->next_segno = VAR_10;
 FUNC_4(VAR_6, VAR_7, 1);
 VAR_9->alloc_type = VAR_4;
}
