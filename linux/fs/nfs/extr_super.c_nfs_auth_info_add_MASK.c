
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfs_auth_info {scalar_t__* flavors; unsigned int flavor_len; } ;
typedef scalar_t__ rpc_authflavor_t ;


 unsigned int FUNC_0 (scalar_t__*) ;
 int VAR_0 ;
 int FUNC_1 (int ,char*) ;

__attribute__((used)) static bool FUNC_2(struct nfs_auth_info *VAR_1,
         rpc_authflavor_t VAR_2)
{
 unsigned int VAR_3;
 unsigned int VAR_4 = FUNC_0(VAR_1->flavors);


 for (VAR_3 = 0; VAR_3 < VAR_1->flavor_len; VAR_3++) {
  if (VAR_2 == VAR_1->flavors[VAR_3])
   return 1;
 }

 if (VAR_1->flavor_len + 1 >= VAR_4) {
  FUNC_1(VAR_0, "NFS: too many sec= flavors\n");
  return 0;
 }

 VAR_1->flavors[VAR_1->flavor_len++] = VAR_2;
 return 1;
}
