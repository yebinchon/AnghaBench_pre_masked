
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct notifier_block {int dummy; } ;
struct net_device {int dummy; } ;
struct lapbethdev {int axdev; } ;





 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct net_device*) ;
 int * FUNC_2 (struct net_device*) ;
 int VAR_1 ;
 int FUNC_3 (struct lapbethdev*) ;
 struct lapbethdev* FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct net_device*) ;
 struct net_device* FUNC_6 (void*) ;

__attribute__((used)) static int FUNC_7(struct notifier_block *VAR_2,
    unsigned long VAR_3, void *VAR_4)
{
 struct lapbethdev *VAR_5;
 struct net_device *VAR_6 = FUNC_6(VAR_4);

 if (FUNC_2(VAR_6) != &VAR_1)
  return VAR_0;

 if (!FUNC_1(VAR_6))
  return VAR_0;

 switch (VAR_3) {
 case 128:

  if (FUNC_4(VAR_6) == ((void*)0))
   FUNC_5(VAR_6);
  break;
 case 130:

  VAR_5 = FUNC_4(VAR_6);
  if (VAR_5)
   FUNC_0(VAR_5->axdev);
  break;
 case 129:

  VAR_5 = FUNC_4(VAR_6);
  if (VAR_5)
   FUNC_3(VAR_5);
  break;
 }

 return VAR_0;
}
