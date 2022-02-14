
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int remote; int sid; int dev; } ;
struct TYPE_4__ {TYPE_1__ pppoe; } ;
struct sockaddr_pppox {TYPE_2__ sa_addr; } ;
struct pppox_sock {int dummy; } ;
struct pppoe_net {int dummy; } ;
struct net_device {int ifindex; } ;
struct net {int dummy; } ;


 struct net_device* FUNC_0 (struct net*,int ) ;
 struct pppox_sock* FUNC_1 (struct pppoe_net*,int ,int ,int) ;
 struct pppoe_net* FUNC_2 (struct net*) ;
 int FUNC_3 () ;
 int FUNC_4 () ;

__attribute__((used)) static inline struct pppox_sock *FUNC_5(struct net *VAR_0,
      struct sockaddr_pppox *VAR_1)
{
 struct net_device *VAR_2;
 struct pppoe_net *VAR_3;
 struct pppox_sock *VAR_4 = ((void*)0);

 int VAR_5;

 FUNC_3();
 VAR_2 = FUNC_0(VAR_0, VAR_1->sa_addr.pppoe.dev);
 if (VAR_2) {
  VAR_5 = VAR_2->ifindex;
  VAR_3 = FUNC_2(VAR_0);
  VAR_4 = FUNC_1(VAR_3, VAR_1->sa_addr.pppoe.sid,
    VAR_1->sa_addr.pppoe.remote, VAR_5);
 }
 FUNC_4();
 return VAR_4;
}
