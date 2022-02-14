
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct btrfs_fs_info {int balance_wait_q; int * balance_ctl; int balance_cancel_req; int balance_pause_req; int balance_mutex; int balance_lock; } ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct btrfs_fs_info *VAR_0)
{
 FUNC_3(&VAR_0->balance_lock);
 FUNC_2(&VAR_0->balance_mutex);
 FUNC_0(&VAR_0->balance_pause_req, 0);
 FUNC_0(&VAR_0->balance_cancel_req, 0);
 VAR_0->balance_ctl = ((void*)0);
 FUNC_1(&VAR_0->balance_wait_q);
}
