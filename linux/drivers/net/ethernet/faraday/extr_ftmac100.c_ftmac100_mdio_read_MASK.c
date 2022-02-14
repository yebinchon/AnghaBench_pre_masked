
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct ftmac100 {scalar_t__ base; } ;


 scalar_t__ VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int FUNC_0 (int) ;
 unsigned int FUNC_1 (int) ;
 unsigned int FUNC_2 (scalar_t__) ;
 int FUNC_3 (unsigned int,scalar_t__) ;
 int FUNC_4 (struct net_device*,char*) ;
 struct ftmac100* FUNC_5 (struct net_device*) ;
 int FUNC_6 (int) ;

__attribute__((used)) static int FUNC_7(struct net_device *VAR_3, int VAR_4, int VAR_5)
{
 struct ftmac100 *VAR_6 = FUNC_5(VAR_3);
 unsigned int VAR_7;
 int VAR_8;

 VAR_7 = FUNC_0(VAR_4) |
  FUNC_1(VAR_5) |
  VAR_1;

 FUNC_3(VAR_7, VAR_6->base + VAR_0);

 for (VAR_8 = 0; VAR_8 < 10; VAR_8++) {
  VAR_7 = FUNC_2(VAR_6->base + VAR_0);

  if ((VAR_7 & VAR_1) == 0)
   return VAR_7 & VAR_2;

  FUNC_6(100);
 }

 FUNC_4(VAR_3, "mdio read timed out\n");
 return 0;
}
