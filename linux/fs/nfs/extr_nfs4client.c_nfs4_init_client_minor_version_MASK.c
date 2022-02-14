
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nfs_client {TYPE_1__* cl_mvops; } ;
struct TYPE_2__ {int (* init_client ) (struct nfs_client*) ;} ;


 int FUNC_0 (struct nfs_client*) ;
 int FUNC_1 (struct nfs_client*) ;

__attribute__((used)) static int FUNC_2(struct nfs_client *VAR_0)
{
 int VAR_1;

 VAR_1 = VAR_0->cl_mvops->init_client(VAR_0);
 if (VAR_1)
  return VAR_1;
 return FUNC_0(VAR_0);
}
