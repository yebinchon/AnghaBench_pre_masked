
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xfs_dir3_icfree_hdr {scalar_t__ magic; void* nused; void* nvalid; void* firstdb; } ;
struct TYPE_2__ {int nused; int nvalid; int firstdb; int magic; } ;
struct xfs_dir2_free {TYPE_1__ hdr; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 void* FUNC_1 (int ) ;

__attribute__((used)) static void
FUNC_2(
 struct xfs_dir3_icfree_hdr *VAR_1,
 struct xfs_dir2_free *VAR_2)
{
 VAR_1->magic = FUNC_1(VAR_2->hdr.magic);
 VAR_1->firstdb = FUNC_1(VAR_2->hdr.firstdb);
 VAR_1->nvalid = FUNC_1(VAR_2->hdr.nvalid);
 VAR_1->nused = FUNC_1(VAR_2->hdr.nused);
 FUNC_0(VAR_1->magic == VAR_0);
}
