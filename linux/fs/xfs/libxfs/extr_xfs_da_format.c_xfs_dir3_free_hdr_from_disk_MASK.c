
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xfs_dir3_icfree_hdr {void* magic; void* nused; void* nvalid; void* firstdb; } ;
struct TYPE_2__ {int magic; } ;
struct xfs_dir3_free_hdr {int nused; int nvalid; int firstdb; TYPE_1__ hdr; } ;
struct xfs_dir2_free {int dummy; } ;


 int FUNC_0 (int) ;
 void* VAR_0 ;
 void* FUNC_1 (int ) ;

__attribute__((used)) static void
FUNC_2(
 struct xfs_dir3_icfree_hdr *VAR_1,
 struct xfs_dir2_free *VAR_2)
{
 struct xfs_dir3_free_hdr *VAR_3 = (struct xfs_dir3_free_hdr *)VAR_2;

 VAR_1->magic = FUNC_1(VAR_3->hdr.magic);
 VAR_1->firstdb = FUNC_1(VAR_3->firstdb);
 VAR_1->nvalid = FUNC_1(VAR_3->nvalid);
 VAR_1->nused = FUNC_1(VAR_3->nused);

 FUNC_0(VAR_1->magic == VAR_0);
}
