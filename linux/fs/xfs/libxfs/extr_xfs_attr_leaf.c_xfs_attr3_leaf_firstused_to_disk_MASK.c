
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct xfs_da_geometry {scalar_t__ blksize; } ;
struct TYPE_2__ {void* firstused; } ;
struct xfs_attr_leafblock {TYPE_1__ hdr; } ;
struct xfs_attr3_leaf_hdr {void* firstused; } ;
struct xfs_attr3_icleaf_hdr {scalar_t__ firstused; scalar_t__ magic; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 void* FUNC_1 (scalar_t__) ;

__attribute__((used)) static void
FUNC_2(
 struct xfs_da_geometry *VAR_3,
 struct xfs_attr_leafblock *VAR_4,
 struct xfs_attr3_icleaf_hdr *VAR_5)
{
 struct xfs_attr3_leaf_hdr *VAR_6;
 uint32_t VAR_7;


 FUNC_0(VAR_5->firstused != VAR_2);






 VAR_7 = VAR_5->firstused;
 if (VAR_7 > VAR_0) {
  FUNC_0(VAR_5->firstused == VAR_3->blksize);
  VAR_7 = VAR_2;
 }

 if (VAR_5->magic == VAR_1) {
  VAR_6 = (struct xfs_attr3_leaf_hdr *) VAR_4;
  VAR_6->firstused = FUNC_1(VAR_7);
 } else {
  VAR_4->hdr.firstused = FUNC_1(VAR_7);
 }
}
