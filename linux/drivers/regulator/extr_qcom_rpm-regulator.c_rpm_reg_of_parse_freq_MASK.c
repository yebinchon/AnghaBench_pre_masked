
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int const u32 ;
struct qcom_rpm_reg {TYPE_1__* parts; } ;
struct device_node {int dummy; } ;
struct device {int dummy; } ;
struct TYPE_2__ {int freq; } ;


 int FUNC_0 (int const*) ;
 int VAR_0 ;
 int FUNC_1 (struct device*,char*,...) ;
 int FUNC_2 (struct device_node*,char const*,int const*) ;
 int FUNC_3 (struct qcom_rpm_reg*,int *,int) ;

__attribute__((used)) static int FUNC_4(struct device *VAR_1,
     struct device_node *VAR_2,
     struct qcom_rpm_reg *VAR_3)
{
 static const int VAR_4[] = {
  19200000, 9600000, 6400000, 4800000, 3840000, 3200000, 2740000,
  2400000, 2130000, 1920000, 1750000, 1600000, 1480000, 1370000,
  1280000, 1200000,

 };
 const char *VAR_5;
 u32 VAR_6;
 int VAR_7;
 int VAR_8;

 VAR_5 = "qcom,switch-mode-frequency";
 VAR_7 = FUNC_2(VAR_2, VAR_5, &VAR_6);
 if (VAR_7) {
  FUNC_1(VAR_1, "regulator requires %s property\n", VAR_5);
  return -VAR_0;
 }

 for (VAR_8 = 0; VAR_8 < FUNC_0(VAR_4); VAR_8++) {
  if (VAR_6 == VAR_4[VAR_8]) {
   FUNC_3(VAR_3, &VAR_3->parts->freq, VAR_8 + 1);
   return 0;
  }
 }

 FUNC_1(VAR_1, "invalid frequency %d\n", VAR_6);
 return -VAR_0;
}
