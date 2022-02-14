
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct nfs_pgio_mirror {int pg_bsize; } ;
struct nfs_pageio_descriptor {int pg_inode; struct nfs_pgio_mirror* pg_mirrors; TYPE_1__* pg_ops; } ;
struct TYPE_4__ {int wsize; } ;
struct TYPE_3__ {int (* pg_cleanup ) (struct nfs_pageio_descriptor*) ;} ;


 TYPE_2__* FUNC_0 (int ) ;
 int FUNC_1 (struct nfs_pageio_descriptor*) ;
 TYPE_1__ VAR_0 ;
 int FUNC_2 (struct nfs_pageio_descriptor*) ;

void FUNC_3(struct nfs_pageio_descriptor *VAR_1)
{
 struct nfs_pgio_mirror *VAR_2;

 if (VAR_1->pg_ops && VAR_1->pg_ops->pg_cleanup)
  VAR_1->pg_ops->pg_cleanup(VAR_1);

 VAR_1->pg_ops = &VAR_0;

 FUNC_1(VAR_1);

 VAR_2 = &VAR_1->pg_mirrors[0];
 VAR_2->pg_bsize = FUNC_0(VAR_1->pg_inode)->wsize;
}
