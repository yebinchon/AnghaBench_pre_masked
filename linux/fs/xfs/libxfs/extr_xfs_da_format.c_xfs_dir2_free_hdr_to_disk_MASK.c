
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xfs_dir3_icfree_hdr {scalar_t__ magic; scalar_t__ firstdb; scalar_t__ nvalid; scalar_t__ nused; } ;
struct TYPE_2__ {void* nused; void* nvalid; void* firstdb; void* magic; } ;
struct xfs_dir2_free {TYPE_1__ hdr; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 void* FUNC_1 (scalar_t__) ;

__attribute__((used)) static void
FUNC_2(
 struct xfs_dir2_free *VAR_1,
 struct xfs_dir3_icfree_hdr *VAR_2)
{
 FUNC_0(VAR_2->magic == VAR_0);

 VAR_1->hdr.magic = FUNC_1(VAR_2->magic);
 VAR_1->hdr.firstdb = FUNC_1(VAR_2->firstdb);
 VAR_1->hdr.nvalid = FUNC_1(VAR_2->nvalid);
 VAR_1->hdr.nused = FUNC_1(VAR_2->nused);
}
