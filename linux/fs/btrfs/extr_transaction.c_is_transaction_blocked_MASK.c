
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct btrfs_transaction {scalar_t__ state; int aborted; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static inline int FUNC_0(struct btrfs_transaction *VAR_2)
{
 return (VAR_2->state >= VAR_0 &&
  VAR_2->state < VAR_1 &&
  !VAR_2->aborted);
}
