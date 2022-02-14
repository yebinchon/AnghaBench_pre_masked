
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
struct TYPE_11__ {scalar_t__ magic; int back; int forw; } ;
struct TYPE_14__ {scalar_t__ count; scalar_t__ usedbytes; TYPE_6__* freemap; int holes; TYPE_4__ info; } ;
struct xfs_attr_leafblock {TYPE_7__ hdr; } ;
struct TYPE_8__ {scalar_t__ magic; int back; int forw; } ;
struct TYPE_9__ {TYPE_1__ hdr; } ;
struct xfs_attr3_leaf_hdr {scalar_t__ count; scalar_t__ usedbytes; TYPE_3__* freemap; int holes; TYPE_2__ info; } ;
struct xfs_attr3_icleaf_hdr {TYPE_5__* freemap; int holes; void* usedbytes; void* count; void* magic; void* back; void* forw; } ;
struct TYPE_13__ {scalar_t__ base; scalar_t__ size; } ;
struct TYPE_12__ {void* size; void* base; } ;
struct TYPE_10__ {scalar_t__ base; scalar_t__ size; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_1 (scalar_t__) ;
 void* FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (struct xfs_da_geometry*,struct xfs_attr3_icleaf_hdr*,struct xfs_attr_leafblock*) ;

void
FUNC_5(
 struct xfs_da_geometry *VAR_3,
 struct xfs_attr3_icleaf_hdr *VAR_4,
 struct xfs_attr_leafblock *VAR_5)
{
 int VAR_6;

 FUNC_0(VAR_5->hdr.info.magic == FUNC_3(VAR_1) ||
        VAR_5->hdr.info.magic == FUNC_3(VAR_0));

 if (VAR_5->hdr.info.magic == FUNC_3(VAR_0)) {
  struct xfs_attr3_leaf_hdr *VAR_7 = (struct xfs_attr3_leaf_hdr *)VAR_5;

  VAR_4->forw = FUNC_2(VAR_7->info.hdr.forw);
  VAR_4->back = FUNC_2(VAR_7->info.hdr.back);
  VAR_4->magic = FUNC_1(VAR_7->info.hdr.magic);
  VAR_4->count = FUNC_1(VAR_7->count);
  VAR_4->usedbytes = FUNC_1(VAR_7->usedbytes);
  FUNC_4(VAR_3, VAR_4, VAR_5);
  VAR_4->holes = VAR_7->holes;

  for (VAR_6 = 0; VAR_6 < VAR_2; VAR_6++) {
   VAR_4->freemap[VAR_6].base = FUNC_1(VAR_7->freemap[VAR_6].base);
   VAR_4->freemap[VAR_6].size = FUNC_1(VAR_7->freemap[VAR_6].size);
  }
  return;
 }
 VAR_4->forw = FUNC_2(VAR_5->hdr.info.forw);
 VAR_4->back = FUNC_2(VAR_5->hdr.info.back);
 VAR_4->magic = FUNC_1(VAR_5->hdr.info.magic);
 VAR_4->count = FUNC_1(VAR_5->hdr.count);
 VAR_4->usedbytes = FUNC_1(VAR_5->hdr.usedbytes);
 FUNC_4(VAR_3, VAR_4, VAR_5);
 VAR_4->holes = VAR_5->hdr.holes;

 for (VAR_6 = 0; VAR_6 < VAR_2; VAR_6++) {
  VAR_4->freemap[VAR_6].base = FUNC_1(VAR_5->hdr.freemap[VAR_6].base);
  VAR_4->freemap[VAR_6].size = FUNC_1(VAR_5->hdr.freemap[VAR_6].size);
 }
}
