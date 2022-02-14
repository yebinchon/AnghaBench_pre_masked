
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct netsec_priv {struct net_device* ndev; } ;
struct net_device {int dummy; } ;


 scalar_t__ FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct netsec_priv*) ;
 int FUNC_3 () ;

__attribute__((used)) static void FUNC_4(struct netsec_priv *VAR_0)
{
 struct net_device *VAR_1 = VAR_0->ndev;
 bool VAR_2;

 VAR_2 = FUNC_2(VAR_0);

 if (VAR_2 && FUNC_0(VAR_1)) {



  FUNC_3();
  FUNC_1(VAR_1);
 }
}
