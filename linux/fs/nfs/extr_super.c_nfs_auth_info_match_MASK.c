
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfs_auth_info {int flavor_len; scalar_t__* flavors; } ;
typedef scalar_t__ rpc_authflavor_t ;



bool FUNC_0(const struct nfs_auth_info *VAR_0,
    rpc_authflavor_t VAR_1)
{
 int VAR_2;

 if (!VAR_0->flavor_len)
  return 1;

 for (VAR_2 = 0; VAR_2 < VAR_0->flavor_len; VAR_2++) {
  if (VAR_0->flavors[VAR_2] == VAR_1)
   return 1;
 }
 return 0;
}
