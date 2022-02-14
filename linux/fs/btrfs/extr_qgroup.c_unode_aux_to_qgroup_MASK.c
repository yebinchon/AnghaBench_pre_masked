
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ulist_node {scalar_t__ aux; } ;
struct btrfs_qgroup {int dummy; } ;



__attribute__((used)) static inline struct btrfs_qgroup* FUNC_0(struct ulist_node *VAR_0)
{
 return (struct btrfs_qgroup *)(uintptr_t)VAR_0->aux;
}
