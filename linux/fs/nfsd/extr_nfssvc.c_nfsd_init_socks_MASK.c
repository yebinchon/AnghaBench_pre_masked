
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nfsd_net {TYPE_1__* nfsd_serv; } ;
struct net {int dummy; } ;
struct cred {int dummy; } ;
struct TYPE_2__ {int sv_permsocks; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 struct nfsd_net* FUNC_1 (struct net*,int ) ;
 int VAR_3 ;
 int FUNC_2 (TYPE_1__*,char*,struct net*,int ,int ,int ,struct cred const*) ;

__attribute__((used)) static int FUNC_3(struct net *VAR_4, const struct cred *VAR_5)
{
 int VAR_6;
 struct nfsd_net *VAR_7 = FUNC_1(VAR_4, VAR_3);

 if (!FUNC_0(&VAR_7->nfsd_serv->sv_permsocks))
  return 0;

 VAR_6 = FUNC_2(VAR_7->nfsd_serv, "udp", VAR_4, VAR_1, VAR_0,
     VAR_2, VAR_5);
 if (VAR_6 < 0)
  return VAR_6;

 VAR_6 = FUNC_2(VAR_7->nfsd_serv, "tcp", VAR_4, VAR_1, VAR_0,
     VAR_2, VAR_5);
 if (VAR_6 < 0)
  return VAR_6;

 return 0;
}
