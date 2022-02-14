
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {void* magic; void* back; void* forw; } ;
struct TYPE_4__ {TYPE_1__ hdr; } ;
struct xfs_dir3_leaf_hdr {void* stale; void* count; TYPE_2__ info; } ;
struct xfs_dir3_icleaf_hdr {scalar_t__ magic; scalar_t__ count; scalar_t__ stale; int back; int forw; } ;
struct xfs_dir2_leaf {int dummy; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 void* FUNC_1 (scalar_t__) ;
 void* FUNC_2 (int ) ;

__attribute__((used)) static void
FUNC_3(
 struct xfs_dir2_leaf *VAR_2,
 struct xfs_dir3_icleaf_hdr *VAR_3)
{
 struct xfs_dir3_leaf_hdr *VAR_4 = (struct xfs_dir3_leaf_hdr *)VAR_2;

 FUNC_0(VAR_3->magic == VAR_0 ||
        VAR_3->magic == VAR_1);

 VAR_4->info.hdr.forw = FUNC_2(VAR_3->forw);
 VAR_4->info.hdr.back = FUNC_2(VAR_3->back);
 VAR_4->info.hdr.magic = FUNC_1(VAR_3->magic);
 VAR_4->count = FUNC_1(VAR_3->count);
 VAR_4->stale = FUNC_1(VAR_3->stale);
}
