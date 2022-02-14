
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct TYPE_2__ {unsigned int echo_skb_max; int * echo_skb; } ;
struct m_can_classdev {TYPE_1__ can; } ;


 struct m_can_classdev* FUNC_0 (struct net_device*) ;

__attribute__((used)) static int FUNC_1(struct net_device *VAR_0, int VAR_1)
{
 struct m_can_classdev *VAR_2 = FUNC_0(VAR_0);

 unsigned int VAR_3 = VAR_2->can.echo_skb_max;
 int VAR_4;


 VAR_4 = (++VAR_1 >= VAR_3 ? 0 : VAR_1);


 return !!VAR_2->can.echo_skb[VAR_4];
}
