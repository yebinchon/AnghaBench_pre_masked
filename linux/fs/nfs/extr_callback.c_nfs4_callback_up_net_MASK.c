
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct svc_serv {int dummy; } ;
struct nfs_net {int nfs_callback_tcpport; int nfs_callback_tcpport6; } ;
struct TYPE_2__ {int inum; } ;
struct net {TYPE_1__ ns; } ;
struct cred {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct cred* FUNC_0 () ;
 int FUNC_1 (char*,int,int ,int ) ;
 struct nfs_net* FUNC_2 (struct net*,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (struct svc_serv*,char*,struct net*,int ,int ,int ,struct cred const*) ;

__attribute__((used)) static int FUNC_4(struct svc_serv *VAR_7, struct net *VAR_8)
{
 const struct cred *VAR_9 = FUNC_0();
 int VAR_10;
 struct nfs_net *VAR_11 = FUNC_2(VAR_8, VAR_6);

 VAR_10 = FUNC_3(VAR_7, "tcp", VAR_8, VAR_2,
    VAR_5, VAR_4,
    VAR_9);
 if (VAR_10 <= 0)
  goto out_err;
 VAR_11->nfs_callback_tcpport = VAR_10;
 FUNC_1("NFS: Callback listener port = %u (af %u, net %x)\n",
  VAR_11->nfs_callback_tcpport, VAR_2, VAR_8->ns.inum);

 VAR_10 = FUNC_3(VAR_7, "tcp", VAR_8, VAR_3,
    VAR_5, VAR_4,
    VAR_9);
 if (VAR_10 > 0) {
  VAR_11->nfs_callback_tcpport6 = VAR_10;
  FUNC_1("NFS: Callback listener port = %u (af %u, net %x)\n",
   VAR_11->nfs_callback_tcpport6, VAR_3, VAR_8->ns.inum);
 } else if (VAR_10 != -VAR_0)
  goto out_err;
 return 0;

out_err:
 return (VAR_10) ? VAR_10 : -VAR_1;
}
