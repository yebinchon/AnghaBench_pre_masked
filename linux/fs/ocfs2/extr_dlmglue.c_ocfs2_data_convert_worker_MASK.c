
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ocfs2_lock_res {int dummy; } ;
struct ocfs2_inode_info {unsigned long long ip_dir_lock_gen; scalar_t__ ip_blkno; } ;
struct inode {int i_mode; struct address_space* i_mapping; } ;
struct address_space {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct ocfs2_inode_info* FUNC_0 (struct inode*) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_2 ;
 int FUNC_3 (struct address_space*) ;
 scalar_t__ FUNC_4 (struct address_space*) ;
 int FUNC_5 (struct inode*) ;
 int FUNC_6 (int ,char*,unsigned long long) ;
 struct inode* FUNC_7 (struct ocfs2_lock_res*) ;
 int FUNC_8 (struct address_space*) ;
 int FUNC_9 (struct address_space*,int ) ;
 int FUNC_10 (struct address_space*,int ,int ,int ) ;

__attribute__((used)) static int FUNC_11(struct ocfs2_lock_res *VAR_3,
         int VAR_4)
{
 struct inode *VAR_5;
 struct address_space *VAR_6;
 struct ocfs2_inode_info *VAR_7;

        VAR_5 = FUNC_7(VAR_3);
 VAR_6 = VAR_5->i_mapping;

 if (FUNC_1(VAR_5->i_mode)) {
  VAR_7 = FUNC_0(VAR_5);
  VAR_7->ip_dir_lock_gen++;
  FUNC_6(0, "generation: %u\n", VAR_7->ip_dir_lock_gen);
  goto out;
 }

 if (!FUNC_2(VAR_5->i_mode))
  goto out;
 FUNC_10(VAR_6, 0, 0, 0);

 if (FUNC_4(VAR_6)) {
  FUNC_6(VAR_1, "Could not sync inode %llu for downconvert!",
       (unsigned long long)FUNC_0(VAR_5)->ip_blkno);
 }
 FUNC_8(VAR_6);
 if (VAR_4 == VAR_0) {
  FUNC_9(VAR_6, 0);
 } else {





  FUNC_3(VAR_6);
 }

 FUNC_5(VAR_5);

out:
 return VAR_2;
}
