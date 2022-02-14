
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct btrfs_transaction {scalar_t__ state; scalar_t__ aborted; } ;
struct btrfs_fs_info {int transaction_wait; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,int) ;

__attribute__((used)) static void FUNC_1(
     struct btrfs_fs_info *VAR_1,
     struct btrfs_transaction *VAR_2)
{
 FUNC_0(VAR_1->transaction_wait,
     VAR_2->state >= VAR_0 || VAR_2->aborted);
}
