
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct ftmac100 {scalar_t__ base; struct net_device* netdev; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 scalar_t__ VAR_2 ;
 unsigned int FUNC_0 (scalar_t__) ;
 int FUNC_1 (unsigned int,scalar_t__) ;
 int FUNC_2 (struct net_device*,char*) ;
 int FUNC_3 (int) ;

__attribute__((used)) static int FUNC_4(struct ftmac100 *VAR_3)
{
 struct net_device *VAR_4 = VAR_3->netdev;
 int VAR_5;


 FUNC_1(VAR_1, VAR_3->base + VAR_2);

 for (VAR_5 = 0; VAR_5 < 5; VAR_5++) {
  unsigned int VAR_6;

  VAR_6 = FUNC_0(VAR_3->base + VAR_2);
  if (!(VAR_6 & VAR_1)) {





   FUNC_3(500);
   return 0;
  }

  FUNC_3(1000);
 }

 FUNC_2(VAR_4, "software reset failed\n");
 return -VAR_0;
}
