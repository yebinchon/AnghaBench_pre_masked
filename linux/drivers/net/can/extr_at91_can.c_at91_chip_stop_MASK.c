
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct net_device {int dummy; } ;
struct TYPE_2__ {int state; } ;
struct at91_priv {TYPE_1__ can; } ;
typedef enum can_state { ____Placeholder_can_state } can_state ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct at91_priv*,int ) ;
 int FUNC_1 (struct at91_priv*,int ,int) ;
 struct at91_priv* FUNC_2 (struct net_device*) ;

__attribute__((used)) static void FUNC_3(struct net_device *VAR_4, enum can_state VAR_5)
{
 struct at91_priv *VAR_6 = FUNC_2(VAR_4);
 u32 VAR_7;


 FUNC_1(VAR_6, VAR_0, VAR_1);

 VAR_7 = FUNC_0(VAR_6, VAR_2);
 FUNC_1(VAR_6, VAR_2, VAR_7 & ~VAR_3);

 VAR_6->can.state = VAR_5;
}
