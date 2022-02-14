
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct s3c2410_wdt {TYPE_1__* drv_data; int dev; int pmureg; } ;
struct TYPE_2__ {int quirks; int rst_stat_bit; int rst_stat_reg; } ;


 unsigned int FUNC_0 (int ) ;
 int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ,int ,unsigned int*) ;

__attribute__((used)) static inline unsigned int FUNC_3(struct s3c2410_wdt *VAR_2)
{
 unsigned int VAR_3;
 int VAR_4;

 if (!(VAR_2->drv_data->quirks & VAR_0))
  return 0;

 VAR_4 = FUNC_2(VAR_2->pmureg, VAR_2->drv_data->rst_stat_reg, &VAR_3);
 if (VAR_4)
  FUNC_1(VAR_2->dev, "Couldn't get RST_STAT register\n");
 else if (VAR_3 & FUNC_0(VAR_2->drv_data->rst_stat_bit))
  return VAR_1;

 return 0;
}
