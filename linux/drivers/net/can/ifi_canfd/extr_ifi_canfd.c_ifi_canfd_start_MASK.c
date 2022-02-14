
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct net_device {int dummy; } ;
struct TYPE_2__ {int ctrlmode; int state; } ;
struct ifi_canfd_priv {scalar_t__ base; TYPE_1__ can; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 scalar_t__ VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 scalar_t__ VAR_23 ;
 scalar_t__ VAR_24 ;
 int VAR_25 ;
 int FUNC_0 (struct net_device*,int) ;
 int FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*) ;
 struct ifi_canfd_priv* FUNC_3 (struct net_device*) ;
 int FUNC_4 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_5(struct net_device *VAR_26)
{
 struct ifi_canfd_priv *VAR_27 = FUNC_3(VAR_26);
 u32 VAR_28;


 FUNC_4(VAR_20, VAR_27->base + VAR_14);
 FUNC_4(VAR_18,
        VAR_27->base + VAR_14);

 FUNC_1(VAR_26);
 FUNC_2(VAR_26);


 FUNC_4(VAR_13, VAR_27->base + VAR_12);
 FUNC_4(0, VAR_27->base + VAR_12);
 FUNC_4(VAR_25, VAR_27->base + VAR_24);
 FUNC_4(0, VAR_27->base + VAR_24);


 FUNC_4(0, VAR_27->base + VAR_11);
 FUNC_4(0, VAR_27->base + VAR_23);


 FUNC_4((u32)(~VAR_10),
        VAR_27->base + VAR_9);

 VAR_28 = VAR_17 | VAR_22 |
  VAR_18;

 if (VAR_27->can.ctrlmode & VAR_2)
  VAR_28 |= VAR_15;

 if (VAR_27->can.ctrlmode & VAR_3)
  VAR_28 |= VAR_21;

 if ((VAR_27->can.ctrlmode & VAR_0) &&
     !(VAR_27->can.ctrlmode & VAR_1))
  VAR_28 |= VAR_19;

 if (!(VAR_27->can.ctrlmode & VAR_0))
  VAR_28 |= VAR_16;

 VAR_27->can.state = VAR_4;

 FUNC_0(VAR_26, 1);


 FUNC_4(VAR_8,
        VAR_27->base + VAR_5);
 FUNC_4(VAR_7, VAR_27->base + VAR_5);
 FUNC_4(VAR_6, VAR_27->base + VAR_5);


 FUNC_4(VAR_28, VAR_27->base + VAR_14);
}
