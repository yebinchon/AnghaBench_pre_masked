
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct ftmac100 {scalar_t__ base; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int FUNC_0 (int) ;
 unsigned int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 unsigned int FUNC_3 (scalar_t__) ;
 int FUNC_4 (unsigned int,scalar_t__) ;
 int FUNC_5 (struct net_device*,char*) ;
 struct ftmac100* FUNC_6 (struct net_device*) ;
 int FUNC_7 (int) ;

__attribute__((used)) static void FUNC_8(struct net_device *VAR_3, int VAR_4, int VAR_5,
    int VAR_6)
{
 struct ftmac100 *VAR_7 = FUNC_6(VAR_3);
 unsigned int VAR_8;
 int VAR_9;

 VAR_8 = FUNC_0(VAR_4) |
  FUNC_1(VAR_5) |
  VAR_2;

 VAR_6 = FUNC_2(VAR_6);

 FUNC_4(VAR_6, VAR_7->base + VAR_1);
 FUNC_4(VAR_8, VAR_7->base + VAR_0);

 for (VAR_9 = 0; VAR_9 < 10; VAR_9++) {
  VAR_8 = FUNC_3(VAR_7->base + VAR_0);

  if ((VAR_8 & VAR_2) == 0)
   return;

  FUNC_7(100);
 }

 FUNC_5(VAR_3, "mdio write timed out\n");
}
