
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct megasas_pd_list {int dummy; } ;
struct megasas_instance {TYPE_1__* pdev; scalar_t__ enable_fw_dev_list; int ld_ids; int pd_list; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,char*) ;
 scalar_t__ FUNC_1 (struct megasas_instance*) ;
 scalar_t__ FUNC_2 (struct megasas_instance*,int) ;
 scalar_t__ FUNC_3 (struct megasas_instance*,int ) ;
 int FUNC_4 (int ,int,int) ;

__attribute__((used)) static
int FUNC_5(struct megasas_instance *VAR_5)
{
 FUNC_4(VAR_5->pd_list, 0,
        (VAR_2 * sizeof(struct megasas_pd_list)));
 FUNC_4(VAR_5->ld_ids, 0xff, VAR_1);

 if (VAR_5->enable_fw_dev_list) {
  if (FUNC_2(VAR_5, 1))
   return VAR_0;
 } else {
  if (FUNC_1(VAR_5) < 0) {
   FUNC_0(&VAR_5->pdev->dev, "failed to get PD list\n");
   return VAR_0;
  }

  if (FUNC_3(VAR_5,
       VAR_3)) {
   FUNC_0(&VAR_5->pdev->dev, "failed to get LD list\n");
   return VAR_0;
  }
 }

 return VAR_4;
}
