
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct TYPE_2__ {int state; } ;
struct mcba_priv {TYPE_1__ can; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct net_device*,int ) ;
 int FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct mcba_priv*) ;
 struct mcba_priv* FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct net_device*) ;

__attribute__((used)) static int FUNC_5(struct net_device *VAR_2)
{
 struct mcba_priv *VAR_3 = FUNC_3(VAR_2);

 VAR_3->can.state = VAR_1;

 FUNC_4(VAR_2);


 FUNC_2(VAR_3);

 FUNC_1(VAR_2);
 FUNC_0(VAR_2, VAR_0);

 return 0;
}
