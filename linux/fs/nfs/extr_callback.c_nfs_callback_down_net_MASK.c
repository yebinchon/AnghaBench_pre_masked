
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u32 ;
struct svc_serv {int dummy; } ;
struct nfs_net {scalar_t__* cb_users; } ;
struct TYPE_2__ {int inum; } ;
struct net {TYPE_1__ ns; } ;


 int FUNC_0 (char*,int ) ;
 struct nfs_net* FUNC_1 (struct net*,int ) ;
 int VAR_0 ;
 int FUNC_2 (struct svc_serv*,struct net*) ;

__attribute__((used)) static void FUNC_3(u32 VAR_1, struct svc_serv *VAR_2, struct net *VAR_3)
{
 struct nfs_net *VAR_4 = FUNC_1(VAR_3, VAR_0);

 if (--VAR_4->cb_users[VAR_1])
  return;

 FUNC_0("NFS: destroy per-net callback data; net=%x\n", VAR_3->ns.inum);
 FUNC_2(VAR_2, VAR_3);
}
