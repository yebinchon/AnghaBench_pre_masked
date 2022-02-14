
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int tid_t ;
struct super_block {int s_bdev; } ;
struct ext4_sb_info {TYPE_1__* s_journal; int rsv_conversion_wq; } ;
struct TYPE_5__ {int j_flags; } ;


 int VAR_0 ;
 struct ext4_sb_info* FUNC_0 (struct super_block*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,int ,int *) ;
 int FUNC_2 (struct super_block*,int) ;
 int FUNC_3 (struct ext4_sb_info*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (TYPE_1__*) ;
 scalar_t__ FUNC_6 (TYPE_1__*,int *) ;
 int FUNC_7 (TYPE_1__*,int ) ;
 int FUNC_8 (TYPE_1__*,int ) ;
 scalar_t__ FUNC_9 (struct super_block*,int ) ;
 int FUNC_10 (struct super_block*,int) ;
 scalar_t__ FUNC_11 (int ) ;

__attribute__((used)) static int FUNC_12(struct super_block *VAR_3, int VAR_4)
{
 int VAR_5 = 0;
 tid_t VAR_6;
 bool VAR_7 = 0;
 struct ext4_sb_info *VAR_8 = FUNC_0(VAR_3);

 if (FUNC_11(FUNC_3(VAR_8)))
  return 0;

 FUNC_10(VAR_3, VAR_4);
 FUNC_4(VAR_8->rsv_conversion_wq);




 FUNC_2(VAR_3, -1);





 if (VAR_8->s_journal) {
  VAR_6 = FUNC_5(VAR_8->s_journal);
  if (VAR_4 && VAR_8->s_journal->j_flags & VAR_2 &&
      !FUNC_8(VAR_8->s_journal, VAR_6))
   VAR_7 = 1;

  if (FUNC_6(VAR_8->s_journal, &VAR_6)) {
   if (VAR_4)
    VAR_5 = FUNC_7(VAR_8->s_journal,
          VAR_6);
  }
 } else if (VAR_4 && FUNC_9(VAR_3, VAR_0))
  VAR_7 = 1;
 if (VAR_7) {
  int VAR_9;
  VAR_9 = FUNC_1(VAR_3->s_bdev, VAR_1, ((void*)0));
  if (!VAR_5)
   VAR_5 = VAR_9;
 }

 return VAR_5;
}
