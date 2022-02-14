
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfs_pageio_descriptor {int * pg_lseg; int pg_error; int pg_inode; } ;
struct nfs_page {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *) ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int ,int ,int ,int ,int ,int,int ) ;
 int FUNC_3 (struct nfs_pageio_descriptor*) ;
 int FUNC_4 (struct nfs_page*) ;
 int FUNC_5 (struct nfs_pageio_descriptor*) ;

__attribute__((used)) static void
FUNC_6(struct nfs_pageio_descriptor *VAR_3,
   struct nfs_page *VAR_4)
{
 FUNC_5(VAR_3);
 if (!VAR_3->pg_lseg) {
  VAR_3->pg_lseg = FUNC_2(VAR_3->pg_inode,
            FUNC_4(VAR_4),
            0,
            VAR_2,
            VAR_1,
            0,
            VAR_0);
  if (FUNC_0(VAR_3->pg_lseg)) {
   VAR_3->pg_error = FUNC_1(VAR_3->pg_lseg);
   VAR_3->pg_lseg = ((void*)0);
   return;
  }
 }

 if (VAR_3->pg_lseg == ((void*)0))
  FUNC_3(VAR_3);
}
