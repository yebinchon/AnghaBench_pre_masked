
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int state; } ;
struct rcar_canfd_channel {int channel; TYPE_1__ can; scalar_t__ base; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_2 (int) ;
 int VAR_5 ;
 int FUNC_3 (int) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_4 (struct net_device*,char*,int) ;
 struct rcar_canfd_channel* FUNC_5 (struct net_device*) ;
 int FUNC_6 (scalar_t__,int ,int ) ;
 int FUNC_7 (struct rcar_canfd_channel*) ;
 int FUNC_8 (scalar_t__,int ,int ,int ) ;
 int FUNC_9 (scalar_t__,int,int,int,int) ;

__attribute__((used)) static void FUNC_10(struct net_device *VAR_8)
{
 struct rcar_canfd_channel *VAR_9 = FUNC_5(VAR_8);
 int VAR_10;
 u32 VAR_11, VAR_12 = VAR_9->channel;
 u32 VAR_13 = VAR_12 + VAR_7;


 FUNC_8(VAR_9->base, FUNC_0(VAR_12),
         VAR_2, VAR_1);


 VAR_10 = FUNC_9((VAR_9->base + FUNC_2(VAR_12)), VAR_11,
     (VAR_11 & VAR_5), 2, 500000);
 if (VAR_10)
  FUNC_4(VAR_8, "channel %u reset failed\n", VAR_12);

 FUNC_7(VAR_9);


 FUNC_6(VAR_9->base, FUNC_1(VAR_12, VAR_4),
        VAR_3);
 FUNC_6(VAR_9->base, FUNC_3(VAR_13), VAR_6);


 VAR_9->can.state = VAR_0;
}
