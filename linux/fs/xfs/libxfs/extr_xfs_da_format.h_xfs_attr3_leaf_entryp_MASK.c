
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ magic; } ;
struct TYPE_6__ {TYPE_1__ info; } ;
struct TYPE_7__ {struct xfs_attr_leaf_entry* entries; TYPE_2__ hdr; } ;
typedef TYPE_3__ xfs_attr_leafblock_t ;
struct xfs_attr_leaf_entry {int dummy; } ;
struct xfs_attr3_leafblock {struct xfs_attr_leaf_entry* entries; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;

__attribute__((used)) static inline struct xfs_attr_leaf_entry *
FUNC_1(xfs_attr_leafblock_t *VAR_1)
{
 if (VAR_1->hdr.info.magic == FUNC_0(VAR_0))
  return &((struct xfs_attr3_leafblock *)VAR_1)->entries[0];
 return &VAR_1->entries[0];
}
