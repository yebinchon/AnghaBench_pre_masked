
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct TYPE_2__ {int state; } ;
struct m_can_classdev {TYPE_1__ can; } ;


 int VAR_0 ;
 int FUNC_0 (struct m_can_classdev*) ;
 struct m_can_classdev* FUNC_1 (struct net_device*) ;

__attribute__((used)) static void FUNC_2(struct net_device *VAR_1)
{
 struct m_can_classdev *VAR_2 = FUNC_1(VAR_1);


 FUNC_0(VAR_2);


 VAR_2->can.state = VAR_0;
}
