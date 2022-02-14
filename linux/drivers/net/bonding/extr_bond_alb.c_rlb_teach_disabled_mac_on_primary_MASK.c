
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct slave {int dev; } ;
struct TYPE_2__ {int primary_is_promisc; scalar_t__ rlb_promisc_timeout_counter; } ;
struct bonding {TYPE_1__ alb_info; int curr_active_slave; } ;


 int FUNC_0 (struct slave*,int *,int) ;
 int FUNC_1 (int ,int) ;
 struct slave* FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct bonding *VAR_0, u8 VAR_1[])
{
 struct slave *VAR_2 = FUNC_2(VAR_0->curr_active_slave);

 if (!VAR_2)
  return;

 if (!VAR_0->alb_info.primary_is_promisc) {
  if (!FUNC_1(VAR_2->dev, 1))
   VAR_0->alb_info.primary_is_promisc = 1;
  else
   VAR_0->alb_info.primary_is_promisc = 0;
 }

 VAR_0->alb_info.rlb_promisc_timeout_counter = 0;

 FUNC_0(VAR_2, VAR_1, 1);
}
