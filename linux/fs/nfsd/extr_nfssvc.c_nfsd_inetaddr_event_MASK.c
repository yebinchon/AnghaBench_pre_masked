
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int s_addr; } ;
struct sockaddr_in {TYPE_2__ sin_addr; int sin_family; } ;
struct sockaddr {int dummy; } ;
struct notifier_block {int dummy; } ;
struct nfsd_net {int ntf_wq; int ntf_refcnt; scalar_t__ nfsd_serv; } ;
struct net_device {int dummy; } ;
struct net {int dummy; } ;
struct in_ifaddr {int ifa_local; TYPE_1__* ifa_dev; } ;
struct TYPE_3__ {struct net_device* dev; } ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 struct net* FUNC_2 (struct net_device*) ;
 int FUNC_3 (char*,int *) ;
 struct nfsd_net* FUNC_4 (struct net*,int ) ;
 int VAR_3 ;
 int FUNC_5 (scalar_t__,struct sockaddr*) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7(struct notifier_block *VAR_4, unsigned long VAR_5,
 void *VAR_6)
{
 struct in_ifaddr *VAR_7 = (struct in_ifaddr *)VAR_6;
 struct net_device *VAR_8 = VAR_7->ifa_dev->dev;
 struct net *VAR_9 = FUNC_2(VAR_8);
 struct nfsd_net *VAR_10 = FUNC_4(VAR_9, VAR_3);
 struct sockaddr_in VAR_11;

 if ((VAR_5 != VAR_1) ||
     !FUNC_1(&VAR_10->ntf_refcnt))
  goto out;

 if (VAR_10->nfsd_serv) {
  FUNC_3("nfsd_inetaddr_event: removed %pI4\n", &VAR_7->ifa_local);
  VAR_11.sin_family = VAR_0;
  VAR_11.sin_addr.s_addr = VAR_7->ifa_local;
  FUNC_5(VAR_10->nfsd_serv, (struct sockaddr *)&VAR_11);
 }
 FUNC_0(&VAR_10->ntf_refcnt);
 FUNC_6(&VAR_10->ntf_wq);

out:
 return VAR_2;
}
