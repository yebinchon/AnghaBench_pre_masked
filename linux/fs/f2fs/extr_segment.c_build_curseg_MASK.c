
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct f2fs_sb_info {int dummy; } ;
struct f2fs_journal {int dummy; } ;
struct curseg_info {scalar_t__ next_blkoff; int segno; void* journal; int journal_rwsem; void* sum_blk; int curseg_mutex; } ;
struct TYPE_2__ {struct curseg_info* curseg_array; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_1__* FUNC_0 (struct f2fs_sb_info*) ;
 int FUNC_1 (int,int) ;
 void* FUNC_2 (struct f2fs_sb_info*,int,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct f2fs_sb_info*) ;

__attribute__((used)) static int FUNC_6(struct f2fs_sb_info *VAR_5)
{
 struct curseg_info *VAR_6;
 int VAR_7;

 VAR_6 = FUNC_2(VAR_5, FUNC_1(VAR_2, sizeof(*VAR_6)),
        VAR_1);
 if (!VAR_6)
  return -VAR_0;

 FUNC_0(VAR_5)->curseg_array = VAR_6;

 for (VAR_7 = 0; VAR_7 < VAR_2; VAR_7++) {
  FUNC_4(&VAR_6[VAR_7].curseg_mutex);
  VAR_6[VAR_7].sum_blk = FUNC_2(VAR_5, VAR_4, VAR_1);
  if (!VAR_6[VAR_7].sum_blk)
   return -VAR_0;
  FUNC_3(&VAR_6[VAR_7].journal_rwsem);
  VAR_6[VAR_7].journal = FUNC_2(VAR_5,
    sizeof(struct f2fs_journal), VAR_1);
  if (!VAR_6[VAR_7].journal)
   return -VAR_0;
  VAR_6[VAR_7].segno = VAR_3;
  VAR_6[VAR_7].next_blkoff = 0;
 }
 return FUNC_5(VAR_5);
}
