
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfsd_net {int * nfsd_serv; } ;
struct net {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 struct nfsd_net* FUNC_0 (struct net*,int ) ;
 int VAR_1 ;
 int FUNC_1 (int *,char*,int ) ;

__attribute__((used)) static ssize_t FUNC_2(char *VAR_2, struct net *VAR_3)
{
 struct nfsd_net *VAR_4 = FUNC_0(VAR_3, VAR_1);

 if (VAR_4->nfsd_serv == ((void*)0))
  return 0;
 return FUNC_1(VAR_4->nfsd_serv, VAR_2, VAR_0);
}
