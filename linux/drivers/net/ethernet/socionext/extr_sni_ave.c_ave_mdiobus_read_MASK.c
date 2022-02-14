
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct net_device {int dummy; } ;
struct mii_bus {struct net_device* priv; } ;
struct ave_private {scalar_t__ base; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (struct net_device*,char*,int,int) ;
 struct ave_private* FUNC_2 (struct net_device*) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__,int,int,int,int) ;
 int FUNC_5 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_6(struct mii_bus *VAR_7, int VAR_8, int VAR_9)
{
 struct net_device *VAR_10 = VAR_7->priv;
 struct ave_private *VAR_11;
 u32 VAR_12, VAR_13;
 int VAR_14;

 VAR_11 = FUNC_2(VAR_10);


 FUNC_5((VAR_8 << 8) | VAR_9, VAR_11->base + VAR_0);


 VAR_12 = FUNC_3(VAR_11->base + VAR_1);
 FUNC_5((VAR_12 | VAR_2) & ~VAR_3,
        VAR_11->base + VAR_1);

 VAR_14 = FUNC_4(VAR_11->base + VAR_5, VAR_13,
     !(VAR_13 & VAR_6), 20, 2000);
 if (VAR_14) {
  FUNC_1(VAR_10, "failed to read (phy:%d reg:%x)\n",
      VAR_8, VAR_9);
  return VAR_14;
 }

 return FUNC_3(VAR_11->base + VAR_4) & FUNC_0(15, 0);
}
