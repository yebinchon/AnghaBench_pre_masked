
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kobject {int dummy; } ;
struct btrfs_space_info {int total_bytes_pinned; } ;


 int FUNC_0 (struct btrfs_space_info*) ;
 int FUNC_1 (int *) ;
 struct btrfs_space_info* FUNC_2 (struct kobject*) ;

__attribute__((used)) static void FUNC_3(struct kobject *VAR_0)
{
 struct btrfs_space_info *VAR_1 = FUNC_2(VAR_0);
 FUNC_1(&VAR_1->total_bytes_pinned);
 FUNC_0(VAR_1);
}
