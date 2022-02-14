
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ duplex; int speed; scalar_t__ link_up; } ;
struct TYPE_4__ {TYPE_1__ s; } ;
struct oct_link_info {TYPE_2__ link; } ;
struct net_device {int dummy; } ;
struct lio {int netdev; struct oct_link_info linfo; } ;


 struct lio* FUNC_0 (struct net_device*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (struct lio*,int ) ;
 int VAR_2 ;
 int FUNC_2 (struct lio*,int ,int ,char*,...) ;

__attribute__((used)) static void FUNC_3(struct net_device *VAR_3)
{
 struct lio *VAR_4 = FUNC_0(VAR_3);

 if (!FUNC_1(VAR_4, VAR_1) &&
     FUNC_1(VAR_4, VAR_0)) {
  struct oct_link_info *VAR_5 = &VAR_4->linfo;

  if (VAR_5->link.s.link_up) {
   FUNC_2(VAR_4, VAR_2, VAR_4->netdev, "%d Mbps %s Duplex UP\n",
       VAR_5->link.s.speed,
       (VAR_5->link.s.duplex) ? "Full" : "Half");
  } else {
   FUNC_2(VAR_4, VAR_2, VAR_4->netdev, "Link Down\n");
  }
 }
}
