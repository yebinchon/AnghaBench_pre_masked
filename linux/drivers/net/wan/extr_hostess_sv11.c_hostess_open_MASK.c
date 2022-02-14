
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int rx_function; } ;
struct z8530_dev {TYPE_1__ chanA; } ;
struct net_device {int dummy; } ;


 struct z8530_dev* FUNC_0 (struct net_device*) ;
 int VAR_0 ;
 int FUNC_1 (struct net_device*) ;
 int VAR_1 ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*,TYPE_1__*) ;
 int FUNC_4 (struct net_device*,TYPE_1__*) ;
 int FUNC_5 (struct net_device*,TYPE_1__*) ;
 int FUNC_6 (struct net_device*,TYPE_1__*) ;
 int FUNC_7 (struct net_device*,TYPE_1__*) ;
 int FUNC_8 (struct net_device*,TYPE_1__*) ;

__attribute__((used)) static int FUNC_9(struct net_device *VAR_2)
{
 struct z8530_dev *VAR_3 = FUNC_0(VAR_2);
 int VAR_4 = -1;




 switch (VAR_0) {
  case 0:
   VAR_4 = FUNC_6(VAR_2, &VAR_3->chanA);
   break;
  case 1:
   VAR_4 = FUNC_5(VAR_2, &VAR_3->chanA);
   break;
  case 2:
   VAR_4 = FUNC_8(VAR_2, &VAR_3->chanA);
   break;
 }

 if (VAR_4)
  return VAR_4;

 VAR_4 = FUNC_1(VAR_2);
 if (VAR_4) {
  switch (VAR_0) {
   case 0:
    FUNC_3(VAR_2, &VAR_3->chanA);
    break;
   case 1:
    FUNC_4(VAR_2, &VAR_3->chanA);
    break;
   case 2:
    FUNC_7(VAR_2, &VAR_3->chanA);
    break;
  }
  return VAR_4;
 }
 VAR_3->chanA.rx_function = VAR_1;





 FUNC_2(VAR_2);
 return 0;
}
