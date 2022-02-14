
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ magic; } ;
struct TYPE_5__ {TYPE_4__ info; } ;
struct xfs_da_intnode {TYPE_1__ hdr; } ;
struct TYPE_6__ {int magic; int back; int forw; } ;
struct TYPE_7__ {TYPE_2__ hdr; } ;
struct xfs_da3_node_hdr {int __level; int __count; TYPE_3__ info; } ;
struct xfs_da3_icnode_hdr {void* level; void* count; void* magic; void* back; void* forw; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 void* FUNC_1 (int ) ;
 void* FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;

__attribute__((used)) static void
FUNC_4(
 struct xfs_da3_icnode_hdr *VAR_1,
 struct xfs_da_intnode *VAR_2)
{
 struct xfs_da3_node_hdr *VAR_3 = (struct xfs_da3_node_hdr *)VAR_2;

 FUNC_0(VAR_2->hdr.info.magic == FUNC_3(VAR_0));
 VAR_1->forw = FUNC_2(VAR_3->info.hdr.forw);
 VAR_1->back = FUNC_2(VAR_3->info.hdr.back);
 VAR_1->magic = FUNC_1(VAR_3->info.hdr.magic);
 VAR_1->count = FUNC_1(VAR_3->__count);
 VAR_1->level = FUNC_1(VAR_3->__level);
}
