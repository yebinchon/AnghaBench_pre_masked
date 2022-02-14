
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct spmi_pmic_arb {TYPE_1__* ver_ops; } ;
struct spmi_controller {int dev; } ;
struct TYPE_2__ {int (* non_data_cmd ) (struct spmi_controller*,int ,int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,char*,int ,int ) ;
 struct spmi_pmic_arb* FUNC_1 (struct spmi_controller*) ;
 int FUNC_2 (struct spmi_controller*,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct spmi_controller *VAR_3, u8 VAR_4, u8 VAR_5)
{
 struct spmi_pmic_arb *VAR_6 = FUNC_1(VAR_3);

 FUNC_0(&VAR_3->dev, "cmd op:0x%x sid:%d\n", VAR_4, VAR_5);


 if (VAR_4 < VAR_1 || VAR_4 > VAR_2)
  return -VAR_0;

 return VAR_6->ver_ops->non_data_cmd(VAR_3, VAR_4, VAR_5);
}
