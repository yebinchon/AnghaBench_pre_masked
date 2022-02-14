
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ magic; int back; int forw; } ;
struct TYPE_4__ {scalar_t__ __count; scalar_t__ __level; TYPE_1__ info; } ;
struct xfs_da_intnode {TYPE_2__ hdr; } ;
struct xfs_da3_icnode_hdr {void* level; void* count; void* magic; void* back; void* forw; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 void* FUNC_1 (scalar_t__) ;
 void* FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;

__attribute__((used)) static void
FUNC_4(
 struct xfs_da3_icnode_hdr *VAR_1,
 struct xfs_da_intnode *VAR_2)
{
 FUNC_0(VAR_2->hdr.info.magic == FUNC_3(VAR_0));
 VAR_1->forw = FUNC_2(VAR_2->hdr.info.forw);
 VAR_1->back = FUNC_2(VAR_2->hdr.info.back);
 VAR_1->magic = FUNC_1(VAR_2->hdr.info.magic);
 VAR_1->count = FUNC_1(VAR_2->hdr.__count);
 VAR_1->level = FUNC_1(VAR_2->hdr.__level);
}
