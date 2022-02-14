
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct net_device {int dummy; } ;
struct TYPE_2__ {int state; } ;
struct mscan_priv {TYPE_1__ can; } ;
typedef enum can_state { ____Placeholder_can_state } can_state ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 size_t FUNC_2 (int ,int ) ;
 struct mscan_priv* FUNC_3 (struct net_device*) ;
 int* VAR_1 ;
 scalar_t__ FUNC_4 (int) ;

__attribute__((used)) static enum can_state FUNC_5(struct net_device *VAR_2, u8 VAR_3)
{
 struct mscan_priv *VAR_4 = FUNC_3(VAR_2);

 if (FUNC_4(VAR_3 & VAR_0))
  return VAR_1[FUNC_2(FUNC_0(VAR_3),
     FUNC_1(VAR_3))];

 return VAR_4->can.state;
}
