
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfs_open_context {int state; } ;
struct nfs_lock_context {int dummy; } ;
typedef int nfs4_stateid ;
typedef int fmode_t ;


 int FUNC_0 (int ,int ,struct nfs_lock_context const*,int *,int *) ;

int FUNC_1(nfs4_stateid *VAR_0,
  const struct nfs_open_context *VAR_1,
  const struct nfs_lock_context *VAR_2,
  fmode_t VAR_3)
{
 return FUNC_0(VAR_1->state, VAR_3, VAR_2, VAR_0, ((void*)0));
}
