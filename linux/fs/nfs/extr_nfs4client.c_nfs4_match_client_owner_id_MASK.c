
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfs_client {int * cl_owner_id; } ;


 scalar_t__ FUNC_0 (int *,int *) ;

__attribute__((used)) static bool FUNC_1(const struct nfs_client *VAR_0,
  const struct nfs_client *VAR_1)
{
 if (VAR_0->cl_owner_id == ((void*)0) || VAR_1->cl_owner_id == ((void*)0))
  return 1;
 return FUNC_0(VAR_0->cl_owner_id, VAR_1->cl_owner_id) == 0;
}
