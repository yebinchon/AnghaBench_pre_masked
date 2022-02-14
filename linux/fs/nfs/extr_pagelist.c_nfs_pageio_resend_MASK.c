
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct nfs_pgio_header {int io_start; TYPE_1__* completion_ops; int pages; int dreq; int io_completion; } ;
struct nfs_pageio_descriptor {int pg_error; int pg_dreq; int pg_io_completion; } ;
struct nfs_page {int dummy; } ;
struct TYPE_8__ {int next; } ;
struct TYPE_7__ {int (* error_cleanup ) (TYPE_2__*,int) ;} ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int *,TYPE_2__*) ;
 struct nfs_page* FUNC_3 (int ) ;
 int FUNC_4 (struct nfs_pageio_descriptor*,struct nfs_page*) ;
 int FUNC_5 (struct nfs_pageio_descriptor*) ;
 int FUNC_6 (struct nfs_pgio_header*,int,int ) ;
 TYPE_2__ VAR_1 ;
 int FUNC_7 (TYPE_2__*,int) ;

int FUNC_8(struct nfs_pageio_descriptor *VAR_2,
        struct nfs_pgio_header *VAR_3)
{
 FUNC_0(VAR_1);

 VAR_2->pg_io_completion = VAR_3->io_completion;
 VAR_2->pg_dreq = VAR_3->dreq;
 FUNC_2(&VAR_3->pages, &VAR_1);
 while (!FUNC_1(&VAR_1)) {
  struct nfs_page *VAR_4 = FUNC_3(VAR_1.next);

  if (!FUNC_4(VAR_2, VAR_4))
   break;
 }
 FUNC_5(VAR_2);
 if (!FUNC_1(&VAR_1)) {
  int VAR_5 = VAR_2->pg_error < 0 ? VAR_2->pg_error : -VAR_0;
  VAR_3->completion_ops->error_cleanup(&VAR_1, VAR_5);
  FUNC_6(VAR_3, VAR_5, VAR_3->io_start);
  return VAR_5;
 }
 return 0;
}
