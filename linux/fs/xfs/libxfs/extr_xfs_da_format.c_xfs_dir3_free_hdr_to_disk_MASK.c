
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xfs_dir3_icfree_hdr {scalar_t__ magic; scalar_t__ firstdb; scalar_t__ nvalid; scalar_t__ nused; } ;
struct TYPE_2__ {void* magic; } ;
struct xfs_dir3_free_hdr {void* nused; void* nvalid; void* firstdb; TYPE_1__ hdr; } ;
struct xfs_dir2_free {int dummy; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 void* FUNC_1 (scalar_t__) ;

__attribute__((used)) static void
FUNC_2(
 struct xfs_dir2_free *VAR_1,
 struct xfs_dir3_icfree_hdr *VAR_2)
{
 struct xfs_dir3_free_hdr *VAR_3 = (struct xfs_dir3_free_hdr *)VAR_1;

 FUNC_0(VAR_2->magic == VAR_0);

 VAR_3->hdr.magic = FUNC_1(VAR_2->magic);
 VAR_3->firstdb = FUNC_1(VAR_2->firstdb);
 VAR_3->nvalid = FUNC_1(VAR_2->nvalid);
 VAR_3->nused = FUNC_1(VAR_2->nused);
}
