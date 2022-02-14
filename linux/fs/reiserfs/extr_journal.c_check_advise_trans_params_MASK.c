
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int s_blocksize; } ;
struct reiserfs_journal {int j_trans_max; int j_max_batch; int j_max_commit_age; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct super_block*) ;
 int FUNC_1 (struct super_block*,char*,char*,int) ;

__attribute__((used)) static int FUNC_2(struct super_block *VAR_6,
         struct reiserfs_journal *VAR_7)
{
        if (VAR_7->j_trans_max) {

         int VAR_8 = 1;
  if (VAR_6->s_blocksize < VAR_5)
          VAR_8 = VAR_5 / VAR_6->s_blocksize;

  if (VAR_7->j_trans_max > VAR_3 / VAR_8 ||
      VAR_7->j_trans_max < VAR_4 / VAR_8 ||
      FUNC_0(VAR_6) / VAR_7->j_trans_max <
      VAR_2) {
   FUNC_1(VAR_6, "sh-462",
      "bad transaction max size (%u). "
      "FSCK?", VAR_7->j_trans_max);
   return 1;
  }
  if (VAR_7->j_max_batch != (VAR_7->j_trans_max) *
          VAR_0/VAR_3) {
   FUNC_1(VAR_6, "sh-463",
      "bad transaction max batch (%u). "
      "FSCK?", VAR_7->j_max_batch);
   return 1;
  }
 } else {






  if (VAR_6->s_blocksize != VAR_5) {
   FUNC_1(VAR_6, "sh-464", "bad blocksize (%u)",
      VAR_6->s_blocksize);
   return 1;
  }
  VAR_7->j_trans_max = VAR_3;
  VAR_7->j_max_batch = VAR_0;
  VAR_7->j_max_commit_age = VAR_1;
 }
 return 0;
}
