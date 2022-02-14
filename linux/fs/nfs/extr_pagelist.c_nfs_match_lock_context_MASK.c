
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfs_lock_context {scalar_t__ lockowner; } ;



__attribute__((used)) static bool FUNC_0(const struct nfs_lock_context *VAR_0,
  const struct nfs_lock_context *VAR_1)
{
 return VAR_0->lockowner == VAR_1->lockowner;
}
