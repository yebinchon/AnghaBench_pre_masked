
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct btrfs_qgroup {scalar_t__ new_refcnt; } ;



__attribute__((used)) static void FUNC_0(struct btrfs_qgroup *VAR_0, u64 VAR_1,
        int VAR_2)
{
 if (VAR_0->new_refcnt < VAR_1)
  VAR_0->new_refcnt = VAR_1;
 VAR_0->new_refcnt += VAR_2;
}
