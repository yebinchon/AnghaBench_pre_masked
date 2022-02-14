
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct btrfs_delayed_ref_head {int refs; } ;


 int VAR_0 ;
 int FUNC_0 (int ,struct btrfs_delayed_ref_head*) ;
 scalar_t__ FUNC_1 (int *) ;

__attribute__((used)) static inline void FUNC_2(struct btrfs_delayed_ref_head *VAR_1)
{
 if (FUNC_1(&VAR_1->refs))
  FUNC_0(VAR_0, VAR_1);
}
