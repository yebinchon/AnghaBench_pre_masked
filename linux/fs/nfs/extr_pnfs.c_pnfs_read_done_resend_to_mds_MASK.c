
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfs_pgio_header {int completion_ops; int inode; } ;
struct nfs_pageio_descriptor {int dummy; } ;


 int FUNC_0 (struct nfs_pageio_descriptor*,int ,int,int ) ;
 int FUNC_1 (struct nfs_pageio_descriptor*,struct nfs_pgio_header*) ;

int FUNC_2(struct nfs_pgio_header *VAR_0)
{
 struct nfs_pageio_descriptor VAR_1;


 FUNC_0(&VAR_1, VAR_0->inode, 1, VAR_0->completion_ops);
 return FUNC_1(&VAR_1, VAR_0);
}
