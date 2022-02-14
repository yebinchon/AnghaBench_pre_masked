
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct reset_controller_dev {int dummy; } ;
struct qcom_pdc_reset_data {int regmap; } ;
struct TYPE_2__ {int bit; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ,int ,int ) ;
 TYPE_1__* VAR_1 ;
 struct qcom_pdc_reset_data* FUNC_2 (struct reset_controller_dev*) ;

__attribute__((used)) static int FUNC_3(struct reset_controller_dev *VAR_2,
     unsigned long VAR_3)
{
 struct qcom_pdc_reset_data *VAR_4 = FUNC_2(VAR_2);

 return FUNC_1(VAR_4->regmap, VAR_0,
      FUNC_0(VAR_1[VAR_3].bit), 0);
}
