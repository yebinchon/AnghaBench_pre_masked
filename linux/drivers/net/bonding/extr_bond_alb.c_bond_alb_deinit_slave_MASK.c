
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct slave {int dummy; } ;
struct TYPE_2__ {int * rx_slave; scalar_t__ rlb_enabled; } ;
struct bonding {TYPE_1__ alb_info; } ;


 int FUNC_0 (struct bonding*,struct slave*) ;
 scalar_t__ FUNC_1 (struct bonding*) ;
 int FUNC_2 (struct bonding*,struct slave*) ;
 int FUNC_3 (struct bonding*,struct slave*,int ) ;

void FUNC_4(struct bonding *VAR_0, struct slave *VAR_1)
{
 if (FUNC_1(VAR_0))
  FUNC_0(VAR_0, VAR_1);

 FUNC_3(VAR_0, VAR_1, 0);

 if (VAR_0->alb_info.rlb_enabled) {
  VAR_0->alb_info.rx_slave = ((void*)0);
  FUNC_2(VAR_0, VAR_1);
 }

}
