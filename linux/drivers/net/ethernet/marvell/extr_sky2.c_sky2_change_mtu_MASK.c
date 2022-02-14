
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct sky2_port {unsigned int port; scalar_t__ speed; struct sky2_hw* hw; } ;
struct sky2_hw {int flags; int napi; TYPE_1__* pdev; } ;
struct net_device {int mtu; } ;
struct TYPE_2__ {int irq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ VAR_14 ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct sky2_hw*,unsigned int,int ) ;
 int FUNC_5 (struct sky2_hw*,unsigned int,int ,int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 struct sky2_port* FUNC_8 (struct net_device*) ;
 int FUNC_9 (struct net_device*) ;
 int FUNC_10 (struct net_device*) ;
 int FUNC_11 (struct net_device*) ;
 int FUNC_12 (struct net_device*) ;
 int FUNC_13 (struct net_device*) ;
 int * VAR_15 ;
 int FUNC_14 (struct sky2_port*) ;
 int FUNC_15 (struct sky2_hw*,int ) ;
 int FUNC_16 (struct sky2_port*) ;
 int FUNC_17 (struct sky2_port*) ;
 int FUNC_18 (struct sky2_port*) ;
 int FUNC_19 (struct sky2_hw*,unsigned int) ;
 int FUNC_20 (struct sky2_hw*,int ,int ) ;
 int FUNC_21 (struct sky2_hw*,int ,int ) ;
 int FUNC_22 (int ) ;

__attribute__((used)) static int FUNC_23(struct net_device *VAR_16, int VAR_17)
{
 struct sky2_port *VAR_18 = FUNC_8(VAR_16);
 struct sky2_hw *VAR_19 = VAR_18->hw;
 unsigned VAR_20 = VAR_18->port;
 int VAR_21;
 u16 VAR_22, VAR_23;
 u32 VAR_24;

 if (!FUNC_10(VAR_16)) {
  VAR_16->mtu = VAR_17;
  FUNC_9(VAR_16);
  return 0;
 }

 VAR_24 = FUNC_15(VAR_19, VAR_0);
 FUNC_20(VAR_19, VAR_0, 0);
 FUNC_15(VAR_19, VAR_0);

 FUNC_11(VAR_16);
 FUNC_6(&VAR_19->napi);
 FUNC_12(VAR_16);

 FUNC_22(VAR_19->pdev->irq);

 if (!(VAR_19->flags & VAR_13))
  FUNC_19(VAR_19, VAR_20);

 VAR_22 = FUNC_4(VAR_19, VAR_20, VAR_5);
 FUNC_5(VAR_19, VAR_20, VAR_5, VAR_22 & ~VAR_4);
 FUNC_18(VAR_18);
 FUNC_16(VAR_18);

 VAR_16->mtu = VAR_17;
 FUNC_9(VAR_16);

 VAR_23 = FUNC_0(VAR_2) | VAR_8;
 if (VAR_18->speed > VAR_14)
  VAR_23 |= FUNC_1(VAR_9);
 else
  VAR_23 |= FUNC_1(VAR_10);

 if (VAR_16->mtu > VAR_3)
  VAR_23 |= VAR_7;

 FUNC_5(VAR_19, VAR_20, VAR_6, VAR_23);

 FUNC_21(VAR_19, FUNC_2(VAR_15[VAR_20], VAR_11), VAR_12);

 VAR_21 = FUNC_14(VAR_18);
 if (!VAR_21)
  FUNC_17(VAR_18);
 else
  FUNC_16(VAR_18);
 FUNC_20(VAR_19, VAR_0, VAR_24);

 FUNC_15(VAR_19, VAR_1);
 FUNC_7(&VAR_19->napi);

 if (VAR_21)
  FUNC_3(VAR_16);
 else {
  FUNC_5(VAR_19, VAR_20, VAR_5, VAR_22);

  FUNC_13(VAR_16);
 }

 return VAR_21;
}
