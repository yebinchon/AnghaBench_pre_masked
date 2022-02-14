
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct nfs_pgio_mirror {int pg_count; int pg_bsize; } ;
struct nfs_pageio_descriptor {int dummy; } ;
struct nfs_page {int wb_bytes; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 size_t FUNC_1 (int,size_t) ;
 struct nfs_pgio_mirror* FUNC_2 (struct nfs_pageio_descriptor*) ;

size_t FUNC_3(struct nfs_pageio_descriptor *VAR_2,
      struct nfs_page *VAR_3, struct nfs_page *VAR_4)
{
 struct nfs_pgio_mirror *VAR_5 = FUNC_2(VAR_2);


 if (VAR_5->pg_count > VAR_5->pg_bsize) {

  FUNC_0(1);
  return 0;
 }





 if (((VAR_5->pg_count + VAR_4->wb_bytes) >> VAR_0) *
   sizeof(struct page *) > VAR_1)
  return 0;

 return FUNC_1(VAR_5->pg_bsize - VAR_5->pg_count, (size_t)VAR_4->wb_bytes);
}
