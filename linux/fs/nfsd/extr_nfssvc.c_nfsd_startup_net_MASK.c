
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfsd_net {int nfsd_net_up; int lockd_up; } ;
struct net {int dummy; } ;
struct cred {int dummy; } ;


 int FUNC_0 (struct net*) ;
 int FUNC_1 (struct net*,struct cred const*) ;
 struct nfsd_net* FUNC_2 (struct net*,int ) ;
 int FUNC_3 (struct net*) ;
 int FUNC_4 (struct net*,struct cred const*) ;
 scalar_t__ FUNC_5 (struct nfsd_net*) ;
 int VAR_0 ;
 int FUNC_6 () ;
 int FUNC_7 (int) ;

__attribute__((used)) static int FUNC_8(int VAR_1, struct net *VAR_2, const struct cred *VAR_3)
{
 struct nfsd_net *VAR_4 = FUNC_2(VAR_2, VAR_0);
 int VAR_5;

 if (VAR_4->nfsd_net_up)
  return 0;

 VAR_5 = FUNC_7(VAR_1);
 if (VAR_5)
  return VAR_5;
 VAR_5 = FUNC_4(VAR_2, VAR_3);
 if (VAR_5)
  goto out_socks;

 if (FUNC_5(VAR_4) && !VAR_4->lockd_up) {
  VAR_5 = FUNC_1(VAR_2, VAR_3);
  if (VAR_5)
   goto out_socks;
  VAR_4->lockd_up = 1;
 }

 VAR_5 = FUNC_3(VAR_2);
 if (VAR_5)
  goto out_lockd;

 VAR_4->nfsd_net_up = 1;
 return 0;

out_lockd:
 if (VAR_4->lockd_up) {
  FUNC_0(VAR_2);
  VAR_4->lockd_up = 0;
 }
out_socks:
 FUNC_6();
 return VAR_5;
}
