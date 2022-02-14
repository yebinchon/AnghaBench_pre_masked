
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct f2fs_sb_info {int dummy; } ;
struct f2fs_journal {int dummy; } ;
struct curseg_info {int journal_rwsem; struct f2fs_journal* journal; } ;
typedef void* nid_t ;
typedef scalar_t__ block_t ;
struct TYPE_2__ {int block_addr; } ;


 int VAR_0 ;
 struct curseg_info* FUNC_0 (struct f2fs_sb_info*,int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (struct f2fs_sb_info*,void*,int,int) ;
 int FUNC_2 (int *) ;
 void* FUNC_3 (int ) ;
 TYPE_1__ FUNC_4 (struct f2fs_journal*,int) ;
 int FUNC_5 (struct f2fs_journal*) ;
 int FUNC_6 (struct f2fs_journal*,int) ;
 int FUNC_7 (struct f2fs_sb_info*,void*) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static void FUNC_9(struct f2fs_sb_info *VAR_2)
{
 struct curseg_info *VAR_3 = FUNC_0(VAR_2, VAR_0);
 struct f2fs_journal *VAR_4 = VAR_3->journal;
 int VAR_5;

 FUNC_2(&VAR_3->journal_rwsem);
 for (VAR_5 = 0; VAR_5 < FUNC_5(VAR_4); VAR_5++) {
  block_t VAR_6;
  nid_t VAR_7;

  VAR_6 = FUNC_3(FUNC_4(VAR_4, VAR_5).block_addr);
  VAR_7 = FUNC_3(FUNC_6(VAR_4, VAR_5));
  if (VAR_6 == VAR_1)
   FUNC_1(VAR_2, VAR_7, 1, 0);
  else
   FUNC_7(VAR_2, VAR_7);
 }
 FUNC_8(&VAR_3->journal_rwsem);
}
