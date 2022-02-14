
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * files; } ;
struct super_block {TYPE_1__ s_dquot; } ;
struct ocfs2_super {struct super_block* sb; } ;
struct ocfs2_mem_dqinfo {int dqi_sync_work; } ;
struct inode {int dummy; } ;
struct TYPE_4__ {struct ocfs2_mem_dqinfo* dqi_priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct super_block*,int,int) ;
 struct inode* FUNC_2 (int ) ;
 int FUNC_3 (struct inode*) ;
 TYPE_2__* FUNC_4 (struct super_block*,int) ;
 int FUNC_5 (struct super_block*,int) ;

__attribute__((used)) static void FUNC_6(struct ocfs2_super *VAR_3)
{
 int VAR_4;
 struct inode *VAR_5;
 struct super_block *VAR_6 = VAR_3->sb;
 struct ocfs2_mem_dqinfo *VAR_7;



 for (VAR_4 = 0; VAR_4 < VAR_2; VAR_4++) {
  if (!FUNC_5(VAR_6, VAR_4))
   continue;
  VAR_7 = FUNC_4(VAR_6, VAR_4)->dqi_priv;
  FUNC_0(&VAR_7->dqi_sync_work);
  VAR_5 = FUNC_2(VAR_6->s_dquot.files[VAR_4]);



  FUNC_1(VAR_6, VAR_4, VAR_1 |
     VAR_0);
  if (!VAR_5)
   continue;
  FUNC_3(VAR_5);
 }
}
