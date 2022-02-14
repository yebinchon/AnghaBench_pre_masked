
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nfs_server {int wsize; TYPE_1__* pnfs_curr_ld; } ;
struct nfs_pgio_completion_ops {int dummy; } ;
struct nfs_pageio_ops {int dummy; } ;
struct nfs_pageio_descriptor {int dummy; } ;
struct inode {int dummy; } ;
struct TYPE_2__ {struct nfs_pageio_ops* pg_write_ops; } ;


 struct nfs_server* FUNC_0 (struct inode*) ;
 int FUNC_1 (struct nfs_pageio_descriptor*,struct inode*,struct nfs_pageio_ops const*,struct nfs_pgio_completion_ops const*,int *,int ,int) ;
 struct nfs_pageio_ops VAR_0 ;
 int VAR_1 ;

void FUNC_2(struct nfs_pageio_descriptor *VAR_2,
          struct inode *VAR_3, int VAR_4, bool VAR_5,
          const struct nfs_pgio_completion_ops *VAR_6)
{
 struct nfs_server *VAR_7 = FUNC_0(VAR_3);
 const struct nfs_pageio_ops *VAR_8 = &VAR_0;





 FUNC_1(VAR_2, VAR_3, VAR_8, VAR_6, &VAR_1,
   VAR_7->wsize, VAR_4);
}
