
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ magic; } ;
struct TYPE_4__ {TYPE_1__ info; } ;
struct xfs_attr_leafblock {TYPE_2__ hdr; } ;
struct xfs_attr_leaf_hdr {int dummy; } ;
struct xfs_attr3_leaf_hdr {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;

__attribute__((used)) static inline int
FUNC_1(struct xfs_attr_leafblock *VAR_1)
{
 if (VAR_1->hdr.info.magic == FUNC_0(VAR_0))
  return sizeof(struct xfs_attr3_leaf_hdr);
 return sizeof(struct xfs_attr_leaf_hdr);
}
