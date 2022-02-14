
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct net_device {int dummy; } ;
struct ks_net {TYPE_2__* netdev; } ;
typedef int irqreturn_t ;
struct TYPE_3__ {int rx_over_errors; } ;
struct TYPE_4__ {TYPE_1__ stats; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (struct ks_net*,struct net_device*) ;
 int FUNC_1 (struct ks_net*,int ) ;
 int FUNC_2 (struct ks_net*) ;
 int FUNC_3 (struct ks_net*) ;
 int FUNC_4 (struct net_device*,struct ks_net*) ;
 int FUNC_5 (struct ks_net*,int ,int) ;
 scalar_t__ FUNC_6 (int) ;
 struct ks_net* FUNC_7 (struct net_device*) ;
 int FUNC_8 (struct net_device*) ;
 scalar_t__ FUNC_9 (int) ;

__attribute__((used)) static irqreturn_t FUNC_10(int VAR_11, void *VAR_12)
{
 struct net_device *VAR_13 = VAR_12;
 struct ks_net *VAR_14 = FUNC_7(VAR_13);
 u16 VAR_15;


 FUNC_3(VAR_14);

 VAR_15 = FUNC_1(VAR_14, VAR_7);
 if (FUNC_9(!VAR_15)) {
  FUNC_2(VAR_14);
  return VAR_3;
 }

 FUNC_5(VAR_14, VAR_7, VAR_15);

 if (FUNC_6(VAR_15 & VAR_4))
  FUNC_0(VAR_14, VAR_13);

 if (FUNC_9(VAR_15 & VAR_1))
  FUNC_4(VAR_13, VAR_14);

 if (FUNC_9(VAR_15 & VAR_6))
  FUNC_8(VAR_13);

 if (FUNC_9(VAR_15 & VAR_2)) {

  u16 VAR_16 = FUNC_1(VAR_14, VAR_8);
  VAR_16 &= ~VAR_10;
  FUNC_5(VAR_14, VAR_8, VAR_16 | VAR_9);
 }

 if (FUNC_9(VAR_15 & VAR_5))
  VAR_14->netdev->stats.rx_over_errors++;

 FUNC_2(VAR_14);
 return VAR_0;
}
