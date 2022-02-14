
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct nfs_pageio_descriptor {int * pg_lseg; int pg_error; int pg_inode; } ;
struct nfs_page {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct nfs_pageio_descriptor*) ;
 int FUNC_3 (struct nfs_page*) ;
 int FUNC_4 (struct nfs_pageio_descriptor*) ;
 int FUNC_5 (struct nfs_pageio_descriptor*,struct nfs_page*) ;
 int * FUNC_6 (int ,int ,int ,int ,int ,int,int ) ;
 int FUNC_7 (struct nfs_page*) ;

void
FUNC_8(struct nfs_pageio_descriptor *VAR_2,
      struct nfs_page *VAR_3, u64 VAR_4)
{
 FUNC_4(VAR_2);
 FUNC_5(VAR_2, VAR_3);
 if (VAR_2->pg_lseg == ((void*)0)) {
  VAR_2->pg_lseg = FUNC_6(VAR_2->pg_inode,
         FUNC_3(VAR_3),
         FUNC_7(VAR_3),
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
  FUNC_2(VAR_2);
}
