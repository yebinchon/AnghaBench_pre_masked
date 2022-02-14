
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct xfs_da_geometry {int dummy; } ;
struct TYPE_11__ {void* magic; void* back; void* forw; } ;
struct TYPE_13__ {TYPE_5__* freemap; scalar_t__ pad1; int holes; void* usedbytes; void* count; TYPE_4__ info; } ;
struct xfs_attr_leafblock {TYPE_6__ hdr; } ;
struct TYPE_8__ {void* magic; void* back; void* forw; } ;
struct TYPE_9__ {TYPE_1__ hdr; } ;
struct xfs_attr3_leaf_hdr {TYPE_3__* freemap; scalar_t__ pad1; int holes; void* usedbytes; void* count; TYPE_2__ info; } ;
struct xfs_attr3_icleaf_hdr {scalar_t__ magic; scalar_t__ count; scalar_t__ usedbytes; TYPE_7__* freemap; int holes; int back; int forw; } ;
struct TYPE_14__ {scalar_t__ base; scalar_t__ size; } ;
struct TYPE_12__ {void* size; void* base; } ;
struct TYPE_10__ {void* size; void* base; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 void* FUNC_1 (scalar_t__) ;
 void* FUNC_2 (int ) ;
 int FUNC_3 (struct xfs_da_geometry*,struct xfs_attr_leafblock*,struct xfs_attr3_icleaf_hdr*) ;

void
FUNC_4(
 struct xfs_da_geometry *VAR_3,
 struct xfs_attr_leafblock *VAR_4,
 struct xfs_attr3_icleaf_hdr *VAR_5)
{
 int VAR_6;

 FUNC_0(VAR_5->magic == VAR_1 ||
        VAR_5->magic == VAR_0);

 if (VAR_5->magic == VAR_0) {
  struct xfs_attr3_leaf_hdr *VAR_7 = (struct xfs_attr3_leaf_hdr *)VAR_4;

  VAR_7->info.hdr.forw = FUNC_2(VAR_5->forw);
  VAR_7->info.hdr.back = FUNC_2(VAR_5->back);
  VAR_7->info.hdr.magic = FUNC_1(VAR_5->magic);
  VAR_7->count = FUNC_1(VAR_5->count);
  VAR_7->usedbytes = FUNC_1(VAR_5->usedbytes);
  FUNC_3(VAR_3, VAR_4, VAR_5);
  VAR_7->holes = VAR_5->holes;
  VAR_7->pad1 = 0;

  for (VAR_6 = 0; VAR_6 < VAR_2; VAR_6++) {
   VAR_7->freemap[VAR_6].base = FUNC_1(VAR_5->freemap[VAR_6].base);
   VAR_7->freemap[VAR_6].size = FUNC_1(VAR_5->freemap[VAR_6].size);
  }
  return;
 }
 VAR_4->hdr.info.forw = FUNC_2(VAR_5->forw);
 VAR_4->hdr.info.back = FUNC_2(VAR_5->back);
 VAR_4->hdr.info.magic = FUNC_1(VAR_5->magic);
 VAR_4->hdr.count = FUNC_1(VAR_5->count);
 VAR_4->hdr.usedbytes = FUNC_1(VAR_5->usedbytes);
 FUNC_3(VAR_3, VAR_4, VAR_5);
 VAR_4->hdr.holes = VAR_5->holes;
 VAR_4->hdr.pad1 = 0;

 for (VAR_6 = 0; VAR_6 < VAR_2; VAR_6++) {
  VAR_4->hdr.freemap[VAR_6].base = FUNC_1(VAR_5->freemap[VAR_6].base);
  VAR_4->hdr.freemap[VAR_6].size = FUNC_1(VAR_5->freemap[VAR_6].size);
 }
}
