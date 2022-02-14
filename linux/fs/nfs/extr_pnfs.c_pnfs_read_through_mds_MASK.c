
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nfs_pgio_mirror {int pg_recoalesce; int pg_list; } ;
struct nfs_pgio_header {TYPE_1__* completion_ops; int pages; int flags; } ;
struct nfs_pageio_descriptor {int dummy; } ;
struct TYPE_2__ {int (* completion ) (struct nfs_pgio_header*) ;} ;


 int VAR_0 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (struct nfs_pageio_descriptor*) ;
 struct nfs_pgio_mirror* FUNC_2 (struct nfs_pageio_descriptor*) ;
 int FUNC_3 (struct nfs_pgio_header*) ;
 int FUNC_4 (int ,int *) ;

__attribute__((used)) static void
FUNC_5(struct nfs_pageio_descriptor *VAR_1,
  struct nfs_pgio_header *VAR_2)
{
 struct nfs_pgio_mirror *VAR_3 = FUNC_2(VAR_1);

 if (!FUNC_4(VAR_0, &VAR_2->flags)) {
  FUNC_0(&VAR_2->pages, &VAR_3->pg_list);
  FUNC_1(VAR_1);
  VAR_3->pg_recoalesce = 1;
 }
 VAR_2->completion_ops->completion(VAR_2);
}
