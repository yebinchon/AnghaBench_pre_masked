
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfsd_net {int nfsd_net_up; scalar_t__ lockd_up; } ;
struct net {int dummy; } ;


 int FUNC_0 (struct net*) ;
 struct nfsd_net* FUNC_1 (struct net*,int ) ;
 int FUNC_2 (struct net*) ;
 int FUNC_3 (struct net*) ;
 int VAR_0 ;
 int FUNC_4 () ;

__attribute__((used)) static void FUNC_5(struct net *VAR_1)
{
 struct nfsd_net *VAR_2 = FUNC_1(VAR_1, VAR_0);

 FUNC_3(VAR_1);
 FUNC_2(VAR_1);
 if (VAR_2->lockd_up) {
  FUNC_0(VAR_1);
  VAR_2->lockd_up = 0;
 }
 VAR_2->nfsd_net_up = 0;
 FUNC_4();
}
