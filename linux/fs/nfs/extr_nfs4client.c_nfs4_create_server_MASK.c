
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct nfs_subversion {int dummy; } ;
struct nfs_server {int cred; } ;
struct nfs_mount_info {int mntfh; TYPE_2__* parsed; } ;
struct TYPE_3__ {int flavor_len; } ;
struct TYPE_4__ {TYPE_1__ auth_info; } ;


 int VAR_0 ;
 struct nfs_server* FUNC_0 (int) ;
 int FUNC_1 () ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct nfs_server*,TYPE_2__*) ;
 int FUNC_4 (struct nfs_server*,int ,int) ;
 struct nfs_server* FUNC_5 () ;
 int FUNC_6 (struct nfs_server*) ;

struct nfs_server *FUNC_7(struct nfs_mount_info *VAR_1,
          struct nfs_subversion *VAR_2)
{
 struct nfs_server *VAR_3;
 bool VAR_4;
 int VAR_5;

 VAR_3 = FUNC_5();
 if (!VAR_3)
  return FUNC_0(-VAR_0);

 VAR_3->cred = FUNC_2(FUNC_1());

 VAR_4 = VAR_1->parsed->auth_info.flavor_len < 1;


 VAR_5 = FUNC_3(VAR_3, VAR_1->parsed);
 if (VAR_5 < 0)
  goto error;

 VAR_5 = FUNC_4(VAR_3, VAR_1->mntfh, VAR_4);
 if (VAR_5 < 0)
  goto error;

 return VAR_3;

error:
 FUNC_6(VAR_3);
 return FUNC_0(VAR_5);
}
