
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfs_pgio_mirror {scalar_t__ pg_recoalesce; } ;
struct nfs_pageio_descriptor {int pg_moreio; scalar_t__ pg_error; } ;
struct nfs_page {unsigned int wb_bytes; unsigned int wb_offset; unsigned int wb_pgbase; } ;


 scalar_t__ FUNC_0 (struct nfs_page*) ;
 unsigned int VAR_0 ;
 scalar_t__ FUNC_1 (struct nfs_page*) ;
 int FUNC_2 (int) ;
 struct nfs_page* FUNC_3 (struct nfs_page*,struct nfs_page*,unsigned int,unsigned int,unsigned int) ;
 int FUNC_4 (struct nfs_page*) ;
 int FUNC_5 (struct nfs_page*) ;
 int FUNC_6 (struct nfs_pageio_descriptor*,struct nfs_page*) ;
 int FUNC_7 (struct nfs_pageio_descriptor*,struct nfs_page*) ;
 int FUNC_8 (struct nfs_pageio_descriptor*) ;
 struct nfs_pgio_mirror* FUNC_9 (struct nfs_pageio_descriptor*) ;

__attribute__((used)) static int FUNC_10(struct nfs_pageio_descriptor *VAR_1,
      struct nfs_page *VAR_2)
{
 struct nfs_pgio_mirror *VAR_3 = FUNC_9(VAR_1);

 struct nfs_page *VAR_4;
 unsigned int VAR_5 = 0;
 unsigned int VAR_6, VAR_7;

 FUNC_4(VAR_2);

 VAR_4 = VAR_2;
 VAR_5 = VAR_4->wb_bytes;
 VAR_6 = VAR_4->wb_offset;
 VAR_7 = VAR_4->wb_pgbase;

 do {
  if (!FUNC_7(VAR_1, VAR_4)) {

   FUNC_2(VAR_4->wb_bytes != VAR_5);
   FUNC_2(VAR_4->wb_offset != VAR_6);
   FUNC_2(VAR_4->wb_pgbase != VAR_7);

   FUNC_5(VAR_2);
   VAR_1->pg_moreio = 1;
   FUNC_8(VAR_1);
   if (VAR_1->pg_error < 0 || VAR_3->pg_recoalesce)
    goto out_cleanup_subreq;

   FUNC_4(VAR_2);
   continue;
  }


  FUNC_2(VAR_4->wb_bytes + VAR_4->wb_pgbase > VAR_0);
  FUNC_2(VAR_4->wb_bytes > VAR_5);
  FUNC_2(VAR_4->wb_bytes == 0);

  VAR_5 -= VAR_4->wb_bytes;
  VAR_6 += VAR_4->wb_bytes;
  VAR_7 += VAR_4->wb_bytes;

  if (VAR_5) {
   VAR_4 = FUNC_3(VAR_2, VAR_4, VAR_7,
     VAR_6, VAR_5);
   if (FUNC_0(VAR_4))
    goto err_ptr;
  }
 } while (VAR_5 > 0);

 FUNC_5(VAR_2);
 return 1;
err_ptr:
 VAR_1->pg_error = FUNC_1(VAR_4);
 FUNC_5(VAR_2);
 return 0;
out_cleanup_subreq:
 if (VAR_2 != VAR_4)
  FUNC_6(VAR_1, VAR_4);
 return 0;
}
