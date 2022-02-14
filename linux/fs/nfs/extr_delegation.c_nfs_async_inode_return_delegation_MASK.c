
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct nfs_server {struct nfs_client* nfs_client; } ;
struct nfs_delegation {int stateid; } ;
struct nfs_client {TYPE_1__* cl_mvops; } ;
struct inode {int dummy; } ;
typedef int nfs4_stateid ;
struct TYPE_4__ {int delegation; } ;
struct TYPE_3__ {int (* match_stateid ) (int *,int const*) ;} ;


 int VAR_0 ;
 TYPE_2__* FUNC_0 (struct inode*) ;
 struct nfs_server* FUNC_1 (struct inode*) ;
 int FUNC_2 (struct nfs_client*) ;
 int FUNC_3 (struct nfs_server*,struct nfs_delegation*) ;
 struct nfs_delegation* FUNC_4 (int ) ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 (int *,int const*) ;

int FUNC_8(struct inode *VAR_1,
          const nfs4_stateid *VAR_2)
{
 struct nfs_server *VAR_3 = FUNC_1(VAR_1);
 struct nfs_client *VAR_4 = VAR_3->nfs_client;
 struct nfs_delegation *VAR_5;

 FUNC_5();
 VAR_5 = FUNC_4(FUNC_0(VAR_1)->delegation);
 if (VAR_5 == ((void*)0))
  goto out_enoent;
 if (VAR_2 != ((void*)0) &&
     !VAR_4->cl_mvops->match_stateid(&VAR_5->stateid, VAR_2))
  goto out_enoent;
 FUNC_3(VAR_3, VAR_5);
 FUNC_6();

 FUNC_2(VAR_4);
 return 0;
out_enoent:
 FUNC_6();
 return -VAR_0;
}
