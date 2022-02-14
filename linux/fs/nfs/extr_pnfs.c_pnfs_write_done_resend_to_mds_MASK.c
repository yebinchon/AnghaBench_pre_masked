
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* context; } ;
struct nfs_pgio_header {TYPE_2__ args; int completion_ops; int inode; } ;
struct nfs_pageio_descriptor {int dummy; } ;
struct TYPE_3__ {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct nfs_pageio_descriptor*,int ,int ,int,int ) ;
 int FUNC_1 (struct nfs_pageio_descriptor*,struct nfs_pgio_header*) ;
 int FUNC_2 (int ,int *) ;

int FUNC_3(struct nfs_pgio_header *VAR_2)
{
 struct nfs_pageio_descriptor VAR_3;


 FUNC_0(&VAR_3, VAR_2->inode, VAR_0, 1,
         VAR_2->completion_ops);
 FUNC_2(VAR_1, &VAR_2->args.context->flags);
 return FUNC_1(&VAR_3, VAR_2);
}
