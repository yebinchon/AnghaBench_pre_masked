
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int time_t ;
struct nfsd_net {int nfsd4_lease; } ;
struct net {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int,int ) ;
 struct nfsd_net* FUNC_1 (struct net*,int ) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_2(struct net *VAR_2)
{
 struct nfsd_net *VAR_3 = FUNC_1(VAR_2, VAR_1);
 return FUNC_0(VAR_3->nfsd4_lease/10, (time_t)1) * VAR_0;
}
