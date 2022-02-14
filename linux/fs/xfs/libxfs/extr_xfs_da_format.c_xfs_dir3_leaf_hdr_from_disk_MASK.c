
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int magic; int back; int forw; } ;
struct TYPE_4__ {TYPE_1__ hdr; } ;
struct xfs_dir3_leaf_hdr {int stale; int count; TYPE_2__ info; } ;
struct xfs_dir3_icleaf_hdr {void* magic; void* stale; void* count; void* back; void* forw; } ;
struct xfs_dir2_leaf {int dummy; } ;


 int FUNC_0 (int) ;
 void* VAR_0 ;
 void* VAR_1 ;
 void* FUNC_1 (int ) ;
 void* FUNC_2 (int ) ;

__attribute__((used)) static void
FUNC_3(
 struct xfs_dir3_icleaf_hdr *VAR_2,
 struct xfs_dir2_leaf *VAR_3)
{
 struct xfs_dir3_leaf_hdr *VAR_4 = (struct xfs_dir3_leaf_hdr *)VAR_3;

 VAR_2->forw = FUNC_2(VAR_4->info.hdr.forw);
 VAR_2->back = FUNC_2(VAR_4->info.hdr.back);
 VAR_2->magic = FUNC_1(VAR_4->info.hdr.magic);
 VAR_2->count = FUNC_1(VAR_4->count);
 VAR_2->stale = FUNC_1(VAR_4->stale);

 FUNC_0(VAR_2->magic == VAR_0 ||
        VAR_2->magic == VAR_1);
}
