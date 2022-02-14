
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void* u32 ;
struct sk_buff {int dummy; } ;
struct nfp_tun_active_tuns {TYPE_1__* tun_info; int count; } ;
struct nfp_app {int dummy; } ;
struct net_device {int dummy; } ;
struct neighbour {int dummy; } ;
typedef int __be32 ;
struct TYPE_2__ {int egress_port; int ipv4; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (int ) ;
 int FUNC_1 (struct neighbour*,int *) ;
 struct neighbour* FUNC_2 (int *,int *,struct net_device*) ;
 int FUNC_3 (struct neighbour*) ;
 struct net_device* FUNC_4 (struct nfp_app*,void*,int *) ;
 struct nfp_tun_active_tuns* FUNC_5 (struct sk_buff*) ;
 int FUNC_6 (struct sk_buff*) ;
 int FUNC_7 (struct nfp_app*,char*) ;
 int FUNC_8 () ;
 int FUNC_9 () ;
 int FUNC_10 (struct nfp_tun_active_tuns*,int ,int) ;
 int VAR_2 ;

void FUNC_11(struct nfp_app *VAR_3, struct sk_buff *VAR_4)
{
 struct nfp_tun_active_tuns *VAR_5;
 struct net_device *VAR_6;
 int VAR_7, VAR_8, VAR_9;
 struct neighbour *VAR_10;
 __be32 VAR_11;
 u32 VAR_12;

 VAR_5 = FUNC_5(VAR_4);
 VAR_7 = FUNC_0(VAR_5->count);
 if (VAR_7 > VAR_0) {
  FUNC_7(VAR_3, "Tunnel keep-alive request exceeds max routes.\n");
  return;
 }

 VAR_9 = FUNC_6(VAR_4);
 if (VAR_9 != FUNC_10(VAR_5, VAR_2, VAR_7)) {
  FUNC_7(VAR_3, "Corruption in tunnel keep-alive message.\n");
  return;
 }

 FUNC_8();
 for (VAR_8 = 0; VAR_8 < VAR_7; VAR_8++) {
  VAR_11 = VAR_5->tun_info[VAR_8].ipv4;
  VAR_12 = FUNC_0(VAR_5->tun_info[VAR_8].egress_port);
  VAR_6 = FUNC_4(VAR_3, VAR_12, ((void*)0));
  if (!VAR_6)
   continue;

  VAR_10 = FUNC_2(&VAR_1, &VAR_11, VAR_6);
  if (!VAR_10)
   continue;


  FUNC_1(VAR_10, ((void*)0));
  FUNC_3(VAR_10);
 }
 FUNC_9();
}
