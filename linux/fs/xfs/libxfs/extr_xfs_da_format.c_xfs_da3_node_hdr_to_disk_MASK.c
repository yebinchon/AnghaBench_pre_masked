
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct xfs_da_intnode {int dummy; } ;
struct TYPE_3__ {void* magic; void* back; void* forw; } ;
struct TYPE_4__ {TYPE_1__ hdr; } ;
struct xfs_da3_node_hdr {void* __level; void* __count; TYPE_2__ info; } ;
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
 struct xfs_da3_node_hdr *VAR_3 = (struct xfs_da3_node_hdr *)VAR_1;

 FUNC_0(VAR_2->magic == VAR_0);
 VAR_3->info.hdr.forw = FUNC_2(VAR_2->forw);
 VAR_3->info.hdr.back = FUNC_2(VAR_2->back);
 VAR_3->info.hdr.magic = FUNC_1(VAR_2->magic);
 VAR_3->__count = FUNC_1(VAR_2->count);
 VAR_3->__level = FUNC_1(VAR_2->level);
}
