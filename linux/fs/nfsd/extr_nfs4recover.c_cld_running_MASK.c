
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpc_pipe {scalar_t__ nwriters; scalar_t__ nreaders; } ;
struct nfsd_net {struct cld_net* cld_net; } ;
struct cld_net {struct rpc_pipe* cn_pipe; } ;



__attribute__((used)) static bool
FUNC_0(struct nfsd_net *VAR_0)
{
 struct cld_net *VAR_1 = VAR_0->cld_net;
 struct rpc_pipe *VAR_2 = VAR_1->cn_pipe;

 return VAR_2->nreaders || VAR_2->nwriters;
}
