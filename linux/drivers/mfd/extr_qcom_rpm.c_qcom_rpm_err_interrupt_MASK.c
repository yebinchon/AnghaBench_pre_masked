
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qcom_rpm {int dev; int ipc_bit; int ipc_offset; int ipc_regmap; } ;
typedef int irqreturn_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ,int ,int ) ;

__attribute__((used)) static irqreturn_t FUNC_3(int VAR_1, void *VAR_2)
{
 struct qcom_rpm *VAR_3 = VAR_2;

 FUNC_2(VAR_3->ipc_regmap, VAR_3->ipc_offset, FUNC_0(VAR_3->ipc_bit));
 FUNC_1(VAR_3->dev, "RPM triggered fatal error\n");

 return VAR_0;
}
