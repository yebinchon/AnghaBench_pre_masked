
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ocfs2_super {int dummy; } ;
struct ocfs2_lock_res {int dummy; } ;
struct inode {int i_sb; } ;
struct TYPE_2__ {scalar_t__ ip_blkno; struct ocfs2_lock_res ip_rw_lockres; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_0 (struct inode*) ;
 struct ocfs2_super* FUNC_1 (int ) ;
 int FUNC_2 (int ,char*,unsigned long long,char*) ;
 int FUNC_3 (struct ocfs2_super*,struct ocfs2_lock_res*,int) ;
 int FUNC_4 (struct ocfs2_super*) ;

void FUNC_5(struct inode *VAR_2, int VAR_3)
{
 int VAR_4 = VAR_3 ? VAR_0 : VAR_1;
 struct ocfs2_lock_res *VAR_5 = &FUNC_0(VAR_2)->ip_rw_lockres;
 struct ocfs2_super *VAR_6 = FUNC_1(VAR_2->i_sb);

 FUNC_2(0, "inode %llu drop %s RW lock\n",
      (unsigned long long)FUNC_0(VAR_2)->ip_blkno,
      VAR_3 ? "EXMODE" : "PRMODE");

 if (!FUNC_4(VAR_6))
  FUNC_3(VAR_6, VAR_5, VAR_4);
}
