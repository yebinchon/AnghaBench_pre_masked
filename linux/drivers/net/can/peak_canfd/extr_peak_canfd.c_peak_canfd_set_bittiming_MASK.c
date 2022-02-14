
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int bittiming; } ;
struct peak_canfd_priv {TYPE_1__ can; } ;
struct net_device {int dummy; } ;


 struct peak_canfd_priv* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct peak_canfd_priv*,int *) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_0)
{
 struct peak_canfd_priv *VAR_1 = FUNC_0(VAR_0);

 return FUNC_1(VAR_1, &VAR_1->can.bittiming);
}
