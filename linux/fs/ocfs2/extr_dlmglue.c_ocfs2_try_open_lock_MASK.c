
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ocfs2_super {int dummy; } ;
struct ocfs2_lock_res {int dummy; } ;
struct inode {int i_sb; } ;
struct TYPE_2__ {struct ocfs2_lock_res ip_open_lockres; scalar_t__ ip_blkno; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_1__* FUNC_0 (struct inode*) ;
 struct ocfs2_super* FUNC_1 (int ) ;
 int FUNC_2 (int ,char*,unsigned long long,char*) ;
 int FUNC_3 (struct ocfs2_super*,struct ocfs2_lock_res*,int,int ,int ) ;
 scalar_t__ FUNC_4 (struct ocfs2_super*) ;
 scalar_t__ FUNC_5 (struct ocfs2_super*) ;

int FUNC_6(struct inode *VAR_4, int VAR_5)
{
 int VAR_6 = 0, VAR_7;
 struct ocfs2_lock_res *VAR_8;
 struct ocfs2_super *VAR_9 = FUNC_1(VAR_4->i_sb);

 FUNC_2(0, "inode %llu try to take %s open lock\n",
      (unsigned long long)FUNC_0(VAR_4)->ip_blkno,
      VAR_5 ? "EXMODE" : "PRMODE");

 if (FUNC_4(VAR_9)) {
  if (VAR_5)
   VAR_6 = -VAR_3;
  goto out;
 }

 if (FUNC_5(VAR_9))
  goto out;

 VAR_8 = &FUNC_0(VAR_4)->ip_open_lockres;

 VAR_7 = VAR_5 ? VAR_1 : VAR_2;







 VAR_6 = FUNC_3(VAR_9, VAR_8, VAR_7, VAR_0, 0);

out:
 return VAR_6;
}
