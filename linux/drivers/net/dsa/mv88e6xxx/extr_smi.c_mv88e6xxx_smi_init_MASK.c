
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mv88e6xxx_chip {int sw_addr; struct mii_bus* bus; int * smi_ops; TYPE_1__* info; } ;
struct mii_bus {int dummy; } ;
struct TYPE_2__ {scalar_t__ multi_chip; scalar_t__ dual_chip; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

int FUNC_0(struct mv88e6xxx_chip *VAR_4,
         struct mii_bus *VAR_5, int VAR_6)
{
 if (VAR_4->info->dual_chip)
  VAR_4->smi_ops = &VAR_2;
 else if (VAR_6 == 0)
  VAR_4->smi_ops = &VAR_1;
 else if (VAR_4->info->multi_chip)
  VAR_4->smi_ops = &VAR_3;
 else
  return -VAR_0;

 VAR_4->bus = VAR_5;
 VAR_4->sw_addr = VAR_6;

 return 0;
}
