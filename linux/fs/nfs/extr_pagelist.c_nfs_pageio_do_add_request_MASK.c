
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int prev; } ;
struct nfs_pgio_mirror {scalar_t__ pg_count; TYPE_2__ pg_list; int pg_base; } ;
struct nfs_pageio_descriptor {scalar_t__ pg_maxretrans; int pg_error; int pg_inode; TYPE_1__* pg_ops; } ;
struct nfs_page {scalar_t__ wb_nio; scalar_t__ wb_bytes; int wb_pgbase; } ;
struct TYPE_6__ {int flags; } ;
struct TYPE_4__ {int (* pg_init ) (struct nfs_pageio_descriptor*,struct nfs_page*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_3__* FUNC_0 (int ) ;
 int FUNC_1 (struct nfs_page*,struct nfs_page*,struct nfs_pageio_descriptor*) ;
 struct nfs_page* FUNC_2 (int ) ;
 int FUNC_3 (struct nfs_page*,TYPE_2__*) ;
 struct nfs_pgio_mirror* FUNC_4 (struct nfs_pageio_descriptor*) ;
 int FUNC_5 (struct nfs_pageio_descriptor*,struct nfs_page*) ;

__attribute__((used)) static int FUNC_6(struct nfs_pageio_descriptor *VAR_3,
         struct nfs_page *VAR_4)
{
 struct nfs_pgio_mirror *VAR_5 = FUNC_4(VAR_3);

 struct nfs_page *VAR_6 = ((void*)0);

 if (VAR_5->pg_count != 0) {
  VAR_6 = FUNC_2(VAR_5->pg_list.prev);
 } else {
  if (VAR_3->pg_ops->pg_init)
   VAR_3->pg_ops->pg_init(VAR_3, VAR_4);
  if (VAR_3->pg_error < 0)
   return 0;
  VAR_5->pg_base = VAR_4->wb_pgbase;
 }

 if (VAR_3->pg_maxretrans && VAR_4->wb_nio > VAR_3->pg_maxretrans) {
  if (FUNC_0(VAR_3->pg_inode)->flags & VAR_2)
   VAR_3->pg_error = -VAR_1;
  else
   VAR_3->pg_error = -VAR_0;
  return 0;
 }

 if (!FUNC_1(VAR_6, VAR_4, VAR_3))
  return 0;
 FUNC_3(VAR_4, &VAR_5->pg_list);
 VAR_5->pg_count += VAR_4->wb_bytes;
 return 1;
}
