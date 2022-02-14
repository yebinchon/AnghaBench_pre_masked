
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct reset_controller_dev {int dummy; } ;
struct qcom_aoss_reset_map {scalar_t__ reg; } ;
struct qcom_aoss_reset_data {scalar_t__ base; TYPE_1__* desc; } ;
struct TYPE_2__ {struct qcom_aoss_reset_map* resets; } ;


 struct qcom_aoss_reset_data* FUNC_0 (struct reset_controller_dev*) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct reset_controller_dev *VAR_0,
        unsigned long VAR_1)
{
 struct qcom_aoss_reset_data *VAR_2 = FUNC_0(VAR_0);
 const struct qcom_aoss_reset_map *VAR_3 = &VAR_2->desc->resets[VAR_1];

 FUNC_2(1, VAR_2->base + VAR_3->reg);

 FUNC_1(200, 300);
 return 0;
}
