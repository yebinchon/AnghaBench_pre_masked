
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
 int VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_2 (int) ;
 int VAR_6 ;
 int FUNC_3 (int) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_4 (struct net_device*,char*,int) ;
 struct rcar_canfd_channel* FUNC_5 (struct net_device*) ;
 int FUNC_6 (struct rcar_canfd_channel*) ;
 int FUNC_7 (struct rcar_canfd_channel*) ;
 int FUNC_8 (scalar_t__,int ,int ) ;
 int FUNC_9 (struct net_device*) ;
 int FUNC_10 (scalar_t__,int ,int ,int ) ;
 int FUNC_11 (scalar_t__,int,int,int,int) ;

__attribute__((used)) static int FUNC_12(struct net_device *VAR_9)
{
 struct rcar_canfd_channel *VAR_10 = FUNC_5(VAR_9);
 int VAR_11 = -VAR_1;
 u32 VAR_12, VAR_13 = VAR_10->channel;
 u32 VAR_14 = VAR_13 + VAR_8;

 FUNC_9(VAR_9);

 FUNC_7(VAR_10);


 FUNC_10(VAR_10->base, FUNC_0(VAR_13),
         VAR_3, VAR_2);


 VAR_11 = FUNC_11((VAR_10->base + FUNC_2(VAR_13)), VAR_12,
     (VAR_12 & VAR_6), 2, 500000);
 if (VAR_11) {
  FUNC_4(VAR_9, "channel %u communication state failed\n", VAR_13);
  goto fail_mode_change;
 }


 FUNC_8(VAR_10->base, FUNC_1(VAR_13, VAR_5),
      VAR_4);
 FUNC_8(VAR_10->base, FUNC_3(VAR_14), VAR_7);

 VAR_10->can.state = VAR_0;
 return 0;

fail_mode_change:
 FUNC_6(VAR_10);
 return VAR_11;
}
