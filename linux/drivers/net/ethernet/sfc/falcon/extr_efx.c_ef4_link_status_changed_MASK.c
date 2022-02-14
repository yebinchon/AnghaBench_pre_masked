
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct ef4_link_state {scalar_t__ up; scalar_t__ fd; int speed; } ;
struct ef4_nic {TYPE_1__* net_dev; int n_link_state_changes; struct ef4_link_state link_state; } ;
struct TYPE_6__ {int mtu; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (struct ef4_nic*,int ,TYPE_1__*,char*,...) ;
 int FUNC_4 (TYPE_1__*) ;

void FUNC_5(struct ef4_nic *VAR_1)
{
 struct ef4_link_state *VAR_2 = &VAR_1->link_state;





 if (!FUNC_4(VAR_1->net_dev))
  return;

 if (VAR_2->up != FUNC_1(VAR_1->net_dev)) {
  VAR_1->n_link_state_changes++;

  if (VAR_2->up)
   FUNC_2(VAR_1->net_dev);
  else
   FUNC_0(VAR_1->net_dev);
 }


 if (VAR_2->up)
  FUNC_3(VAR_1, VAR_0, VAR_1->net_dev,
      "link up at %uMbps %s-duplex (MTU %d)\n",
      VAR_2->speed, VAR_2->fd ? "full" : "half",
      VAR_1->net_dev->mtu);
 else
  FUNC_3(VAR_1, VAR_0, VAR_1->net_dev, "link down\n");
}
