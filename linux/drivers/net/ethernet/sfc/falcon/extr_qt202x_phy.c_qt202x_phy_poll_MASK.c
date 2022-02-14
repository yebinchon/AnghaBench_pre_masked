
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int up; int speed; int fd; int fc; } ;
struct ef4_nic {scalar_t__ phy_type; TYPE_1__ link_state; int wanted_fc; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct ef4_nic*) ;
 int FUNC_1 (struct ef4_nic*) ;

__attribute__((used)) static bool FUNC_2(struct ef4_nic *VAR_1)
{
 bool VAR_2 = VAR_1->link_state.up;

 VAR_1->link_state.up = FUNC_1(VAR_1);
 VAR_1->link_state.speed = 10000;
 VAR_1->link_state.fd = 1;
 VAR_1->link_state.fc = VAR_1->wanted_fc;

 if (VAR_1->phy_type == VAR_0)
  FUNC_0(VAR_1);

 return VAR_1->link_state.up != VAR_2;
}
