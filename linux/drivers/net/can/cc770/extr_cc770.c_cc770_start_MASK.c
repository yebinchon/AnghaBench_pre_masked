
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct TYPE_2__ {scalar_t__ state; } ;
struct cc770_priv {TYPE_1__ can; } ;


 scalar_t__ VAR_0 ;
 struct cc770_priv* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*) ;

__attribute__((used)) static void FUNC_3(struct net_device *VAR_1)
{
 struct cc770_priv *VAR_2 = FUNC_0(VAR_1);


 if (VAR_2->can.state != VAR_0)
  FUNC_2(VAR_1);


 FUNC_1(VAR_1);
}
