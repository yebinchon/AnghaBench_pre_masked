
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct pcmcia_device {int socket; } ;
struct net_device {int dummy; } ;
struct TYPE_3__ {struct pcmcia_device* p_dev; } ;
typedef TYPE_1__ mace_private ;


 int FUNC_0 (struct net_device*,char*) ;
 TYPE_1__* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (char*) ;

__attribute__((used)) static void FUNC_6(struct net_device *VAR_0)
{
  mace_private *VAR_1 = FUNC_1(VAR_0);
  struct pcmcia_device *VAR_2 = VAR_1->p_dev;

  FUNC_0(VAR_0, "transmit timed out -- ");




  FUNC_5("NOT resetting card\n");

  FUNC_2(VAR_0);
  FUNC_3(VAR_0);
}
