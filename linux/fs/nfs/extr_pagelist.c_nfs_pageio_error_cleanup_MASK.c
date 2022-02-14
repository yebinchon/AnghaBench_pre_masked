
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u32 ;
struct nfs_pgio_mirror {int pg_list; } ;
struct nfs_pageio_descriptor {size_t pg_mirror_count; int pg_error; TYPE_1__* pg_completion_ops; struct nfs_pgio_mirror* pg_mirrors; } ;
struct TYPE_2__ {int (* error_cleanup ) (int *,int ) ;} ;


 int FUNC_0 (int *,int ) ;

__attribute__((used)) static void FUNC_1(struct nfs_pageio_descriptor *VAR_0)
{
 u32 VAR_1;
 struct nfs_pgio_mirror *VAR_2;

 if (!VAR_0->pg_error)
  return;

 for (VAR_1 = 0; VAR_1 < VAR_0->pg_mirror_count; VAR_1++) {
  VAR_2 = &VAR_0->pg_mirrors[VAR_1];
  VAR_0->pg_completion_ops->error_cleanup(&VAR_2->pg_list,
    VAR_0->pg_error);
 }
}
