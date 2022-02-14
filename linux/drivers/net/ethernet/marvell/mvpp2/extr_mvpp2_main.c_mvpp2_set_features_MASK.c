
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int features; } ;
struct mvpp2_port {int dummy; } ;
typedef int netdev_features_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct mvpp2_port*) ;
 int FUNC_1 (struct mvpp2_port*) ;
 int FUNC_2 (struct mvpp2_port*) ;
 int FUNC_3 (struct mvpp2_port*) ;
 int FUNC_4 (struct mvpp2_port*) ;
 struct mvpp2_port* FUNC_5 (struct net_device*) ;

__attribute__((used)) static int FUNC_6(struct net_device *VAR_2,
         netdev_features_t VAR_3)
{
 netdev_features_t VAR_4 = VAR_2->features ^ VAR_3;
 struct mvpp2_port *VAR_5 = FUNC_5(VAR_2);

 if (VAR_4 & VAR_0) {
  if (VAR_3 & VAR_0) {
   FUNC_3(VAR_5);
  } else {



   FUNC_4(VAR_5);

   FUNC_2(VAR_5);
  }
 }

 if (VAR_4 & VAR_1) {
  if (VAR_3 & VAR_1)
   FUNC_1(VAR_5);
  else
   FUNC_0(VAR_5);
 }

 return 0;
}
