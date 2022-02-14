
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct slave {TYPE_1__* dev; int perm_hwaddr; } ;
struct TYPE_4__ {int rlb_rebalance; scalar_t__ rlb_enabled; int tx_rebalance_counter; } ;
struct bonding {TYPE_2__ alb_info; } ;
struct TYPE_3__ {int addr_len; } ;


 int VAR_0 ;
 int FUNC_0 (struct bonding*,struct slave*) ;
 int FUNC_1 (struct slave*,int ,int ) ;
 int FUNC_2 (struct slave*) ;

int FUNC_3(struct bonding *VAR_1, struct slave *VAR_2)
{
 int VAR_3;

 VAR_3 = FUNC_1(VAR_2, VAR_2->perm_hwaddr,
         VAR_2->dev->addr_len);
 if (VAR_3)
  return VAR_3;

 VAR_3 = FUNC_0(VAR_1, VAR_2);
 if (VAR_3)
  return VAR_3;

 FUNC_2(VAR_2);


 VAR_1->alb_info.tx_rebalance_counter = VAR_0;

 if (VAR_1->alb_info.rlb_enabled)
  VAR_1->alb_info.rlb_rebalance = 1;

 return 0;
}
