
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct net_device {int dummy; } ;
struct mii_bus {struct net_device* priv; } ;
struct ftgmac100 {scalar_t__ base; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int FUNC_0 (int) ;
 unsigned int FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 unsigned int FUNC_3 (scalar_t__) ;
 int FUNC_4 (unsigned int,scalar_t__) ;
 int FUNC_5 (struct net_device*,char*) ;
 struct ftgmac100* FUNC_6 (struct net_device*) ;
 int FUNC_7 (int) ;

__attribute__((used)) static int FUNC_8(struct mii_bus *VAR_5, int VAR_6,
       int VAR_7, u16 VAR_8)
{
 struct net_device *VAR_9 = VAR_5->priv;
 struct ftgmac100 *VAR_10 = FUNC_6(VAR_9);
 unsigned int VAR_11;
 int VAR_12;
 int VAR_13;

 VAR_11 = FUNC_3(VAR_10->base + VAR_1);


 VAR_11 &= VAR_3;

 VAR_11 |= FUNC_0(VAR_6) |
   FUNC_1(VAR_7) |
   VAR_4;

 VAR_12 = FUNC_2(VAR_8);

 FUNC_4(VAR_12, VAR_10->base + VAR_2);
 FUNC_4(VAR_11, VAR_10->base + VAR_1);

 for (VAR_13 = 0; VAR_13 < 10; VAR_13++) {
  VAR_11 = FUNC_3(VAR_10->base + VAR_1);

  if ((VAR_11 & VAR_4) == 0)
   return 0;

  FUNC_7(100);
 }

 FUNC_5(VAR_9, "mdio write timed out\n");
 return -VAR_0;
}
