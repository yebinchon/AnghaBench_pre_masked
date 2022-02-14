
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfsd_file {int dummy; } ;
struct nfs4_file {scalar_t__* fi_fds; } ;


 struct nfsd_file* FUNC_0 (scalar_t__) ;

__attribute__((used)) static struct nfsd_file *
FUNC_1(struct nfs4_file *VAR_0, int VAR_1)
{
 if (VAR_0->fi_fds[VAR_1])
  return FUNC_0(VAR_0->fi_fds[VAR_1]);
 return ((void*)0);
}
