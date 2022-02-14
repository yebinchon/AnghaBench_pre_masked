
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct s3c2410_wdt {int dev; TYPE_1__* drv_data; int pmureg; } ;
struct TYPE_2__ {int mask_bit; int quirks; int mask_reset_reg; int disable_reg; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int ,int ,int,int) ;

__attribute__((used)) static int FUNC_2(struct s3c2410_wdt *VAR_1, bool VAR_2)
{
 int VAR_3;
 u32 VAR_4 = 1 << VAR_1->drv_data->mask_bit;
 u32 VAR_5 = 0;


 if (!(VAR_1->drv_data->quirks & VAR_0))
  return 0;

 if (VAR_2)
  VAR_5 = VAR_4;

 VAR_3 = FUNC_1(VAR_1->pmureg,
   VAR_1->drv_data->disable_reg,
   VAR_4, VAR_5);
 if (VAR_3 < 0)
  goto error;

 VAR_3 = FUNC_1(VAR_1->pmureg,
   VAR_1->drv_data->mask_reset_reg,
   VAR_4, VAR_5);
 error:
 if (VAR_3 < 0)
  FUNC_0(VAR_1->dev, "failed to update reg(%d)\n", VAR_3);

 return VAR_3;
}
