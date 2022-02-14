
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef union gve_adminq_command {int dummy; } gve_adminq_command ;
struct gve_priv {int adminq_bus_addr; int adminq_mask; TYPE_1__* reg_bar0; scalar_t__ adminq_prod_cnt; int adminq; } ;
struct device {int dummy; } ;
struct TYPE_2__ {int adminq_pfn; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct device*,int,int*,int ) ;
 int FUNC_1 (struct gve_priv*) ;
 int FUNC_2 (int,int *) ;
 scalar_t__ FUNC_3 (int) ;

int FUNC_4(struct device *VAR_3, struct gve_priv *VAR_4)
{
 VAR_4->adminq = FUNC_0(VAR_3, VAR_2,
       &VAR_4->adminq_bus_addr, VAR_1);
 if (FUNC_3(!VAR_4->adminq))
  return -VAR_0;

 VAR_4->adminq_mask = (VAR_2 / sizeof(union gve_adminq_command)) - 1;
 VAR_4->adminq_prod_cnt = 0;


 FUNC_2(VAR_4->adminq_bus_addr / VAR_2,
      &VAR_4->reg_bar0->adminq_pfn);

 FUNC_1(VAR_4);
 return 0;
}
