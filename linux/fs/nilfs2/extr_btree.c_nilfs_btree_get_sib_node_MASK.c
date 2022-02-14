
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nilfs_btree_path {TYPE_1__* bp_sib_bh; } ;
struct nilfs_btree_node {int dummy; } ;
struct TYPE_2__ {scalar_t__ b_data; } ;



__attribute__((used)) static struct nilfs_btree_node *
FUNC_0(const struct nilfs_btree_path *VAR_0, int VAR_1)
{
 return (struct nilfs_btree_node *)VAR_0[VAR_1].bp_sib_bh->b_data;
}
