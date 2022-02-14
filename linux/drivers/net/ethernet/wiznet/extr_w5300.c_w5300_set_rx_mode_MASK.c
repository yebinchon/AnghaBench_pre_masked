
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct w5300_priv {int promisc; } ;
struct net_device {int flags; } ;


 int VAR_0 ;
 struct w5300_priv* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct w5300_priv*) ;

__attribute__((used)) static void FUNC_2(struct net_device *VAR_1)
{
 struct w5300_priv *VAR_2 = FUNC_0(VAR_1);
 bool VAR_3 = (VAR_1->flags & VAR_0) != 0;

 if (VAR_2->promisc != VAR_3) {
  VAR_2->promisc = VAR_3;
  FUNC_1(VAR_2);
 }
}
