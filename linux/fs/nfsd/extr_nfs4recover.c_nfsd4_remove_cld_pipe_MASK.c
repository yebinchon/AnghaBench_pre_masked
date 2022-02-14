
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfsd_net {struct cld_net* cld_net; } ;
struct net {int dummy; } ;
struct cld_net {scalar_t__ cn_tfm; int cn_pipe; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct cld_net*) ;
 struct nfsd_net* FUNC_2 (struct net*,int ) ;
 int FUNC_3 (struct net*,int ) ;
 int VAR_0 ;
 int FUNC_4 (int ) ;

__attribute__((used)) static void
FUNC_5(struct net *VAR_1)
{
 struct nfsd_net *VAR_2 = FUNC_2(VAR_1, VAR_0);
 struct cld_net *VAR_3 = VAR_2->cld_net;

 FUNC_3(VAR_1, VAR_3->cn_pipe);
 FUNC_4(VAR_3->cn_pipe);
 if (VAR_3->cn_tfm)
  FUNC_0(VAR_3->cn_tfm);
 FUNC_1(VAR_2->cld_net);
 VAR_2->cld_net = ((void*)0);
}
