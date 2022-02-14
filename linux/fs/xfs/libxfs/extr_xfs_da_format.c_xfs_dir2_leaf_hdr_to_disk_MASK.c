
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct xfs_dir3_icleaf_hdr {scalar_t__ magic; scalar_t__ count; scalar_t__ stale; int back; int forw; } ;
struct TYPE_3__ {void* magic; void* back; void* forw; } ;
struct TYPE_4__ {void* stale; void* count; TYPE_1__ info; } ;
struct xfs_dir2_leaf {TYPE_2__ hdr; } ;


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
 FUNC_0(VAR_3->magic == VAR_0 ||
        VAR_3->magic == VAR_1);

 VAR_2->hdr.info.forw = FUNC_2(VAR_3->forw);
 VAR_2->hdr.info.back = FUNC_2(VAR_3->back);
 VAR_2->hdr.info.magic = FUNC_1(VAR_3->magic);
 VAR_2->hdr.count = FUNC_1(VAR_3->count);
 VAR_2->hdr.stale = FUNC_1(VAR_3->stale);
}
