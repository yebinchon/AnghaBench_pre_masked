
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfs_server {int pnfs_blksize; } ;
struct nfs_fsinfo {int blksize; int fattr; } ;
struct nfs_fh {int dummy; } ;


 int FUNC_0 (struct nfs_server*,struct nfs_fh*,struct nfs_fsinfo*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct nfs_server*,struct nfs_fh*,struct nfs_fsinfo*) ;

__attribute__((used)) static int FUNC_3(struct nfs_server *VAR_0, struct nfs_fh *VAR_1, struct nfs_fsinfo *VAR_2)
{
 int VAR_3;

 FUNC_1(VAR_2->fattr);
 VAR_3 = FUNC_0(VAR_0, VAR_1, VAR_2);
 if (VAR_3 == 0) {

  VAR_0->pnfs_blksize = VAR_2->blksize;
  FUNC_2(VAR_0, VAR_1, VAR_2);
 }

 return VAR_3;
}
