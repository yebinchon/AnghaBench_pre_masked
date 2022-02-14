
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nfs_server {int rsize; TYPE_1__* pnfs_curr_ld; } ;
struct nfs_pgio_completion_ops {int dummy; } ;
struct nfs_pageio_ops {int dummy; } ;
struct nfs_pageio_descriptor {int dummy; } ;
struct inode {int dummy; } ;
struct TYPE_2__ {struct nfs_pageio_ops* pg_read_ops; } ;


 struct nfs_server* FUNC_0 (struct inode*) ;
 int FUNC_1 (struct nfs_pageio_descriptor*,struct inode*,struct nfs_pageio_ops const*,struct nfs_pgio_completion_ops const*,int *,int ,int ) ;
 struct nfs_pageio_ops VAR_0 ;
 int VAR_1 ;

void FUNC_2(struct nfs_pageio_descriptor *VAR_2,
         struct inode *VAR_3, bool VAR_4,
         const struct nfs_pgio_completion_ops *VAR_5)
{
 struct nfs_server *VAR_6 = FUNC_0(VAR_3);
 const struct nfs_pageio_ops *VAR_7 = &VAR_0;





 FUNC_1(VAR_2, VAR_3, VAR_7, VAR_5, &VAR_1,
   VAR_6->rsize, 0);
}
