
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ xfs_ino_t ;
struct xfs_mount {int m_super; } ;
struct xfs_inode {scalar_t__ i_ino; int i_ioend_lock; int i_ioend_list; int i_ioend_work; scalar_t__ i_checked; scalar_t__ i_sick; int i_d; scalar_t__ i_delayed_blks; scalar_t__ i_flags; int i_df; int i_cformat; scalar_t__ i_cnextents; int * i_cowfp; int * i_afp; int i_imap; struct xfs_mount* i_mount; int i_pincount; } ;
struct xfs_imap {int dummy; } ;
struct TYPE_3__ {scalar_t__ i_mode; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ) ;
 TYPE_1__* FUNC_3 (struct xfs_inode*) ;
 int VAR_0 ;
 int FUNC_4 (struct xfs_mount*,int ) ;
 scalar_t__ FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int ,TYPE_1__*) ;
 struct xfs_inode* FUNC_7 (int ,int ) ;
 int FUNC_8 (int ,struct xfs_inode*) ;
 int FUNC_9 (int *,int ,int) ;
 int FUNC_10 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_11 (struct xfs_inode*) ;

struct xfs_inode *
FUNC_12(
 struct xfs_mount *VAR_4,
 xfs_ino_t VAR_5)
{
 struct xfs_inode *VAR_6;






 VAR_6 = FUNC_7(VAR_3, 0);
 if (!VAR_6)
  return ((void*)0);
 if (FUNC_6(VAR_4->m_super, FUNC_3(VAR_6))) {
  FUNC_8(VAR_3, VAR_6);
  return ((void*)0);
 }


 FUNC_3(VAR_6)->i_mode = 0;

 FUNC_4(VAR_4, VAR_1);
 FUNC_0(FUNC_5(&VAR_6->i_pincount) == 0);
 FUNC_0(!FUNC_11(VAR_6));
 FUNC_0(VAR_6->i_ino == 0);


 VAR_6->i_ino = VAR_5;
 VAR_6->i_mount = VAR_4;
 FUNC_9(&VAR_6->i_imap, 0, sizeof(struct xfs_imap));
 VAR_6->i_afp = ((void*)0);
 VAR_6->i_cowfp = ((void*)0);
 VAR_6->i_cnextents = 0;
 VAR_6->i_cformat = VAR_0;
 FUNC_9(&VAR_6->i_df, 0, sizeof(VAR_6->i_df));
 VAR_6->i_flags = 0;
 VAR_6->i_delayed_blks = 0;
 FUNC_9(&VAR_6->i_d, 0, sizeof(VAR_6->i_d));
 VAR_6->i_sick = 0;
 VAR_6->i_checked = 0;
 FUNC_2(&VAR_6->i_ioend_work, VAR_2);
 FUNC_1(&VAR_6->i_ioend_list);
 FUNC_10(&VAR_6->i_ioend_lock);

 return VAR_6;
}
