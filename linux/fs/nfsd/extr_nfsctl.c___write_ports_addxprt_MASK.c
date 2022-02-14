
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct svc_xprt {int dummy; } ;
struct nfsd_net {TYPE_1__* nfsd_serv; } ;
struct net {int dummy; } ;
struct cred {int dummy; } ;
typedef int ssize_t ;
struct TYPE_3__ {int sv_nrthreads; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct nfsd_net* FUNC_0 (struct net*,int ) ;
 int FUNC_1 (struct net*) ;
 int FUNC_2 (struct net*) ;
 int VAR_6 ;
 int FUNC_3 (char*,char*,char*,int*) ;
 int FUNC_4 (struct svc_xprt*) ;
 int FUNC_5 (TYPE_1__*,char*,struct net*,int ,int,int ,struct cred const*) ;
 struct svc_xprt* FUNC_6 (TYPE_1__*,char*,struct net*,int ,int) ;
 int FUNC_7 (struct svc_xprt*) ;

__attribute__((used)) static ssize_t FUNC_8(char *VAR_7, struct net *VAR_8, const struct cred *VAR_9)
{
 char VAR_10[16];
 struct svc_xprt *VAR_11;
 int VAR_12, VAR_13;
 struct nfsd_net *VAR_14 = FUNC_0(VAR_8, VAR_6);

 if (FUNC_3(VAR_7, "%15s %5u", VAR_10, &VAR_12) != 2)
  return -VAR_1;

 if (VAR_12 < 1 || VAR_12 > VAR_5)
  return -VAR_1;

 VAR_13 = FUNC_1(VAR_8);
 if (VAR_13 != 0)
  return VAR_13;

 VAR_13 = FUNC_5(VAR_14->nfsd_serv, VAR_10, VAR_8,
    VAR_2, VAR_12, VAR_4, VAR_9);
 if (VAR_13 < 0)
  goto out_err;

 VAR_13 = FUNC_5(VAR_14->nfsd_serv, VAR_10, VAR_8,
    VAR_3, VAR_12, VAR_4, VAR_9);
 if (VAR_13 < 0 && VAR_13 != -VAR_0)
  goto out_close;


 VAR_14->nfsd_serv->sv_nrthreads--;
 return 0;
out_close:
 VAR_11 = FUNC_6(VAR_14->nfsd_serv, VAR_10, VAR_8, VAR_2, VAR_12);
 if (VAR_11 != ((void*)0)) {
  FUNC_4(VAR_11);
  FUNC_7(VAR_11);
 }
out_err:
 FUNC_2(VAR_8);
 return VAR_13;
}
