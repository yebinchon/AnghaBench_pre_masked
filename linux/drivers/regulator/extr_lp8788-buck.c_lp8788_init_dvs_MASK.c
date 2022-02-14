
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct platform_device {int dummy; } ;
struct lp8788_platform_data {int buck2_dvs; int buck1_dvs; } ;
struct lp8788_buck {TYPE_1__* lp; } ;
typedef enum lp8788_buck_id { ____Placeholder_lp8788_buck_id } lp8788_buck_id ;
struct TYPE_2__ {struct lp8788_platform_data* pdata; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_0 (struct platform_device*,struct lp8788_buck*,int) ;
 int FUNC_1 (TYPE_1__*,int ,int ,int ) ;

__attribute__((used)) static int FUNC_2(struct platform_device *VAR_9,
   struct lp8788_buck *VAR_10, enum lp8788_buck_id VAR_11)
{
 struct lp8788_platform_data *VAR_12 = VAR_10->lp->pdata;
 u8 VAR_13[] = { VAR_4, VAR_7 };
 u8 VAR_14[] = { VAR_3, VAR_6 };
 u8 VAR_15[] = { VAR_2, VAR_5 };


 if (VAR_11 > VAR_1)
  return 0;


 if (!VAR_12)
  goto set_default_dvs_mode;

 if ((VAR_11 == VAR_0 && !VAR_12->buck1_dvs) ||
  (VAR_11 == VAR_1 && !VAR_12->buck2_dvs))
  goto set_default_dvs_mode;

 if (FUNC_0(VAR_9, VAR_10, VAR_11))
  goto set_default_dvs_mode;

 return FUNC_1(VAR_10->lp, VAR_8, VAR_13[VAR_11],
    VAR_14[VAR_11]);

set_default_dvs_mode:
 return FUNC_1(VAR_10->lp, VAR_8, VAR_13[VAR_11],
      VAR_15[VAR_11]);
}
