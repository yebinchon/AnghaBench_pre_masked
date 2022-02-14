
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rpc_call_ops {int dummy; } ;
struct pnfs_layout_segment {int dummy; } ;
struct nfs_pgio_mirror {int pg_recoalesce; int pg_list; } ;
struct nfs_pgio_header {TYPE_1__* mds_ops; int pages; int flags; } ;
struct nfs_pageio_descriptor {struct pnfs_layout_segment* pg_lseg; struct rpc_call_ops* pg_rpc_callops; } ;
typedef enum pnfs_try_status { ____Placeholder_pnfs_try_status } pnfs_try_status ;
struct TYPE_2__ {int (* rpc_release ) (struct nfs_pgio_header*) ;} ;


 int VAR_0 ;



 int FUNC_0 (int *,int *) ;
 struct nfs_pgio_mirror* FUNC_1 (struct nfs_pageio_descriptor*) ;
 int FUNC_2 (struct nfs_pgio_header*,struct rpc_call_ops const*,struct pnfs_layout_segment*,int) ;
 int FUNC_3 (struct nfs_pageio_descriptor*,struct nfs_pgio_header*) ;
 int FUNC_4 (struct nfs_pgio_header*) ;
 int FUNC_5 (int ,int *) ;

__attribute__((used)) static void
FUNC_6(struct nfs_pageio_descriptor *VAR_1,
       struct nfs_pgio_header *VAR_2, int VAR_3)
{
 const struct rpc_call_ops *VAR_4 = VAR_1->pg_rpc_callops;
 struct pnfs_layout_segment *VAR_5 = VAR_1->pg_lseg;
 enum pnfs_try_status VAR_6;

 VAR_6 = FUNC_2(VAR_2, VAR_4, VAR_5, VAR_3);
 switch (VAR_6) {
 case 129:
  FUNC_3(VAR_1, VAR_2);
 case 130:
  break;
 case 128:

  if (!FUNC_5(VAR_0, &VAR_2->flags)) {
   struct nfs_pgio_mirror *VAR_7 = FUNC_1(VAR_1);
   FUNC_0(&VAR_2->pages, &VAR_7->pg_list);
   VAR_7->pg_recoalesce = 1;
  }
  VAR_2->mds_ops->rpc_release(VAR_2);
 }
}
