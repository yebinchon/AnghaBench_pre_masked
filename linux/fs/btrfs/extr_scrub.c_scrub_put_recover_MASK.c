
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scrub_recover {int bbio; int refs; } ;
struct btrfs_fs_info {int dummy; } ;


 int FUNC_0 (struct btrfs_fs_info*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct scrub_recover*) ;
 scalar_t__ FUNC_3 (int *) ;

__attribute__((used)) static inline void FUNC_4(struct btrfs_fs_info *VAR_0,
         struct scrub_recover *VAR_1)
{
 if (FUNC_3(&VAR_1->refs)) {
  FUNC_0(VAR_0);
  FUNC_1(VAR_1->bbio);
  FUNC_2(VAR_1);
 }
}
