
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct nfs_pageio_descriptor {scalar_t__ pg_mirror_count; scalar_t__ pg_error; TYPE_1__* pg_ops; } ;
struct TYPE_2__ {int (* pg_cleanup ) (struct nfs_pageio_descriptor*) ;} ;


 int FUNC_0 (struct nfs_pageio_descriptor*) ;
 int FUNC_1 (struct nfs_pageio_descriptor*,scalar_t__) ;
 int FUNC_2 (struct nfs_pageio_descriptor*) ;
 int FUNC_3 (struct nfs_pageio_descriptor*) ;

void FUNC_4(struct nfs_pageio_descriptor *VAR_0)
{
 u32 VAR_1;

 for (VAR_1 = 0; VAR_1 < VAR_0->pg_mirror_count; VAR_1++)
  FUNC_1(VAR_0, VAR_1);

 if (VAR_0->pg_error < 0)
  FUNC_2(VAR_0);
 if (VAR_0->pg_ops->pg_cleanup)
  VAR_0->pg_ops->pg_cleanup(VAR_0);
 FUNC_0(VAR_0);
}
