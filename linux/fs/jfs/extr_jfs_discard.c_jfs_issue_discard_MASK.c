
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct super_block {int dummy; } ;
struct inode {struct super_block* i_sb; } ;


 int VAR_0 ;
 int FUNC_0 (char*,struct super_block*,unsigned long long,unsigned long long,int) ;
 int FUNC_1 (char*,struct super_block*,unsigned long long,unsigned long long,int) ;
 int FUNC_2 (struct super_block*,scalar_t__,scalar_t__,int ,int ) ;
 scalar_t__ FUNC_3 (int) ;

void FUNC_4(struct inode *VAR_1, u64 VAR_2, u64 VAR_3)
{
 struct super_block *VAR_4 = VAR_1->i_sb;
 int VAR_5 = 0;

 VAR_5 = FUNC_2(VAR_4, VAR_2, VAR_3, VAR_0, 0);
 if (FUNC_3(VAR_5 != 0)) {
  FUNC_0("JFS: sb_issue_discard(%p, %llu, %llu, GFP_NOFS, 0) = %d => failed!",
   VAR_4, (unsigned long long)VAR_2,
   (unsigned long long)VAR_3, VAR_5);
 }

 FUNC_1("JFS: sb_issue_discard(%p, %llu, %llu, GFP_NOFS, 0) = %d",
  VAR_4, (unsigned long long)VAR_2,
  (unsigned long long)VAR_3, VAR_5);

 return;
}
