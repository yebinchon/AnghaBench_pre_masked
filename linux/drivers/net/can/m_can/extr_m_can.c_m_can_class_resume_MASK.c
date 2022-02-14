
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct TYPE_2__ {int state; } ;
struct m_can_classdev {TYPE_1__ can; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 struct net_device* FUNC_0 (struct device*) ;
 int FUNC_1 (struct m_can_classdev*) ;
 int FUNC_2 (struct m_can_classdev*) ;
 int FUNC_3 (struct net_device*) ;
 struct m_can_classdev* FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct net_device*) ;
 scalar_t__ FUNC_6 (struct net_device*) ;
 int FUNC_7 (struct net_device*) ;
 int FUNC_8 (struct device*) ;

int FUNC_9(struct device *VAR_1)
{
 struct net_device *VAR_2 = FUNC_0(VAR_1);
 struct m_can_classdev *VAR_3 = FUNC_4(VAR_2);

 FUNC_8(VAR_1);

 VAR_3->can.state = VAR_0;

 if (FUNC_6(VAR_2)) {
  int VAR_4;

  VAR_4 = FUNC_1(VAR_3);
  if (VAR_4)
   return VAR_4;

  FUNC_2(VAR_3);
  FUNC_3(VAR_2);
  FUNC_5(VAR_2);
  FUNC_7(VAR_2);
 }

 return 0;
}
