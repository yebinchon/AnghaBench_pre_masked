
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct reiserfs_journal_desc {int dummy; } ;
struct buffer_head {scalar_t__ b_blocknr; scalar_t__ b_data; } ;


 int VAR_0 ;
 int FUNC_0 (struct reiserfs_journal_desc*) ;
 int FUNC_1 (struct reiserfs_journal_desc*) ;
 int FUNC_2 (struct reiserfs_journal_desc*) ;
 int FUNC_3 (struct buffer_head*) ;
 scalar_t__ FUNC_4 (int ,int ,int) ;
 int FUNC_5 (char*,unsigned long long,int ,int ,int ) ;

__attribute__((used)) static int FUNC_6(struct buffer_head *VAR_1)
{
 struct reiserfs_journal_desc *VAR_2;

 if (FUNC_4(FUNC_3(VAR_1), VAR_0, 8))
  return 1;

 VAR_2 = (struct reiserfs_journal_desc *)(VAR_1->b_data);
 FUNC_5("Desc block %llu (j_trans_id %d, j_mount_id %d, j_len %d)",
        (unsigned long long)VAR_1->b_blocknr, FUNC_1(VAR_2),
        FUNC_0(VAR_2), FUNC_2(VAR_2));

 return 0;
}
