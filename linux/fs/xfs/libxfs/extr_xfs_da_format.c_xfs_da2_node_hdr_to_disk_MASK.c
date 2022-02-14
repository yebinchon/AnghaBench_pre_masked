
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {void* magic; void* back; void* forw; } ;
struct TYPE_4__ {void* __level; void* __count; TYPE_1__ info; } ;
struct xfs_da_intnode {TYPE_2__ hdr; } ;
struct xfs_da3_icnode_hdr {scalar_t__ magic; scalar_t__ count; scalar_t__ level; int back; int forw; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 void* FUNC_1 (scalar_t__) ;
 void* FUNC_2 (int ) ;

__attribute__((used)) static void
FUNC_3(
 struct xfs_da_intnode *VAR_1,
 struct xfs_da3_icnode_hdr *VAR_2)
{
 FUNC_0(VAR_2->magic == VAR_0);
 VAR_1->hdr.info.forw = FUNC_2(VAR_2->forw);
 VAR_1->hdr.info.back = FUNC_2(VAR_2->back);
 VAR_1->hdr.info.magic = FUNC_1(VAR_2->magic);
 VAR_1->hdr.__count = FUNC_1(VAR_2->count);
 VAR_1->hdr.__level = FUNC_1(VAR_2->level);
}
