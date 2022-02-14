
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpc_cred {int cl_auth; } ;
struct rpc_clnt {int cl_auth; } ;
struct nfs_server {int auth_info; } ;
struct nfs4_secinfo_flavors {unsigned int num_flavors; struct nfs4_secinfo4* flavors; } ;
struct nfs4_secinfo4 {int flavor; int flavor_info; } ;
typedef int rpc_authflavor_t ;


 int VAR_0 ;
 struct rpc_cred* FUNC_0 (int ) ;
 int FUNC_1 (struct rpc_cred*) ;

 int VAR_1 ;


 int FUNC_2 (int *,int ) ;
 int FUNC_3 (struct rpc_cred*) ;
 struct rpc_cred* FUNC_4 (struct rpc_cred*,int ) ;
 int FUNC_5 (struct rpc_cred*) ;
 int FUNC_6 (int,int *) ;
 struct rpc_cred* FUNC_7 (int ,int ) ;

__attribute__((used)) static struct rpc_clnt *FUNC_8(struct rpc_clnt *VAR_2,
       struct nfs_server *VAR_3,
       struct nfs4_secinfo_flavors *VAR_4)
{
 rpc_authflavor_t VAR_5;
 struct nfs4_secinfo4 *VAR_6;
 unsigned int VAR_7;

 for (VAR_7 = 0; VAR_7 < VAR_4->num_flavors; VAR_7++) {
  VAR_6 = &VAR_4->flavors[VAR_7];

  switch (VAR_6->flavor) {
  case 129:
  case 128:
  case 130:
   VAR_5 = FUNC_6(VAR_6->flavor,
       &VAR_6->flavor_info);

   if (VAR_5 != VAR_1 &&
       FUNC_2(&VAR_3->auth_info, VAR_5)) {
    struct rpc_clnt *VAR_8;
    struct rpc_cred *VAR_9;


    VAR_8 = FUNC_4(VAR_2, VAR_5);
    if (FUNC_1(VAR_8))
     continue;





    VAR_9 = FUNC_7(VAR_8->cl_auth, 0);
    if (FUNC_1(VAR_9)) {
     FUNC_5(VAR_8);
     continue;
    }
    FUNC_3(VAR_9);
    return VAR_8;
   }
  }
 }
 return FUNC_0(-VAR_0);
}
