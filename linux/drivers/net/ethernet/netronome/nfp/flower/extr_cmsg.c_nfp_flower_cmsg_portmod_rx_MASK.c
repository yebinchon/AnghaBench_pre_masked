
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct sk_buff {int dummy; } ;
struct nfp_flower_cmsg_portmod {int info; int mtu; int portnum; } ;
struct nfp_app {int dummy; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct net_device*,scalar_t__) ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct net_device*) ;
 struct net_device* FUNC_5 (struct nfp_app*,int ,int *) ;
 struct nfp_flower_cmsg_portmod* FUNC_6 (struct sk_buff*) ;
 int FUNC_7 (struct nfp_app*,char*,int ) ;
 int FUNC_8 () ;
 int FUNC_9 () ;
 int FUNC_10 () ;
 int FUNC_11 () ;

__attribute__((used)) static void
FUNC_12(struct nfp_app *VAR_1, struct sk_buff *VAR_2)
{
 struct nfp_flower_cmsg_portmod *VAR_3;
 struct net_device *VAR_4;
 bool VAR_5;

 VAR_3 = FUNC_6(VAR_2);
 VAR_5 = VAR_3->info & VAR_0;

 FUNC_10();
 FUNC_8();
 VAR_4 = FUNC_5(VAR_1, FUNC_1(VAR_3->portnum), ((void*)0));
 FUNC_9();
 if (!VAR_4) {
  FUNC_7(VAR_1, "ctrl msg for unknown port 0x%08x\n",
         FUNC_1(VAR_3->portnum));
  FUNC_11();
  return;
 }

 if (VAR_5) {
  u16 VAR_6 = FUNC_0(VAR_3->mtu);

  FUNC_4(VAR_4);


  if (VAR_6)
   FUNC_2(VAR_4, VAR_6);
 } else {
  FUNC_3(VAR_4);
 }
 FUNC_11();
}
