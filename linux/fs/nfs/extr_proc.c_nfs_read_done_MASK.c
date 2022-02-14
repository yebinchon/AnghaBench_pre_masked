
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct rpc_task {scalar_t__ tk_status; } ;
struct TYPE_5__ {scalar_t__ count; int eof; TYPE_3__* fattr; } ;
struct TYPE_4__ {scalar_t__ count; scalar_t__ offset; } ;
struct nfs_pgio_header {TYPE_2__ res; TYPE_1__ args; struct inode* inode; } ;
struct inode {int dummy; } ;
struct TYPE_6__ {scalar_t__ size; } ;


 int FUNC_0 (struct inode*) ;
 int FUNC_1 (struct inode*,TYPE_3__*) ;

__attribute__((used)) static int FUNC_2(struct rpc_task *VAR_0, struct nfs_pgio_header *VAR_1)
{
 struct inode *VAR_2 = VAR_1->inode;

 FUNC_0(VAR_2);
 if (VAR_0->tk_status >= 0) {
  FUNC_1(VAR_2, VAR_1->res.fattr);



  if ((VAR_1->res.count == 0 && VAR_1->args.count > 0) ||
      VAR_1->args.offset + VAR_1->res.count >= VAR_1->res.fattr->size)
   VAR_1->res.eof = 1;
 }
 return 0;
}
