
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct slave {TYPE_2__* dev; } ;
struct TYPE_3__ {int peer_notif_delay; } ;
struct bonding {int send_peer_notif; int dev; TYPE_1__ params; int curr_active_slave; } ;
struct TYPE_4__ {char* name; int state; } ;


 int VAR_0 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (int ,char*,char*) ;
 int FUNC_2 (int ) ;
 struct slave* FUNC_3 (int ) ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 scalar_t__ FUNC_6 (int ,int *) ;

__attribute__((used)) static bool FUNC_7(struct bonding *VAR_1)
{
 struct slave *VAR_2;

 FUNC_4();
 VAR_2 = FUNC_3(VAR_1->curr_active_slave);
 FUNC_5();

 FUNC_1(VAR_1->dev, "bond_should_notify_peers: slave %s\n",
     VAR_2 ? VAR_2->dev->name : "NULL");

 if (!VAR_2 || !VAR_1->send_peer_notif ||
     VAR_1->send_peer_notif %
     FUNC_0(1, VAR_1->params.peer_notif_delay) != 0 ||
     !FUNC_2(VAR_1->dev) ||
     FUNC_6(VAR_0, &VAR_2->dev->state))
  return 0;

 return 1;
}
