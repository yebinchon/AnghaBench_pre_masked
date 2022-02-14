
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct reg_info {int uA; int uV; int reg; } ;
struct qcom_mss_reg_res {int uA; int uV; scalar_t__ supply; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct device*,char*,scalar_t__) ;
 int FUNC_3 (struct device*,scalar_t__) ;

__attribute__((used)) static int FUNC_4(struct device *VAR_1, struct reg_info *VAR_2,
          const struct qcom_mss_reg_res *VAR_3)
{
 int VAR_4;
 int VAR_5;

 if (!VAR_3)
  return 0;

 for (VAR_5 = 0; VAR_3[VAR_5].supply; VAR_5++) {
  VAR_2[VAR_5].reg = FUNC_3(VAR_1, VAR_3[VAR_5].supply);
  if (FUNC_0(VAR_2[VAR_5].reg)) {
   VAR_4 = FUNC_1(VAR_2[VAR_5].reg);
   if (VAR_4 != -VAR_0)
    FUNC_2(VAR_1, "Failed to get %s\n regulator",
     VAR_3[VAR_5].supply);
   return VAR_4;
  }

  VAR_2[VAR_5].uV = VAR_3[VAR_5].uV;
  VAR_2[VAR_5].uA = VAR_3[VAR_5].uA;
 }

 return VAR_5;
}
