
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int state; } ;
struct xcan_priv {TYPE_1__ can; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct xcan_priv* FUNC_0 (struct net_device*) ;

__attribute__((used)) static void FUNC_1(struct net_device *VAR_4, u32 VAR_5)
{
 struct xcan_priv *VAR_6 = FUNC_0(VAR_4);


 if (VAR_5 & VAR_2)
  VAR_6->can.state = VAR_1;


 if (VAR_5 & VAR_3)
  VAR_6->can.state = VAR_0;
}
