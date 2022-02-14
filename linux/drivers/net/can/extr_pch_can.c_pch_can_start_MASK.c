
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ state; } ;
struct pch_can_priv {TYPE_1__ can; } ;
struct net_device {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 struct pch_can_priv* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct pch_can_priv*) ;
 int FUNC_2 (struct pch_can_priv*) ;
 int FUNC_3 (struct pch_can_priv*,int ) ;
 int FUNC_4 (struct pch_can_priv*,int) ;
 int FUNC_5 (struct pch_can_priv*,int) ;
 int FUNC_6 (struct net_device*) ;

__attribute__((used)) static void FUNC_7(struct net_device *VAR_3)
{
 struct pch_can_priv *VAR_4 = FUNC_0(VAR_3);

 if (VAR_4->can.state != VAR_1)
  FUNC_1(VAR_4);

 FUNC_6(VAR_3);
 FUNC_2(VAR_4);

 FUNC_5(VAR_4, 1);
 FUNC_4(VAR_4, 1);


 FUNC_3(VAR_4, VAR_2);

 VAR_4->can.state = VAR_0;

 return;
}
