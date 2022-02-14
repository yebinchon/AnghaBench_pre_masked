
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct nfs_pageio_descriptor {scalar_t__ pg_error; scalar_t__ pg_mirror_count; scalar_t__ pg_mirror_idx; } ;
struct nfs_page {unsigned int wb_pgbase; unsigned int wb_offset; unsigned int wb_bytes; struct nfs_page* wb_this_page; struct nfs_page* wb_head; } ;


 scalar_t__ FUNC_0 (struct nfs_page*) ;
 scalar_t__ FUNC_1 (struct nfs_page*) ;
 struct nfs_page* FUNC_2 (struct nfs_page*,struct nfs_page*,unsigned int,unsigned int,unsigned int) ;
 int FUNC_3 (struct nfs_page*) ;
 int FUNC_4 (struct nfs_page*) ;
 int FUNC_5 (struct nfs_pageio_descriptor*,struct nfs_page*) ;
 int FUNC_6 (struct nfs_pageio_descriptor*,struct nfs_page*) ;
 int FUNC_7 (struct nfs_pageio_descriptor*) ;
 int FUNC_8 (struct nfs_pageio_descriptor*,struct nfs_page*) ;
 scalar_t__ FUNC_9 (struct nfs_pageio_descriptor*) ;

int FUNC_10(struct nfs_pageio_descriptor *VAR_0,
      struct nfs_page *VAR_1)
{
 u32 VAR_2;
 unsigned int VAR_3, VAR_4, VAR_5;
 struct nfs_page *VAR_6, *VAR_7;

 VAR_3 = VAR_1->wb_pgbase;
 VAR_4 = VAR_1->wb_offset;
 VAR_5 = VAR_1->wb_bytes;

 FUNC_8(VAR_0, VAR_1);
 if (VAR_0->pg_error < 0)
  goto out_failed;

 for (VAR_2 = 0; VAR_2 < VAR_0->pg_mirror_count; VAR_2++) {
  if (VAR_2) {
   FUNC_3(VAR_1);


   for (VAR_7 = VAR_1->wb_head;
        VAR_7->wb_this_page != VAR_1->wb_head;
        VAR_7 = VAR_7->wb_this_page)
    ;

   VAR_6 = FUNC_2(VAR_1, VAR_7,
     VAR_3, VAR_4, VAR_5);

   FUNC_4(VAR_1);
   if (FUNC_0(VAR_6)) {
    VAR_0->pg_error = FUNC_1(VAR_6);
    goto out_failed;
   }
  } else
   VAR_6 = VAR_1;

  if (FUNC_9(VAR_0))
   VAR_0->pg_mirror_idx = VAR_2;
  if (!FUNC_5(VAR_0, VAR_6))
   goto out_cleanup_subreq;
 }

 return 1;

out_cleanup_subreq:
 if (VAR_1 != VAR_6)
  FUNC_6(VAR_0, VAR_6);
out_failed:
 FUNC_7(VAR_0);
 return 0;
}
