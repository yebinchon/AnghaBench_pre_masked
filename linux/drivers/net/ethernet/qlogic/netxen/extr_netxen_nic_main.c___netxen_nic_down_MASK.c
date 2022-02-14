
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int revision_id; } ;
struct netxen_adapter {scalar_t__ is_up; int capabilities; int (* set_promisc ) (struct netxen_adapter*,int ) ;TYPE_1__ ahw; int (* stop_port ) (struct netxen_adapter*) ;int state; } ;
struct net_device {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_3 ;
 int FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct netxen_adapter*,int ) ;
 int FUNC_4 (struct netxen_adapter*) ;
 int FUNC_5 (struct netxen_adapter*) ;
 int FUNC_6 (struct netxen_adapter*) ;
 int FUNC_7 () ;
 int FUNC_8 (struct netxen_adapter*) ;
 int FUNC_9 (struct netxen_adapter*,int ) ;
 int FUNC_10 (int ,int *) ;

__attribute__((used)) static void
FUNC_11(struct netxen_adapter *VAR_4, struct net_device *VAR_5)
{
 if (VAR_4->is_up != VAR_0)
  return;

 if (!FUNC_10(VAR_3, &VAR_4->state))
  return;

 FUNC_7();
 FUNC_1(VAR_5);
 FUNC_2(VAR_5);

 if (VAR_4->capabilities & VAR_2)
  FUNC_3(VAR_4, 0);

 if (VAR_4->stop_port)
  VAR_4->stop_port(VAR_4);

 if (FUNC_0(VAR_4->ahw.revision_id))
  FUNC_5(VAR_4);

 VAR_4->set_promisc(VAR_4, VAR_1);

 FUNC_4(VAR_4);

 FUNC_6(VAR_4);
}
