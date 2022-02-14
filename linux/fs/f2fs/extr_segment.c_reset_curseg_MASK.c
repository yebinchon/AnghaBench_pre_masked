
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct summary_footer {int dummy; } ;
struct f2fs_sb_info {int dummy; } ;
struct curseg_info {int segno; TYPE_1__* sum_blk; int next_segno; scalar_t__ next_blkoff; int zone; } ;
struct TYPE_2__ {struct summary_footer footer; } ;


 struct curseg_info* FUNC_0 (struct f2fs_sb_info*,int) ;
 int FUNC_1 (struct f2fs_sb_info*,int ) ;
 scalar_t__ FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int) ;
 int VAR_0 ;
 int FUNC_4 (struct summary_footer*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_5 (struct f2fs_sb_info*,int,int ,int) ;
 int FUNC_6 (struct summary_footer*,int ,int) ;

__attribute__((used)) static void FUNC_7(struct f2fs_sb_info *VAR_3, int VAR_4, int VAR_5)
{
 struct curseg_info *VAR_6 = FUNC_0(VAR_3, VAR_4);
 struct summary_footer *VAR_7;

 VAR_6->segno = VAR_6->next_segno;
 VAR_6->zone = FUNC_1(VAR_3, VAR_6->segno);
 VAR_6->next_blkoff = 0;
 VAR_6->next_segno = VAR_0;

 VAR_7 = &(VAR_6->sum_blk->footer);
 FUNC_6(VAR_7, 0, sizeof(struct summary_footer));
 if (FUNC_2(VAR_4))
  FUNC_4(VAR_7, VAR_1);
 if (FUNC_3(VAR_4))
  FUNC_4(VAR_7, VAR_2);
 FUNC_5(VAR_3, VAR_4, VAR_6->segno, VAR_5);
}
