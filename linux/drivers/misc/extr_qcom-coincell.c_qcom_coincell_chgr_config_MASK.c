
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qcom_coincell {scalar_t__ base_addr; int regmap; int dev; } ;


 int FUNC_0 (int*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (int ,char*,...) ;
 int* VAR_5 ;
 int* VAR_6 ;
 int FUNC_2 (int ,scalar_t__,int) ;

__attribute__((used)) static int FUNC_3(struct qcom_coincell *VAR_7, int VAR_8,
         int VAR_9, bool VAR_10)
{
 int VAR_11, VAR_12, VAR_13;


 if (!VAR_10)
  return FUNC_2(VAR_7->regmap,
     VAR_7->base_addr + VAR_2, 0);


 for (VAR_11 = 0; VAR_11 < FUNC_0(VAR_5); VAR_11++)
  if (VAR_8 == VAR_5[VAR_11])
   break;

 if (VAR_11 >= FUNC_0(VAR_5)) {
  FUNC_1(VAR_7->dev, "invalid rset-ohms value %d\n", VAR_8);
  return -VAR_0;
 }


 for (VAR_12 = 0; VAR_12 < FUNC_0(VAR_6); VAR_12++)
  if (VAR_9 == VAR_6[VAR_12])
   break;

 if (VAR_12 >= FUNC_0(VAR_6)) {
  FUNC_1(VAR_7->dev, "invalid vset-millivolts value %d\n", VAR_9);
  return -VAR_0;
 }

 VAR_13 = FUNC_2(VAR_7->regmap,
     VAR_7->base_addr + VAR_3, VAR_11);
 if (VAR_13) {






  FUNC_1(VAR_7->dev, "could not write to RSET register\n");
  return VAR_13;
 }

 VAR_13 = FUNC_2(VAR_7->regmap,
  VAR_7->base_addr + VAR_4, VAR_12);
 if (VAR_13)
  return VAR_13;


 return FUNC_2(VAR_7->regmap,
       VAR_7->base_addr + VAR_2,
       VAR_1);
}
