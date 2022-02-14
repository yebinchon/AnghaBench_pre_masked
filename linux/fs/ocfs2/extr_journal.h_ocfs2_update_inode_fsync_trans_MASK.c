
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct ocfs2_inode_info {int i_datasync_tid; int i_sync_tid; } ;
struct inode {int dummy; } ;
struct TYPE_5__ {TYPE_1__* h_transaction; } ;
typedef TYPE_2__ handle_t ;
struct TYPE_4__ {int t_tid; } ;


 struct ocfs2_inode_info* FUNC_0 (struct inode*) ;

__attribute__((used)) static inline void FUNC_1(handle_t *VAR_0,
        struct inode *VAR_1,
        int VAR_2)
{
 struct ocfs2_inode_info *VAR_3 = FUNC_0(VAR_1);

 VAR_3->i_sync_tid = VAR_0->h_transaction->t_tid;
 if (VAR_2)
  VAR_3->i_datasync_tid = VAR_0->h_transaction->t_tid;
}
