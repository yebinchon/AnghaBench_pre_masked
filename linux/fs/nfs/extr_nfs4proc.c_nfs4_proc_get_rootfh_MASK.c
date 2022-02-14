
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct nfs_server {TYPE_2__* nfs_client; } ;
struct nfs_fsinfo {int dummy; } ;
struct nfs_fh {int dummy; } ;
struct TYPE_4__ {TYPE_1__* cl_mvops; } ;
struct TYPE_3__ {int (* find_root_sec ) (struct nfs_server*,struct nfs_fh*,struct nfs_fsinfo*) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct nfs_server*,struct nfs_fh*,struct nfs_fsinfo*) ;
 int FUNC_1 (struct nfs_server*,struct nfs_fh*,struct nfs_fsinfo*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct nfs_server*,struct nfs_fh*) ;
 int FUNC_4 (struct nfs_server*,struct nfs_fh*,struct nfs_fsinfo*) ;

int FUNC_5(struct nfs_server *VAR_1, struct nfs_fh *VAR_2,
    struct nfs_fsinfo *VAR_3,
    bool VAR_4)
{
 int VAR_5 = 0;

 if (!VAR_4)
  VAR_5 = FUNC_1(VAR_1, VAR_2, VAR_3);

 if (VAR_4 || VAR_5 == VAR_0)
  VAR_5 = VAR_1->nfs_client->cl_mvops->find_root_sec(VAR_1,
    VAR_2, VAR_3);

 if (VAR_5 == 0)
  VAR_5 = FUNC_3(VAR_1, VAR_2);
 if (VAR_5 == 0)
  VAR_5 = FUNC_0(VAR_1, VAR_2, VAR_3);

 return FUNC_2(VAR_5);
}
