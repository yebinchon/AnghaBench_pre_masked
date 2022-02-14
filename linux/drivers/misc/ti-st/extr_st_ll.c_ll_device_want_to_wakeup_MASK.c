
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ti_st_plat_data {int (* chip_awake ) (int *) ;} ;
struct st_data_s {int ll_state; struct kim_data_s* kim_data; } ;
struct kim_data_s {TYPE_2__* kim_pdev; } ;
struct TYPE_3__ {struct ti_st_plat_data* platform_data; } ;
struct TYPE_4__ {TYPE_1__ dev; } ;


 int VAR_0 ;




 int FUNC_0 (char*) ;
 int FUNC_1 (struct st_data_s*,int ) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct st_data_s *VAR_1)
{
 struct kim_data_s *VAR_2;
 struct ti_st_plat_data *VAR_3;


 switch (VAR_1->ll_state) {
 case 131:
  FUNC_1(VAR_1, VAR_0);
  break;
 case 130:

  FUNC_0("duplicate wake_ind while waiting for Wake ack");
  break;
 case 129:

  FUNC_0("duplicate wake_ind already AWAKE");
  break;
 case 128:

  FUNC_0("duplicate wake_ind");
  break;
 }

 VAR_1->ll_state = 129;


 VAR_2 = VAR_1->kim_data;
 VAR_3 = VAR_2->kim_pdev->dev.platform_data;
 if (VAR_3->chip_awake)
  VAR_3->chip_awake(((void*)0));
}
