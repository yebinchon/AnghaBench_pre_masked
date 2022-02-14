
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct slic_device {int speed; unsigned int duplex; struct net_device* netdev; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct net_device*) ;
 scalar_t__ FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct slic_device*) ;
 int FUNC_4 (struct slic_device*) ;
 int FUNC_5 (struct slic_device*) ;
 int FUNC_6 (struct slic_device*) ;

__attribute__((used)) static void FUNC_7(struct slic_device *VAR_1, int VAR_2,
           unsigned int VAR_3)
{
 struct net_device *VAR_4 = VAR_1->netdev;

 if (VAR_1->speed == VAR_2 && VAR_1->duplex == VAR_3)
  return;

 VAR_1->speed = VAR_2;
 VAR_1->duplex = VAR_3;

 if (VAR_1->speed == VAR_0) {
  if (FUNC_1(VAR_4))
   FUNC_0(VAR_4);
 } else {

  FUNC_3(VAR_1);
  FUNC_5(VAR_1);
  FUNC_4(VAR_1);
  FUNC_6(VAR_1);

  if (!FUNC_1(VAR_4))
   FUNC_2(VAR_4);
 }
}
