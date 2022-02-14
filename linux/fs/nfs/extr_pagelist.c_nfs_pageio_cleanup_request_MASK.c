
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nfs_pageio_descriptor {int pg_error; TYPE_1__* pg_completion_ops; } ;
struct nfs_page {int dummy; } ;
struct TYPE_2__ {int (* error_cleanup ) (int *,int ) ;} ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (struct nfs_page*,int *) ;
 int FUNC_2 (int *,int ) ;

__attribute__((used)) static void
FUNC_3(struct nfs_pageio_descriptor *VAR_1,
  struct nfs_page *VAR_2)
{
 FUNC_0(VAR_0);

 FUNC_1(VAR_2, &VAR_0);
 VAR_1->pg_completion_ops->error_cleanup(&VAR_0, VAR_1->pg_error);
}
