
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ loopback_mode; } ;
struct niu {size_t port; int lock; TYPE_2__* parent; TYPE_3__ link_config; } ;
struct TYPE_4__ {int** phy_id; } ;
struct TYPE_5__ {TYPE_1__ phy_probe_info; int port_phy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;

 int FUNC_0 (struct niu*,int*) ;
 int FUNC_1 (struct niu*,int*) ;
 int FUNC_2 (int ,size_t) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_5(struct niu *VAR_3, int *VAR_4)
{
 unsigned long VAR_5;
 int VAR_6 = -VAR_0;

 FUNC_3(&VAR_3->lock, VAR_5);

 if (VAR_3->link_config.loopback_mode == VAR_1) {
  int VAR_7;

  VAR_7 = FUNC_2(VAR_3->parent->port_phy, VAR_3->port);
  VAR_7 = VAR_3->parent->phy_probe_info.phy_id[VAR_7][VAR_3->port];


  switch (VAR_7 & VAR_2) {
  case 128:
   VAR_6 = FUNC_1(VAR_3, VAR_4);
   break;

  default:
   VAR_6 = FUNC_0(VAR_3, VAR_4);
   break;
  }
 }

 FUNC_4(&VAR_3->lock, VAR_5);

 return VAR_6;
}
