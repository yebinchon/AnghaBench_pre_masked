
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct f2fs_sb_info {int dummy; } ;
struct f2fs_journal {int dummy; } ;
struct curseg_info {int journal_rwsem; struct f2fs_journal* journal; } ;
struct TYPE_2__ {int sit_entry_set; } ;


 int VAR_0 ;
 struct curseg_info* FUNC_0 (struct f2fs_sb_info*,int ) ;
 TYPE_1__* FUNC_1 (struct f2fs_sb_info*) ;
 int FUNC_2 (struct f2fs_sb_info*,unsigned int) ;
 int FUNC_3 (unsigned int,int *) ;
 int FUNC_4 (int *) ;
 unsigned int FUNC_5 (int ) ;
 int FUNC_6 (struct f2fs_journal*,int) ;
 int FUNC_7 (struct f2fs_journal*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (struct f2fs_journal*,int) ;

__attribute__((used)) static void FUNC_10(struct f2fs_sb_info *VAR_1)
{
 struct curseg_info *VAR_2 = FUNC_0(VAR_1, VAR_0);
 struct f2fs_journal *VAR_3 = VAR_2->journal;
 int VAR_4;

 FUNC_4(&VAR_2->journal_rwsem);
 for (VAR_4 = 0; VAR_4 < FUNC_7(VAR_3); VAR_4++) {
  unsigned int VAR_5;
  bool VAR_6;

  VAR_5 = FUNC_5(FUNC_6(VAR_3, VAR_4));
  VAR_6 = FUNC_2(VAR_1, VAR_5);

  if (!VAR_6)
   FUNC_3(VAR_5, &FUNC_1(VAR_1)->sit_entry_set);
 }
 FUNC_9(VAR_3, -VAR_4);
 FUNC_8(&VAR_2->journal_rwsem);
}
