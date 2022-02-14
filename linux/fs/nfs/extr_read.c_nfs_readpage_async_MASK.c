
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct page {int dummy; } ;
struct nfs_pgio_mirror {scalar_t__ pg_bytes_written; } ;
struct nfs_pageio_descriptor {scalar_t__ pg_error; int pg_mirror_count; struct nfs_pgio_mirror* pg_mirrors; } ;
struct nfs_page {int dummy; } ;
struct nfs_open_context {int dummy; } ;
struct inode {int dummy; } ;
struct TYPE_2__ {int read_io; } ;


 scalar_t__ FUNC_0 (struct nfs_page*) ;
 TYPE_1__* FUNC_1 (struct inode*) ;
 unsigned int VAR_0 ;
 int FUNC_2 (struct nfs_page*) ;
 int FUNC_3 (int) ;
 int VAR_1 ;
 struct nfs_page* FUNC_4 (struct nfs_open_context*,struct page*,int ,unsigned int) ;
 int FUNC_5 (struct nfs_page*) ;
 unsigned int FUNC_6 (struct page*) ;
 int FUNC_7 (struct nfs_pageio_descriptor*,struct nfs_page*) ;
 int FUNC_8 (struct nfs_pageio_descriptor*) ;
 int FUNC_9 (struct nfs_pageio_descriptor*,struct inode*,int,int *) ;
 int FUNC_10 (struct nfs_page*,scalar_t__) ;
 int FUNC_11 (struct page*) ;
 int FUNC_12 (struct page*) ;
 int FUNC_13 (struct page*,unsigned int,unsigned int) ;

int FUNC_14(struct nfs_open_context *VAR_2, struct inode *VAR_3,
         struct page *VAR_4)
{
 struct nfs_page *VAR_5;
 unsigned int VAR_6;
 struct nfs_pageio_descriptor VAR_7;
 struct nfs_pgio_mirror *VAR_8;

 VAR_6 = FUNC_6(VAR_4);
 if (VAR_6 == 0)
  return FUNC_11(VAR_4);
 VAR_5 = FUNC_4(VAR_2, VAR_4, 0, VAR_6);
 if (FUNC_0(VAR_5)) {
  FUNC_12(VAR_4);
  return FUNC_2(VAR_5);
 }
 if (VAR_6 < VAR_0)
  FUNC_13(VAR_4, VAR_6, VAR_0);

 FUNC_9(&VAR_7, VAR_3, 0,
        &VAR_1);
 if (!FUNC_7(&VAR_7, VAR_5)) {
  FUNC_5(VAR_5);
  FUNC_10(VAR_5, VAR_7.pg_error);
 }
 FUNC_8(&VAR_7);


 FUNC_3(VAR_7.pg_mirror_count != 1);

 VAR_8 = &VAR_7.pg_mirrors[0];
 FUNC_1(VAR_3)->read_io += VAR_8->pg_bytes_written;

 return VAR_7.pg_error < 0 ? VAR_7.pg_error : 0;
}
