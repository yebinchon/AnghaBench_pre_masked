
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct inode {int dummy; } ;
struct btrfs_trans_handle {TYPE_1__* transaction; } ;
struct TYPE_6__ {int lock; TYPE_2__* root; int last_log_commit; int last_sub_trans; int last_trans; } ;
struct TYPE_5__ {int last_log_commit; int log_transid; } ;
struct TYPE_4__ {int transid; } ;


 TYPE_3__* FUNC_0 (struct inode*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static inline void FUNC_3(struct btrfs_trans_handle *VAR_0,
           struct inode *VAR_1)
{
 FUNC_1(&FUNC_0(VAR_1)->lock);
 FUNC_0(VAR_1)->last_trans = VAR_0->transaction->transid;
 FUNC_0(VAR_1)->last_sub_trans = FUNC_0(VAR_1)->root->log_transid;
 FUNC_0(VAR_1)->last_log_commit = FUNC_0(VAR_1)->root->last_log_commit;
 FUNC_2(&FUNC_0(VAR_1)->lock);
}
