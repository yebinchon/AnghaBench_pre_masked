
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct net_device {int dummy; } ;
struct ave_private {scalar_t__ base; int phy_mode; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (struct net_device*) ;
 int FUNC_1 (int) ;
 struct ave_private* FUNC_2 (struct net_device*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_6(struct net_device *VAR_10)
{
 struct ave_private *VAR_11 = FUNC_2(VAR_10);
 u32 VAR_12;


 VAR_12 = VAR_2 | VAR_3 | VAR_1;
 if (!FUNC_3(VAR_11->phy_mode))
  VAR_12 |= VAR_4;
 FUNC_5(VAR_12, VAR_11->base + VAR_0);


 VAR_12 = FUNC_4(VAR_11->base + VAR_8);
 VAR_12 &= ~VAR_9;
 FUNC_5(VAR_12, VAR_11->base + VAR_8);


 FUNC_5(VAR_6 | VAR_7, VAR_11->base + VAR_5);
 FUNC_1(20);


 FUNC_5(VAR_6, VAR_11->base + VAR_5);
 FUNC_1(40);


 FUNC_5(0, VAR_11->base + VAR_5);
 FUNC_1(40);


 VAR_12 = FUNC_4(VAR_11->base + VAR_8);
 VAR_12 |= VAR_9;
 FUNC_5(VAR_12, VAR_11->base + VAR_8);

 FUNC_0(VAR_10);
}
