
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct xfs_dir3_icleaf_hdr {scalar_t__ magic; void* stale; void* count; void* back; void* forw; } ;
struct TYPE_4__ {int magic; int back; int forw; } ;
struct TYPE_3__ {int stale; int count; TYPE_2__ info; } ;
struct xfs_dir2_leaf {TYPE_1__ hdr; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 void* FUNC_1 (int ) ;
 void* FUNC_2 (int ) ;

__attribute__((used)) static void
FUNC_3(
 struct xfs_dir3_icleaf_hdr *VAR_2,
 struct xfs_dir2_leaf *VAR_3)
{
 VAR_2->forw = FUNC_2(VAR_3->hdr.info.forw);
 VAR_2->back = FUNC_2(VAR_3->hdr.info.back);
 VAR_2->magic = FUNC_1(VAR_3->hdr.info.magic);
 VAR_2->count = FUNC_1(VAR_3->hdr.count);
 VAR_2->stale = FUNC_1(VAR_3->hdr.stale);

 FUNC_0(VAR_2->magic == VAR_0 ||
        VAR_2->magic == VAR_1);
}
