
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfs_pageio_descriptor {int * pg_lseg; int pg_dreq; int pg_inode; int pg_error; } ;
struct nfs_page {int dummy; } ;
struct nfs_commit_info {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *) ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,struct nfs_commit_info*,int ) ;
 int * FUNC_3 (int ,int ,int ,int ,int ,int,int ) ;
 int FUNC_4 (struct nfs_commit_info*,int ,int ) ;
 int FUNC_5 (struct nfs_pageio_descriptor*) ;
 int FUNC_6 (struct nfs_page*) ;
 int FUNC_7 (struct nfs_pageio_descriptor*) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static void
FUNC_9(struct nfs_pageio_descriptor *VAR_3,
    struct nfs_page *VAR_4)
{
 struct nfs_commit_info VAR_5;
 int VAR_6;

 FUNC_7(VAR_3);
 if (!VAR_3->pg_lseg) {
  VAR_3->pg_lseg = FUNC_3(VAR_3->pg_inode,
            FUNC_6(VAR_4),
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
  goto out_mds;
 FUNC_4(&VAR_5, VAR_3->pg_inode, VAR_3->pg_dreq);
 VAR_6 = FUNC_2(VAR_3->pg_lseg, &VAR_5, VAR_0);
 if (VAR_6 < 0) {
  FUNC_8(VAR_3->pg_lseg);
  VAR_3->pg_lseg = ((void*)0);
  goto out_mds;
 }
 return;
out_mds:
 FUNC_5(VAR_3);
}
