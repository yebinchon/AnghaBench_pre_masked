
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int ctrlmode; int state; } ;
struct sun4ican_priv {TYPE_1__ can; scalar_t__ base; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int FUNC_0 (struct net_device*,char*) ;
 struct sun4ican_priv* FUNC_1 (struct net_device*) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct net_device*) ;
 int FUNC_6 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_7(struct net_device *VAR_12)
{
 struct sun4ican_priv *VAR_13 = FUNC_1(VAR_12);
 int VAR_14;
 u32 VAR_15;


 VAR_14 = FUNC_4(VAR_12);
 if (VAR_14) {
  FUNC_0(VAR_12, "could not enter reset mode\n");
  return VAR_14;
 }


 FUNC_6(0x00000000, VAR_13->base + VAR_7);
 FUNC_6(0xFFFFFFFF, VAR_13->base + VAR_8);


 FUNC_6(0, VAR_13->base + VAR_9);


 if (VAR_13->can.ctrlmode & VAR_0)
  FUNC_6(0xFF, VAR_13->base + VAR_10);
 else
  FUNC_6(0xFF & ~VAR_4,
         VAR_13->base + VAR_10);


 VAR_15 = FUNC_2(VAR_13->base + VAR_11);
 if (VAR_13->can.ctrlmode & VAR_2)
  VAR_15 |= VAR_6;
 else if (VAR_13->can.ctrlmode & VAR_1)
  VAR_15 |= VAR_5;
 FUNC_6(VAR_15, VAR_13->base + VAR_11);

 VAR_14 = FUNC_5(VAR_12);
 if (VAR_14)
  return VAR_14;


 VAR_14 = FUNC_3(VAR_12);
 if (VAR_14) {
  FUNC_0(VAR_12, "could not enter normal mode\n");
  return VAR_14;
 }

 VAR_13->can.state = VAR_3;

 return 0;
}
