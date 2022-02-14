
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfs_open_context {scalar_t__ state; int cred; } ;


 scalar_t__ FUNC_0 (int ,int ) ;

__attribute__((used)) static inline bool FUNC_1(const struct nfs_open_context *VAR_0,
  const struct nfs_open_context *VAR_1)
{
 return FUNC_0(VAR_0->cred, VAR_1->cred) == 0 && VAR_0->state == VAR_1->state;
}
