
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ocfs2_super {int dummy; } ;
struct ocfs2_lock_res {scalar_t__ l_ex_holders; scalar_t__ l_ro_holders; } ;
struct inode {int i_sb; } ;
struct TYPE_2__ {scalar_t__ ip_blkno; struct ocfs2_lock_res ip_open_lockres; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_0 (struct inode*) ;
 struct ocfs2_super* FUNC_1 (int ) ;
 int FUNC_2 (int ,char*,unsigned long long) ;
 int FUNC_3 (struct ocfs2_super*,struct ocfs2_lock_res*,int ) ;
 scalar_t__ FUNC_4 (struct ocfs2_super*) ;

void FUNC_5(struct inode *VAR_2)
{
 struct ocfs2_lock_res *VAR_3 = &FUNC_0(VAR_2)->ip_open_lockres;
 struct ocfs2_super *VAR_4 = FUNC_1(VAR_2->i_sb);

 FUNC_2(0, "inode %llu drop open lock\n",
      (unsigned long long)FUNC_0(VAR_2)->ip_blkno);

 if (FUNC_4(VAR_4))
  goto out;

 if(VAR_3->l_ro_holders)
  FUNC_3(VAR_4, VAR_3, VAR_1);
 if(VAR_3->l_ex_holders)
  FUNC_3(VAR_4, VAR_3, VAR_0);

out:
 return;
}
