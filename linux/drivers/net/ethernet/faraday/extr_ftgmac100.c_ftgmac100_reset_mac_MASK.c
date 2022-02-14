
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u32 ;
struct net_device {int dummy; } ;
struct ftgmac100 {scalar_t__ base; struct net_device* netdev; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 scalar_t__ VAR_2 ;
 unsigned int FUNC_0 (scalar_t__) ;
 int FUNC_1 (unsigned int,scalar_t__) ;
 int FUNC_2 (struct net_device*,char*) ;
 int FUNC_3 (int) ;

__attribute__((used)) static int FUNC_4(struct ftgmac100 *VAR_3, u32 VAR_4)
{
 struct net_device *VAR_5 = VAR_3->netdev;
 int VAR_6;


 FUNC_1(VAR_4, VAR_3->base + VAR_2);
 FUNC_1(VAR_4 | VAR_1,
    VAR_3->base + VAR_2);
 for (VAR_6 = 0; VAR_6 < 200; VAR_6++) {
  unsigned int VAR_7;

  VAR_7 = FUNC_0(VAR_3->base + VAR_2);
  if (!(VAR_7 & VAR_1))
   return 0;

  FUNC_3(1);
 }

 FUNC_2(VAR_5, "Hardware reset failed\n");
 return -VAR_0;
}
