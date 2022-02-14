
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct net_device {int dummy; } ;
struct ionic_lif {int state; struct net_device* netdev; TYPE_1__* info; } ;
struct TYPE_4__ {int link_speed; int link_status; } ;
struct TYPE_3__ {TYPE_2__ status; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct net_device*,char*,...) ;
 int FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct net_device*) ;
 int FUNC_6 (struct net_device*) ;
 int FUNC_7 (struct net_device*) ;
 int FUNC_8 (struct net_device*) ;
 scalar_t__ FUNC_9 (int ,int ) ;

__attribute__((used)) static void FUNC_10(struct ionic_lif *VAR_3)
{
 struct net_device *VAR_4 = VAR_3->netdev;
 u16 VAR_5;
 bool VAR_6;

 VAR_5 = FUNC_1(VAR_3->info->status.link_status);
 VAR_6 = VAR_5 == VAR_2;


 if (VAR_6 == FUNC_5(VAR_4))
  goto link_out;

 if (VAR_6) {
  FUNC_3(VAR_4, "Link up - %d Gbps\n",
       FUNC_2(VAR_3->info->status.link_speed) / 1000);

  if (FUNC_9(VAR_1, VAR_3->state)) {
   FUNC_8(VAR_3->netdev);
   FUNC_6(VAR_4);
  }
 } else {
  FUNC_3(VAR_4, "Link down\n");


  FUNC_4(VAR_4);
  if (FUNC_9(VAR_1, VAR_3->state))
   FUNC_7(VAR_4);
 }

link_out:
 FUNC_0(VAR_0, VAR_3->state);
}
