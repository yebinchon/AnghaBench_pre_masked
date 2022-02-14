
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct xfs_da_geometry {scalar_t__ blksize; } ;
struct TYPE_3__ {scalar_t__ magic; } ;
struct TYPE_4__ {int firstused; TYPE_1__ info; } ;
struct xfs_attr_leafblock {TYPE_2__ hdr; } ;
struct xfs_attr3_leaf_hdr {int firstused; } ;
struct xfs_attr3_icleaf_hdr {scalar_t__ firstused; int usedbytes; int count; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 void* FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;

__attribute__((used)) static void
FUNC_3(
 struct xfs_da_geometry *VAR_3,
 struct xfs_attr3_icleaf_hdr *VAR_4,
 struct xfs_attr_leafblock *VAR_5)
{
 struct xfs_attr3_leaf_hdr *VAR_6;

 if (VAR_5->hdr.info.magic == FUNC_2(VAR_1)) {
  VAR_6 = (struct xfs_attr3_leaf_hdr *) VAR_5;
  VAR_4->firstused = FUNC_1(VAR_6->firstused);
 } else {
  VAR_4->firstused = FUNC_1(VAR_5->hdr.firstused);
 }






 if (VAR_4->firstused == VAR_2) {
  FUNC_0(!VAR_4->count && !VAR_4->usedbytes);
  FUNC_0(VAR_3->blksize > VAR_0);
  VAR_4->firstused = VAR_3->blksize;
 }
}
