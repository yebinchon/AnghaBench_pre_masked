
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct net_device {int dummy; } ;
struct mii_bus {struct net_device* priv; } ;
struct ave_private {scalar_t__ base; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (struct net_device*,char*,int,int) ;
 struct ave_private* FUNC_1 (struct net_device*) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__,int,int,int,int) ;
 int FUNC_4 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_5(struct mii_bus *VAR_7, int VAR_8, int VAR_9,
        u16 VAR_10)
{
 struct net_device *VAR_11 = VAR_7->priv;
 struct ave_private *VAR_12;
 u32 VAR_13, VAR_14;
 int VAR_15;

 VAR_12 = FUNC_1(VAR_11);


 FUNC_4((VAR_8 << 8) | VAR_9, VAR_12->base + VAR_0);


 FUNC_4(VAR_10, VAR_12->base + VAR_6);


 VAR_13 = FUNC_2(VAR_12->base + VAR_1);
 FUNC_4((VAR_13 | VAR_3) & ~VAR_2,
        VAR_12->base + VAR_1);

 VAR_15 = FUNC_3(VAR_12->base + VAR_4, VAR_14,
     !(VAR_14 & VAR_5), 20, 2000);
 if (VAR_15)
  FUNC_0(VAR_11, "failed to write (phy:%d reg:%x)\n",
      VAR_8, VAR_9);

 return VAR_15;
}
