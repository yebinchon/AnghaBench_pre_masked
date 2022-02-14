
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct nfs_pageio_descriptor {int * pg_lseg; int pg_error; int pg_inode; int * pg_dreq; } ;
struct nfs_page {scalar_t__ wb_bytes; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (struct nfs_pageio_descriptor*) ;
 int FUNC_5 (struct nfs_page*) ;
 int FUNC_6 (struct nfs_pageio_descriptor*) ;
 int FUNC_7 (struct nfs_pageio_descriptor*,struct nfs_page*) ;
 int * FUNC_8 (int ,int ,scalar_t__,scalar_t__,int ,int,int ) ;
 scalar_t__ FUNC_9 (struct nfs_page*) ;

void
FUNC_10(struct nfs_pageio_descriptor *VAR_2, struct nfs_page *VAR_3)
{
 u64 VAR_4 = VAR_3->wb_bytes;

 FUNC_6(VAR_2);
 FUNC_7(VAR_2, VAR_3);
 if (VAR_2->pg_lseg == ((void*)0)) {
  if (VAR_2->pg_dreq == ((void*)0))
   VAR_4 = FUNC_2(VAR_2->pg_inode) - FUNC_9(VAR_3);
  else
   VAR_4 = FUNC_3(VAR_2->pg_dreq);

  VAR_2->pg_lseg = FUNC_8(VAR_2->pg_inode,
         FUNC_5(VAR_3),
         FUNC_9(VAR_3),
         VAR_4,
         VAR_1,
         0,
         VAR_0);
  if (FUNC_0(VAR_2->pg_lseg)) {
   VAR_2->pg_error = FUNC_1(VAR_2->pg_lseg);
   VAR_2->pg_lseg = ((void*)0);
   return;
  }
 }

 if (VAR_2->pg_lseg == ((void*)0))
  FUNC_4(VAR_2);

}
