
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ocfs2_super {int dummy; } ;
struct ocfs2_lock_res {int dummy; } ;
struct inode {int i_sb; } ;
struct TYPE_2__ {struct ocfs2_lock_res ip_rw_lockres; scalar_t__ ip_blkno; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__* FUNC_0 (struct inode*) ;
 struct ocfs2_super* FUNC_1 (int ) ;
 int FUNC_2 (int ,char*,unsigned long long,char*) ;
 int FUNC_3 (struct ocfs2_super*,struct ocfs2_lock_res*,int,int ,int ) ;
 scalar_t__ FUNC_4 (struct ocfs2_super*) ;

int FUNC_5(struct inode *VAR_3, int VAR_4)
{
 int VAR_5, VAR_6;
 struct ocfs2_lock_res *VAR_7;
 struct ocfs2_super *VAR_8 = FUNC_1(VAR_3->i_sb);

 FUNC_2(0, "inode %llu try to take %s RW lock\n",
      (unsigned long long)FUNC_0(VAR_3)->ip_blkno,
      VAR_4 ? "EXMODE" : "PRMODE");

 if (FUNC_4(VAR_8))
  return 0;

 VAR_7 = &FUNC_0(VAR_3)->ip_rw_lockres;

 VAR_6 = VAR_4 ? VAR_1 : VAR_2;

 VAR_5 = FUNC_3(VAR_8, VAR_7, VAR_6, VAR_0, 0);
 return VAR_5;
}
