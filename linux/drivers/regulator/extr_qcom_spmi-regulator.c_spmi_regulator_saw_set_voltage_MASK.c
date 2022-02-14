
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct spmi_regulator {int dummy; } ;
struct regulator_dev {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,scalar_t__,scalar_t__) ;
 struct spmi_regulator* FUNC_1 (struct regulator_dev*) ;
 int FUNC_2 (int ,int ,scalar_t__*,int) ;
 int VAR_1 ;
 int FUNC_3 (struct spmi_regulator*,unsigned int,scalar_t__*,scalar_t__*) ;

__attribute__((used)) static int
FUNC_4(struct regulator_dev *VAR_2, unsigned VAR_3)
{
 struct spmi_regulator *VAR_4 = FUNC_1(VAR_2);
 int VAR_5;
 u8 VAR_6, VAR_7;

 VAR_5 = FUNC_3(VAR_4, VAR_3, &VAR_6, &VAR_7);
 if (VAR_5)
  return VAR_5;

 if (0 != VAR_6) {
  FUNC_0(&VAR_2->dev, "range_sel = %02X voltage_sel = %02X", VAR_6, VAR_7);

  return -VAR_0;
 }


 return FUNC_2(0, VAR_1, &VAR_7, 1);

}
