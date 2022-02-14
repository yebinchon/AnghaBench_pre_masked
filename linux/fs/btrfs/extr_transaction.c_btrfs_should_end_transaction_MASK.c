
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ flushing; } ;
struct btrfs_transaction {scalar_t__ state; TYPE_1__ delayed_refs; } ;
struct btrfs_trans_handle {struct btrfs_transaction* transaction; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct btrfs_trans_handle*) ;
 int FUNC_1 () ;

int FUNC_2(struct btrfs_trans_handle *VAR_1)
{
 struct btrfs_transaction *VAR_2 = VAR_1->transaction;

 FUNC_1();
 if (VAR_2->state >= VAR_0 ||
     VAR_2->delayed_refs.flushing)
  return 1;

 return FUNC_0(VAR_1);
}
