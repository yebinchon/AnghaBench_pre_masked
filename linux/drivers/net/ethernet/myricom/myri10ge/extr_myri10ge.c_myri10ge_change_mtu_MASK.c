
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int mtu; } ;
struct myri10ge_priv {scalar_t__ running; } ;


 int FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*,char*,int,int) ;
 struct myri10ge_priv* FUNC_3 (struct net_device*) ;

__attribute__((used)) static int FUNC_4(struct net_device *VAR_0, int VAR_1)
{
 struct myri10ge_priv *VAR_2 = FUNC_3(VAR_0);

 FUNC_2(VAR_0, "changing mtu from %d to %d\n", VAR_0->mtu, VAR_1);
 if (VAR_2->running) {


  FUNC_0(VAR_0);
  VAR_0->mtu = VAR_1;
  FUNC_1(VAR_0);
 } else
  VAR_0->mtu = VAR_1;

 return 0;
}
