
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct net_device {int dummy; } ;
struct TYPE_2__ {int state; } ;
struct ifi_canfd_priv {TYPE_1__ can; scalar_t__ base; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 struct ifi_canfd_priv* FUNC_0 (struct net_device*) ;
 int FUNC_1 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct net_device *VAR_8)
{
 struct ifi_canfd_priv *VAR_9 = FUNC_0(VAR_8);


 FUNC_1(VAR_2, VAR_9->base + VAR_1);
 FUNC_1(0, VAR_9->base + VAR_1);


 FUNC_1(VAR_7, VAR_9->base + VAR_6);


 FUNC_1(~0, VAR_9->base + VAR_5);


 FUNC_1((u32)(~VAR_4),
        VAR_9->base + VAR_3);


 VAR_9->can.state = VAR_0;
}
