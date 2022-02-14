
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ count; scalar_t__ offset; } ;
struct nfs_pgio_header {TYPE_2__ args; TYPE_1__* inode; int pages; } ;
struct TYPE_3__ {int i_mapping; } ;


 int FUNC_0 (int ,scalar_t__,scalar_t__) ;
 int FUNC_1 (int *,int ) ;

__attribute__((used)) static void FUNC_2(struct nfs_pgio_header *VAR_0)
{
 FUNC_1(&VAR_0->pages, 0);
 FUNC_0(VAR_0->inode->i_mapping, VAR_0->args.offset,
   VAR_0->args.offset + VAR_0->args.count - 1);
}
